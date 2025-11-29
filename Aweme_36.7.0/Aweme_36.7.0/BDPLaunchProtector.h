@interface BDPLaunchProtector : NSObject

+ (void)bootstrapLaunch;
+ (void)protectSDKLaunch;
+ (id)protectionForAppLaunchWithId:(id)a0;
+ (void)resetProtectionForAppLaunchWithId:(id)a0;
+ (BOOL)disableRemovePreloadCache;
+ (void)tryReportLoadFailed;
+ (id)protectionConfig;
+ (id)updateLaunchProtectionConfig:(id)a0;
+ (void)protectSDKLaunch:(id)a0;
+ (BOOL)isMeta:(id)a0 inTimeRangeFrom:(long long)a1 to:(long long)a2;
+ (BOOL)isMeta:(id)a0 versionMatches:(id)a1;
+ (BOOL)disableTriggerImmediately;
+ (BOOL)isAppMetaEligibleForCleanup:(id)a0 timeRangeFrom:(long long)a1 to:(long long)a2 targetVersion:(id)a3;
+ (BOOL)getBoolValueWithKey:(id)a0;

@end
