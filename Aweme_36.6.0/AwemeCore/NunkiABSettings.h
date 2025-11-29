@interface NunkiABSettings : NSObject

+ (BOOL)nunkiFactorReadOpt;
+ (BOOL)nunkiDropFrameMonitorEnable;
+ (BOOL)nunkiStrategyModeToFeature;
+ (BOOL)nunkiEnableThermalMitigationMigrate;
+ (BOOL)nunkiRealtimeFactorSupport;
+ (BOOL)memoryBalanceManagerOffline;
+ (BOOL)nunkiSmartStrategyDecision;
+ (BOOL)nunkiAspectOpt;
+ (BOOL)timingTriggerEnabled;
+ (BOOL)resourceNotificationEnabled;
+ (BOOL)resourceNotificationAfterFeedReadyEnabled;
+ (BOOL)nunkiLockOptimize;
+ (long long)nunkiFactorCacheQuota;
+ (BOOL)nunkiAsyncWriteCache;
+ (BOOL)nunkiTraverseOptimize;
+ (BOOL)nunkiConfigCut;
+ (BOOL)nunkiConfigPreParse;
+ (BOOL)nunkiDecisionCache;
+ (BOOL)nunkiParseNilOpt;
+ (BOOL)nunkiParseByBDModel;
+ (id)nunkiMemoryControllerConfig;
+ (BOOL)registerSimplified;
+ (id)nunkiDropFrameMonitorConfig;

@end
