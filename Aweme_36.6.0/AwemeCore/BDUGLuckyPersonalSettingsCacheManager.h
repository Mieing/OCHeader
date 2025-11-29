@interface BDUGLuckyPersonalSettingsCacheManager : BDUGLuckySettingsCacheManager

+ (void)onCleanCache;
+ (void)preStartupSettingsModule;
+ (id)moduleName;

@end
