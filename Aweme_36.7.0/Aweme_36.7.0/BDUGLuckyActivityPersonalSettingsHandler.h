@interface BDUGLuckyActivityPersonalSettingsHandler : BDUGLuckyActivityCommonSettingsHandler

@property (nonatomic) BOOL hasRequestedPersonalSettings;

- (void)__updateSettingsFromScene:(unsigned long long)a0 retryCount:(long long)a1 isForced:(BOOL)a2;
- (BOOL)__shouldUpdateSettings;
- (id)__currentSettingsPath;
- (void)__trackPersonalSettingsDataWithSettingsInfo:(id)a0;
- (void)__trackPersonalSettingObjectsWithKeyPaths:(id)a0 settingsInfo:(id)a1;
- (void)updateSettingsFromScene:(unsigned long long)a0 isForced:(BOOL)a1;
- (id)init;

@end
