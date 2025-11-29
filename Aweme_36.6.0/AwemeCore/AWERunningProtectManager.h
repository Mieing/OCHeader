@interface AWERunningProtectManager : NSObject

@property (nonatomic) BOOL needProtect;

+ (id)shared;

- (void)onLastCrashDetected;
- (void)updateLastExceptionTime;
- (BOOL)needProtectThisSession;
- (unsigned long long)getProtectDurationSecondsSinceLastException;
- (BOOL)_overrideAutoModeEnabled:(BOOL *)a0;
- (BOOL)isAutoModeBySetting;
- (BOOL)isAutoMode;
- (BOOL)_overrideShouldStart:(BOOL *)a0;
- (BOOL)isProtectManualGlobalEnable;
- (BOOL)shouldStartConfig;
- (BOOL)getIgnoreDuplicate;
- (BOOL)getIgnoreTryCatch;
- (long long)getProtectionType;
- (BOOL)getUseManualSettingDefaultValue;
- (void)config;
- (id)init;
- (void)start;

@end
