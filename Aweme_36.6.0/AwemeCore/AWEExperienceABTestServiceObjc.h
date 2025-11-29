@interface AWEExperienceABTestServiceObjc : NSObject

+ (BOOL)enableSpecialVideoQualityForVip;
+ (BOOL)enableSpecialVideoSrForVip;
+ (BOOL)feedPrecacheAsyncSaveFeedRequestModelsV2;
+ (BOOL)disableSrFlexBvc2Limit;
+ (BOOL)feedHorizontalColouringFixFirst;
+ (BOOL)videoRequestMetricOptimization;
+ (BOOL)feedCacheCenterStableOpt;
+ (BOOL)feedCacheCenterBackgroundOpt;
+ (id)srTypeSwitch;
+ (id)disableUsePrecacheForLaunchTypes;
+ (id)precacheReleaseOrderArray;
+ (BOOL)availableCacheEarlyReturnEnable;
+ (BOOL)firstLandscapeVideoMoveUpFix;
+ (BOOL)saveFeedRequestModelsSkipInitialFetchEnable;
+ (BOOL)feedUnconsumedBackupVideoGatherEnable;
+ (BOOL)cloudEvaluatedModelsRetainMetaInfoEnable;
+ (id)awemeFeedUseUrgentMainQueueUrlList;
+ (BOOL)awemeInfraKvEmptyByNunkiEnable;
+ (BOOL)feedCacheUnconsumedVideoSelectNoCopyModels;

@end
