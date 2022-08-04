#include "fastfetch.h"
#include "detection/datetime.h"

#include <time.h>
#include <pthread.h>

const FFDateTimeResult* ffDetectDateTime(const FFinstance* instance)
{
    FF_UNUSED(instance); //We may need it later for additional configuration

    static FFDateTimeResult result;
    static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
    static bool init = false;

    pthread_mutex_lock(&mutex);
    if (init)
    {
        pthread_mutex_unlock(&mutex);
        return &result;
    }
    init = true;

    const time_t t = time(NULL);
    struct tm* tm = localtime(&t);

    result.year = (uint16_t) (tm->tm_year + 1900);
    result.yearShort = (uint8_t) (result.year % 100);
    result.month = (uint8_t) (tm->tm_mon + 1);

    ffStrbufInit(&result.monthPretty);
    result.monthPretty.length = (uint32_t) strftime(result.monthPretty.chars, ffStrbufGetFree(&result.monthPretty), "%m", tm);

    ffStrbufInit(&result.monthName);
    result.monthName.length = (uint32_t) strftime(result.monthName.chars, ffStrbufGetFree(&result.monthName), "%B", tm);

    ffStrbufInit(&result.monthNameShort);
    result.monthNameShort.length = (uint32_t) strftime(result.monthNameShort.chars, ffStrbufGetFree(&result.monthNameShort), "%b", tm);

    result.week = (uint8_t) (tm->tm_yday / 7 + 1);

    ffStrbufInit(&result.weekday);
    result.weekday.length = (uint32_t) strftime(result.weekday.chars, ffStrbufGetFree(&result.weekday), "%A", tm);

    ffStrbufInit(&result.weekdayShort);
    result.weekdayShort.length = (uint32_t) strftime(result.weekdayShort.chars, ffStrbufGetFree(&result.weekdayShort), "%a", tm);

    result.dayInYear = (uint8_t) (tm->tm_yday + 1);
    result.dayInMonth = (uint8_t) tm->tm_mday;
    result.dayInWeek = tm->tm_wday == 0 ? 7 : (uint8_t) tm->tm_wday;

    result.hour = (uint8_t) tm->tm_hour;

    ffStrbufInit(&result.hourPretty);
    result.hourPretty.length = (uint32_t) strftime(result.hourPretty.chars, ffStrbufGetFree(&result.hourPretty), "%H", tm);

    result.hour12 = (uint8_t) (result.hour % 12);

    ffStrbufInit(&result.hour12Pretty);
    result.hour12Pretty.length = (uint32_t) strftime(result.hour12Pretty.chars, ffStrbufGetFree(&result.hour12Pretty), "%I", tm);

    result.minute = (uint8_t) tm->tm_min;

    ffStrbufInit(&result.minutePretty);
    result.minutePretty.length = (uint32_t) strftime(result.minutePretty.chars, ffStrbufGetFree(&result.minutePretty), "%M", tm);

    result.second = (uint8_t) tm->tm_sec;

    ffStrbufInit(&result.secondPretty);
    result.secondPretty.length = (uint32_t) strftime(result.secondPretty.chars, ffStrbufGetFree(&result.secondPretty), "%S", tm);

    pthread_mutex_unlock(&mutex);
    return &result;
}
