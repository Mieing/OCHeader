@interface IESLiveThreadSchedule : NSObject

+ (struct IESLiveThreadScheduleEarly { BOOL x0; BOOL x1; })scheduleEarly;
+ (void)changeMainThreadSchedule;
+ (void)changeDynamicThreadSchedule;
+ (void)resumeMainThreadSchedule;
+ (void)resumeDynamicThreadSchedule;
+ (void)finish;
+ (void)start;
+ (void)end:(long long)a0;
+ (void)begin:(long long)a0;
+ (void)setupConfig;

@end
