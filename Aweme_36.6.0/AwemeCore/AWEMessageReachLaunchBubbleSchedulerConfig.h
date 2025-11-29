@interface AWEMessageReachLaunchBubbleSchedulerConfig : NSObject

+ (id)effectiveTabs;
+ (id)componentWhitelist;
+ (BOOL)dropAfterResumeSuccess;
+ (BOOL)avoidMessageReachBubbleOnly;
+ (long long)scheduleInterval;
+ (BOOL)enableWaitBubbleRetry;
+ (long long)autoScheduleAfterResponseDelay;
+ (BOOL)enable;
+ (id)config;

@end
