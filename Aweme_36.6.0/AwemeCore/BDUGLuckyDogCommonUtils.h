@interface BDUGLuckyDogCommonUtils : NSObject

+ (void)preStartup;
+ (BOOL)isFirstStart;
+ (BOOL)isColdStart;
+ (void)addTrackerCommonParams;
+ (void)vibrateWithStyle:(long long)a0;
+ (id)tomorrowMidnight;
+ (id)secUserID;
+ (id)sharedInstance;

- (void)__onAppWillResignActive;
- (void)dealloc;

@end
