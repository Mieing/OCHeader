@class NSMutableDictionary, NSRecursiveLock;

@interface BDUGLuckySettingsManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *settingsDic;
@property (retain, nonatomic) NSMutableDictionary *observerDic;
@property (retain, nonatomic) NSMutableDictionary *timerMap;
@property (retain, nonatomic) NSRecursiveLock *settingsLock;
@property (retain, nonatomic) NSRecursiveLock *observerLock;
@property (retain, nonatomic) NSRecursiveLock *timerLock;
@property (nonatomic) double resignActiveTime;

+ (void)asyncStartup;
+ (id)sharedInstance;

- (void)__setupNotification;
- (double)__currentServerTime;
- (id)settingsInfoWithSettingsType:(unsigned long long)a0;
- (void)__recoverCacheSettingsInfo;
- (long long)__fetchValidintervalWithInterval:(long long)a0;
- (void)__refreshPollingWithObserverInfo:(id)a0;
- (id)__settingsKeyWithSettingsType:(unsigned long long)a0;
- (BOOL)shouldTrimSettingsCache;
- (void)updateSettingsLastUpdateTimeWithSettingsType:(unsigned long long)a0;
- (void)__applicationWillBecomeActive;
- (void)__applicationWillResignActive;
- (void)recoverCacheSettingsInfoWithSettingsType:(unsigned long long)a0;
- (void)__timeFired:(id)a0;
- (void)startObserveSettingsWithSettingsType:(unsigned long long)a0 pollingInterval:(long long)a1 observer:(id)a2;
- (void)stopObserverSettingsWithSettingsType:(unsigned long long)a0;
- (void)updateSettings:(id)a0 forSettingsType:(unsigned long long)a1;
- (void)clearSettingsInDiskForSettingsType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
