@interface AWECalculateTimeStampManager : NSObject

+ (id)getStartTimeOfToday;
+ (double)getStartTimeIntervalOfMonth:(id)a0;
+ (BOOL)isValidTimeStamp:(double)a0;
+ (double)getStartTimeIntervalOfLastMonth:(id)a0;
+ (double)getStartTimestampOfToday;
+ (id)getStartTimeOfDay:(long long)a0;
+ (BOOL)timeIsBefore7;
+ (BOOL)timeIsBetween19And25;

@end
