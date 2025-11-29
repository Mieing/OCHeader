@interface AWEUGTimerMeterTaskTool : NSObject

+ (void)trackLogWithKey:(id)a0 message:(id)a1;
+ (void)trackLogToastWithKey:(id)a0 message:(id)a1;
+ (void)showToast:(id)a0 withFrequency:(long long)a1;
+ (long long)daysBetweenDate:(double)a0 toDate:(double)a1;
+ (double)getCurrentTime;

@end
