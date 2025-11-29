@interface BDUGLuckyPollingSettingsCacheManager : BDUGLuckySettingsCacheManager

+ (void)onCleanCache;
+ (void)preStartupSettingsModule;
+ (id)moduleName;

@end
