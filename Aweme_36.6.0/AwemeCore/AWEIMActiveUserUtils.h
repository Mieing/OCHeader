@interface AWEIMActiveUserUtils : NSObject

+ (double)currentServerTime;
+ (BOOL)isOnlineWithTimestamp:(double)a0;
+ (id)stringForTimestamp:(double)a0;
+ (BOOL)canShowActiveStatusWithTimestamp:(double)a0;
+ (id)onlineDegradeStringForTimestamp:(double)a0;
+ (long long)intervalDaysWithTimestamp:(double)a0;
+ (long long)p_daysFromDate:(id)a0 toDateTime:(id)a1;
+ (double)getCurrentTime;

@end
