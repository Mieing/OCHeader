@interface HeimdallrUtilities : NSObject

+ (id)removeDollarPadding:(id)a0;
+ (id)heimdallrRootPath;
+ (id)customPlistSuiteComponent:(id)a0;
+ (id)safeModeRemainPath;
+ (void)checkISSimulator;
+ (void)triggerRecordEventMonitor;
+ (BOOL)isClassFromApp:(Class)a0;
+ (BOOL)canFindDebuggerAttached;
+ (id)payloadWithDecryptData:(id)a0 withKey:(id)a1 iv:(id)a2;
+ (BOOL)isMigratingFromOtherSDK;
+ (void)initPath;
+ (void)initHeimdallrRootPathAndFixToDFolder;
+ (void)initHeimdallrRootPathAndRecordBasicInfoIntoSandbox;
+ (id)customPlistSuiteComponent:(id)a0 originalSuiteName:(id)a1;
+ (id)customPlistModernSuiteComponent:(id)a0 originalSuiteName:(id)a1;
+ (id)customPlistLegacySuiteComponent:(id)a0 originalSuiteName:(id)a1;
+ (void)migrateFromOtherIfNeed;
+ (BOOL)migrateToDFolderIfNeedFrom:(id)a0 to:(id)a1 tempPath:(id)a2;
+ (id)heimdallrDirName:(long long)a0;
+ (long long)identifyAvailableHeimdallrSandboxType;
+ (void)recordHeimdallrBasicInfo;
+ (void)addSandboxEventMonitorWithPhase:(id)a0 additionInfo:(id)a1;
+ (BOOL)verifyDefaultPathIsAvailable;
+ (id)apmVersionName;
+ (id)dateStringFromDate:(id)a0 isUTC:(BOOL)a1 isMilloFormat:(BOOL)a2;
+ (id)modelIdentifier;
+ (id)systemName;
+ (void)load;
+ (id)libraryPath;
+ (void)initialize;
+ (id)systemVersion;
+ (BOOL)isiOSAppOnMac;

@end
