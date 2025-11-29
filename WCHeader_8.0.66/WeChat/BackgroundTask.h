@interface BackgroundTask : NSObject

+ (void)backgroundTaskHold;
+ (void)backgroundTaskRelease;
+ (void)run;
+ (void)p_reportCostTime:(double)a0 lowPowerMode:(BOOL)a1;
+ (void)notifySuspendOnMainThread;

@end
