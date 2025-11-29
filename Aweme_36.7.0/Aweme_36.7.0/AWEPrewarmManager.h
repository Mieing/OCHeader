@interface AWEPrewarmManager : NSObject

@property (nonatomic) long long lastBadgeNumber;

+ (id)sharedInstance;

- (void)p_setup;
- (void)p_postLocalNotificationIfNeeded:(unsigned long long)a0;
- (void)p_trackIfNeeded;
- (BOOL)p_canPostLocalNotiWithType:(unsigned long long)a0;
- (void)p_postLocalNotification;
- (BOOL)p_canPostLocalNotiOnCrash;
- (BOOL)p_canPostLocalNotiOnAppWillTerminate;
- (BOOL)p_onCrashEnable;
- (long long)p_crashTimeInterval;
- (BOOL)p_onWillTerminateEnable;
- (id)p_terminateValidTimes;
- (BOOL)p_isCurrentTimeBetween:(id)a0 endTimeStr:(id)a1 timeFormat:(id)a2;
- (id)p_prewarmConfig;

@end
