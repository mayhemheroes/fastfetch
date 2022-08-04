#ifdef FF_HAVE_IMAGEMAGICK7

#include "image.h"
#include "common/library.h"

#include <MagickCore/MagickCore.h>

static FF_LIBRARY_SYMBOL(ResizeImage);

static void* logoResize(const void* image, size_t width, size_t height, void* exceptionInfo)
{
    return ffResizeImage(image, width, height, UndefinedFilter, exceptionInfo);
}

FFLogoImageResult ffLogoPrintImageIM7(FFinstance* instance, FFLogoRequestData* requestData)
{
    FF_LIBRARY_LOAD(imageMagick, instance->config.libImageMagick, FF_LOGO_IMAGE_RESULT_INIT_ERROR, "libMagickCore-7.Q16HDRI.so", 11, "libMagickCore-7.Q16.so", 11)
    FF_LIBRARY_LOAD_SYMBOL_ADRESS(imageMagick, ffResizeImage, ResizeImage, FF_LOGO_IMAGE_RESULT_INIT_ERROR);

    FFIMData imData;
    imData.resizeFunc = logoResize;
    imData.library = imageMagick;

    FFLogoImageResult result = ffLogoPrintImageImpl(instance, requestData, &imData);

    dlclose(imageMagick);

    return result;
}

#endif
