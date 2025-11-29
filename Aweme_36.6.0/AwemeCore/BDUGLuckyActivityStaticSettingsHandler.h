@interface BDUGLuckyActivityStaticSettingsHandler : BDUGLuckyActivityCommonSettingsHandler

- (void)__updateSettingsFromScene:(unsigned long long)a0 retryCount:(long long)a1 isForced:(BOOL)a2;
- (BOOL)__shouldUpdateSettings;
- (id)__currentSettingsPath;
- (void)updateSettingsFromScene:(unsigned long long)a0 isForced:(BOOL)a1;
- (void)__onReceiveDomainChangedEvent;
- (void)__trackStaticSettingsDataWithSettingsInfo:(id)a0;
- (void)__trackStaticSettingObjectsWithKeyPaths:(id)a0 settingsInfo:(id)a1;
- (id)init;

@end
