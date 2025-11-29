@interface BDUGLuckyStaticSettingsCacheManager : BDUGLuckySettingsCacheManager

+ (void)onCleanCache;
+ (void)preStartupSettingsModule;
+ (id)moduleName;

@end
