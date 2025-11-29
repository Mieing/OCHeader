@interface TTInstallSandBoxHelper : NSObject

+ (id)versionName;
+ (id)ssAppID;
+ (id)ssAppMID;
+ (id)getCurrentChannel;
+ (BOOL)isInHouseApp;
+ (id)ssAppScheme;
+ (id)appOwnURL;
+ (BOOL)isAPPFirstLaunch;
+ (void)setAppFirstLaunch;
+ (long long)appLaunchedTimes;
+ (void)setAppDidLaunchThisTime;
+ (void)resetAppLaunchedTimes;
+ (id)_AppLaunchedTimesKey;
+ (BOOL)disableBackupForPath:(id)a0;
+ (BOOL)isAppStoreChannel;
+ (id)appName;
+ (id)buildVersion;
+ (id)bundleIdentifier;
+ (id)appDisplayName;

- (id)sandBoxCachePath;
- (id)sandBoxDocumentsPath;

@end
