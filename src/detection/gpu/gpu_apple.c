#include "gpu.h"
#include "common/library.h"

#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/graphics/IOGraphicsLib.h>

void ffDetectGPUImpl(FFlist* gpus, const FFinstance* instance)
{
    FF_UNUSED(instance);

    void* iokit = dlopen("/System/Library/Frameworks/IOKit.framework/IOKit", RTLD_LAZY);
    if(iokit == NULL)
        return;

    FF_LIBRARY_LOAD_SYMBOL(iokit, IOServiceMatching, )
    FF_LIBRARY_LOAD_SYMBOL(iokit, IOServiceGetMatchingServices, )
    FF_LIBRARY_LOAD_SYMBOL(iokit, kIOMasterPortDefault, )
    FF_LIBRARY_LOAD_SYMBOL(iokit, IOIteratorNext, )
    FF_LIBRARY_LOAD_SYMBOL(iokit, IORegistryEntryCreateCFProperties, )
    FF_LIBRARY_LOAD_SYMBOL(iokit, kCFAllocatorDefault, )
    FF_LIBRARY_LOAD_SYMBOL(iokit, CFDictionaryGetValue, )
    FF_LIBRARY_LOAD_SYMBOL(iokit, CFGetTypeID, )
    FF_LIBRARY_LOAD_SYMBOL(iokit, CFStringCreateWithCStringNoCopy, )
    FF_LIBRARY_LOAD_SYMBOL(iokit, CFStringGetLength, )
    FF_LIBRARY_LOAD_SYMBOL(iokit, CFStringGetCString, )
    FF_LIBRARY_LOAD_SYMBOL(iokit, CFRelease, )
    FF_LIBRARY_LOAD_SYMBOL(iokit, CFDataGetTypeID, )
    FF_LIBRARY_LOAD_SYMBOL(iokit, IOObjectRelease, )

    CFMutableDictionaryRef matchDict = ffIOServiceMatching(kIOAcceleratorClassName);
    io_iterator_t iterator;
    if(ffIOServiceGetMatchingServices(*ffkIOMasterPortDefault, matchDict, &iterator) != kIOReturnSuccess)
    {
        dlclose(iokit);
        return;
    }

    io_registry_entry_t registryEntry;
    while((registryEntry = ffIOIteratorNext(iterator)) != 0)
    {
        CFMutableDictionaryRef properties;
        if(ffIORegistryEntryCreateCFProperties(registryEntry, &properties, *ffkCFAllocatorDefault, kNilOptions) != kIOReturnSuccess)
        {
            ffIOObjectRelease(registryEntry);
            continue;
        }

        CFStringRef key = ffCFStringCreateWithCStringNoCopy(NULL, "model", kCFStringEncodingUTF8, NULL);
        CFStringRef model = ffCFDictionaryGetValue(properties, key);
        if(model == NULL || ffCFGetTypeID(model) != ffCFDataGetTypeID())
        {
            ffCFRelease(properties);
            ffIOObjectRelease(registryEntry);
            continue;
        }

        FFGPUResult* gpu = ffListAdd(gpus);

        ffStrbufInitA(&gpu->name, (uint32_t) (ffCFStringGetLength(model) + 1));
        ffCFStringGetCString(model, gpu->name.chars, ffStrbufGetFree(&gpu->name), kCFStringEncodingUTF8);

        ffStrbufInitA(&gpu->vendor, 0);
        ffStrbufInitA(&gpu->driver, 0);
        gpu->temperature = FF_GPU_TEMP_UNSET;

        ffCFRelease(properties);
        ffIOObjectRelease(registryEntry);
    }

    ffIOObjectRelease(iterator);
    dlclose(iokit);
}