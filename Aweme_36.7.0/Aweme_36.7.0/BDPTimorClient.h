@class BDPRuntimeGlobalConfiguration, BDPI18NConfiguration, BDPAppearanceConfiguration;

@interface BDPTimorClient : NSObject

@property (readonly, nonatomic) BDPAppearanceConfiguration *appearanceConfiguration;
@property (readonly, nonatomic) BDPRuntimeGlobalConfiguration *runtimeGlobalConfiguration;
@property (readonly, nonatomic) BDPI18NConfiguration *I18NConfiguration;
@property long long initTime;

+ (void)bootstrapLoad;
+ (void)notifyHostEventDidChangeWithName:(id)a0 data:(id)a1;
+ (void)notifyHostEventDidChangeWithWithAppID:(id)a0 eventName:(id)a1 data:(id)a2;
+ (void)addTimorEventListener:(id)a0 subscribeEvent:(id)a1;
+ (void)removeTimorEventListener:(id)a0;
+ (void)clearDiskWithCompletion:(id /* block */)a0 isAuto:(BOOL)a1;
+ (void)clearDiskExtremelyWithCompletion:(id /* block */)a0;
+ (void)clearAppAllCachesWithAppID:(id)a0;
+ (long long)calculateCleanCacheSizeWithTriggerType:(long long)a0 cleanLevel:(long long)a1;
+ (BOOL)hasUpdateRelativeData;
+ (BOOL)autoUpdateDataAfterClientInit;
+ (id)urlsOnDiskPaths;
+ (void)calculateSizeWithCompletion:(id /* block */)a0;
+ (BOOL)localLibVersionSupportNativeGame;
+ (BOOL)delayDoAlog;
+ (BOOL)delayDoTracker;
+ (id)disableDelayDoTrackerEvents;
+ (id)blockAlogConfig;
+ (id)sharedClient;

- (BOOL)clearWarmBootCacheOfAppID:(id)a0;
- (void)prepareTimor;
- (void)prepareTimorWithCaller:(id)a0;
- (id)containerControllerWithURL:(id)a0;
- (BOOL)openWithLaunchParam:(id)a0;
- (void)updateRelativeDataIfNeed;
- (void)preloadAppWithInfo:(id)a0 degradeStrategy:(id)a1;
- (void)preloadAppsWithInfos:(id)a0 degradeStrategy:(id)a1;
- (void)clearAllUserCache;
- (void)updateSettingsWithSyncData:(id)a0;
- (void)clearAllWarmBootCacheWithType:(long long)a0;
- (void)releasePreloadResourceWhenReceiveHostMemoryNotificationWithMemoryLevel:(long long)a0;
- (void)clearAllWarmBootCache;
- (void)preloadAppWithInfo:(id)a0;
- (BOOL)openWithURL:(id)a0 openStyle:(long long)a1;
- (void)preloadAppsWithInfos_New:(id)a0 degradeStrategy:(id)a1;
- (void)preloadAppsWithInfos_Old:(id)a0 degradeStrategy:(id)a1;
- (void)preloadAppsWithInfos:(id)a0;
- (BOOL)clearWarmBootCacheOfAppID:(id)a0 versionType:(id)a1;
- (void)prepareAppContainer;
- (BOOL)clearWarmBootCacheOfSchemaURL:(id)a0;
- (void)registerCompletionHandlerForAppPreload:(id /* block */)a0;
- (id)usageRecordWithParameters:(id)a0 update:(id /* block */)a1;
- (void)removeUsageRecordApp:(id)a0 completion:(id /* block */)a1;
- (id)usageRecordWithUpdate:(id /* block */)a0;
- (void)updateRelativeData;
- (void)setupLogAndTracker;
- (BOOL)checkInBlockListWthSceneConfig:(id)a0 scene:(id)a1 launchFrom:(id)a2 location:(id)a3;
- (BOOL)isInBlockList:(id)a0;
- (id)getPreloadConfigWithInfo:(id)a0;
- (id)getStrategyWithPreloadInfo:(id)a0;
- (BOOL)checkNeedPreloadWithInfo:(id)a0;
- (id)getOldPreloadABKeyWithPreloadInfo:(id)a0;
- (id)getNewPreloadABKeyWithPreloadInfo:(id)a0;
- (void)releasePreloadResourceWithType:(long long)a0 level:(long long)a1;
- (void)releaseUnityPageWhenReceiveHostMemoryNotificationWithMemoryLevel:(long long)a0;
- (void)updateServerConfiguration;
- (BOOL)openWithURL:(id)a0;

@end
