@interface IESECLaunchTask : NSObject

+ (double)launchTime;
+ (void)executeTaskForLaunchCompletion;
+ (void)executeTaskForFeedReady;
+ (void)executeTaskLevelNormal;
+ (void)executeTaskLevelHigh;
+ (void)p_executeTaskLevelLowAsync;
+ (void)initialize;

@end
