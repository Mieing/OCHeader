@class BDUGLuckyPollingSettingsDowngradeModel, NSLock;

@interface BDUGLuckyActivityPollingSettingsHandler : BDUGLuckyActivityCommonSettingsHandler

@property (nonatomic) BOOL isPollingSettingsStart;
@property (retain, nonatomic) BDUGLuckyPollingSettingsDowngradeModel *downgradeModel;
@property (retain, nonatomic) NSLock *pollingSettingsLock;

- (void)startWithConfig:(id)a0;
- (BOOL)__shouldUpdateSettings;
- (id)__currentSettingsPath;
- (void)updateSettingsFromScene:(unsigned long long)a0 isForced:(BOOL)a1;
- (id)currentSettingsInfo;
- (void)__requestSettingsWithScene:(unsigned long long)a0 retryCount:(long long)a1 isForced:(BOOL)a2;
- (BOOL)__isEqualPollingSettingsWithOldSettings:(id)a0 currentSettings:(id)a1;
- (void)startIfNeededWithConfig:(id)a0;
- (id)__fetchSettingObjectsWithKeyPaths:(id)a0 settingsInfo:(id)a1;
- (void)isEqualPollingSettingsWithOldSettingsInfo:(id)a0 currentSettingsInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stop;

@end
