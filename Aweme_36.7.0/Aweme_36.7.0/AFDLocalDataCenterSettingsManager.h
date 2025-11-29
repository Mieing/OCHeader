@interface AFDLocalDataCenterSettingsManager : NSObject

+ (BOOL)enableSoftDelete;
+ (long long)networkRetryTimes;
+ (BOOL)isTableValid:(id)a0;
+ (BOOL)enableLocalUserCenterTableMigrate:(id)a0;
+ (long long)tableCheckTaskIntervalSeconds;
+ (BOOL)enableTableFlag;
+ (BOOL)enableUidNotMatchProtection;
+ (long long)reportMaxCount;
+ (BOOL)enableFixSyncStorage;
+ (long long)maxNumberOfLostPatch;
+ (BOOL)enableTeenModeChange;
+ (BOOL)enableCrashClearDB;
+ (id)dataCenterDeleteVersion;
+ (id)dataCenterTableDeleteVersion:(id)a0;
+ (double)tableCheckAfterSyncTimeInterval;
+ (BOOL)disableLocalModifyAction:(id)a0 tableName:(id)a1;
+ (double)dataCenterLocalModificationColdIntervalSetting;
+ (long long)selectPoolCapacity;
+ (long long)selectPoolAutoCleanTime;
+ (BOOL)enableUCErrorReportFix;
+ (BOOL)enableClearDB;
+ (long long)operationMaxRetryTimes:(BOOL)a0;
+ (long long)maxRowCountOfTable:(id)a0;
+ (long long)tableCheckMaxRowCount;
+ (double)tableCheckExpireTimeInterval;
+ (id)localUserCenterMigrateTableList;
+ (double)minReportIntervalSetting;
+ (BOOL)enableLocalUserCenterMigrate;
+ (BOOL)enableFrontierInfoReport;

@end
