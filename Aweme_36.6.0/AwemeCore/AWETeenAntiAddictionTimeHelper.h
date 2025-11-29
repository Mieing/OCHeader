@interface AWETeenAntiAddictionTimeHelper : NSObject

+ (double)timeStampOfTodayHour:(unsigned long long)a0;
+ (double)timeStampForGMTHour:(unsigned long long)a0 inTimeStamp:(double)a1;
+ (double)timeStampForHour:(unsigned long long)a0 inDayOfTimeStamp:(double)a1 withTimeZone:(id)a2;
+ (double)timeStampOfTodayGMTHour:(unsigned long long)a0;
+ (BOOL)isTodayAntiAddictionWeekend;

@end
