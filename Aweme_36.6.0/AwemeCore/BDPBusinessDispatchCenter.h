@class NSString, NSMutableArray;

@interface BDPBusinessDispatchCenter : NSObject <BDPBusinessUpdateHandlerProtocol, BDPBusinessLoaderServiceProtocol, BDPBusinessUsageRecordProtocol, BDPBusinessSubscribeProtocol>

@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } updateLock;
@property (nonatomic) BOOL didUpdateRelativeData;
@property (retain, nonatomic) NSMutableArray *updateHandlers;
@property (retain, nonatomic) Class loaderService;
@property (retain, nonatomic) Class usageService;
@property (retain, nonatomic) Class subscribeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addTimorEventListener:(id)a0 subscribeEvent:(id)a1;
+ (void)removeTimorEventListener:(id)a0;
+ (BOOL)clearWarmBootCacheOfAppID:(id)a0;
+ (void)clearDiskWithCompletion:(id /* block */)a0 isAuto:(BOOL)a1;
+ (void)clearDiskExtremelyWithCompletion:(id /* block */)a0;
+ (void)clearAppAllCachesWithAppID:(id)a0;
+ (long long)calculateCleanCacheSizeWithTriggerType:(long long)a0 cleanLevel:(long long)a1;
+ (void)updateRelativeDataIfNeed;
+ (void)clearAllUserCache;
+ (void)clearAllWarmBootCacheWithType:(long long)a0;
+ (void)clearAllWarmBootCache;
+ (void)registerLoaderService:(Class)a0;
+ (id)urlsOnDiskPaths;
+ (void)calculateSizeWithCompletion:(id /* block */)a0;
+ (BOOL)clearWarmBootCacheOfAppID:(id)a0 versionType:(id)a1;
+ (void)preDownloadAppsWithInfos:(id)a0 degradeStrategy:(id)a1;
+ (void)preloadTimorContextWithCaller:(id)a0;
+ (void)prepareAppContainer;
+ (void)releasePreloadResourceWhenReceiveHostMemoryNotification:(long long)a0;
+ (BOOL)clearWarmBootCacheOfSchemaURL:(id)a0;
+ (void)registerCompletionHandlerForAppPreload:(id /* block */)a0;
+ (void)registerUsageService:(Class)a0;
+ (void)registerSubscribeService:(Class)a0;
+ (id)usageRecordWithParameters:(id)a0 update:(id /* block */)a1;
+ (void)removeUsageRecordApp:(id)a0 completion:(id /* block */)a1;
+ (void)notifySubscriberWithModel:(id)a0;
+ (void)registerUpdateHandler:(Class)a0;
+ (id)sharedCenter;

- (void)addTimorEventListener:(id)a0 subscribeEvent:(id)a1;
- (void)removeTimorEventListener:(id)a0;
- (BOOL)clearWarmBootCacheOfAppID:(id)a0;
- (void)clearDiskWithCompletion:(id /* block */)a0 isAuto:(BOOL)a1;
- (void)clearDiskExtremelyWithCompletion:(id /* block */)a0;
- (void)clearAppAllCachesWithAppID:(id)a0;
- (long long)calculateCleanCacheSizeWithTriggerType:(long long)a0 cleanLevel:(long long)a1;
- (void)updateRelativeDataIfNeed;
- (void)clearAllUserCache;
- (void)clearAllWarmBootCacheWithType:(long long)a0;
- (void)clearAllWarmBootCache;
- (void)registerLoaderService:(Class)a0;
- (id)urlsOnDiskPaths;
- (void)calculateSizeWithCompletion:(id /* block */)a0;
- (BOOL)clearWarmBootCacheOfAppID:(id)a0 versionType:(id)a1;
- (void)preloadTimorContextWithCaller:(id)a0;
- (void)prepareAppContainer;
- (void)releasePreloadResourceWhenReceiveHostMemoryNotification:(long long)a0;
- (BOOL)clearWarmBootCacheOfSchemaURL:(id)a0;
- (void)registerCompletionHandlerForAppPreload:(id /* block */)a0;
- (void)registerUsageService:(Class)a0;
- (void)registerSubscribeService:(Class)a0;
- (void)updateRelativeDataForHandlers;
- (void)preDownloadAppsWithInfos:(id)a0 strategy:(id)a1;
- (void)errorWithService:(id)a0 action:(SEL)a1;
- (id)usageRecordWithParameters:(id)a0 update:(id /* block */)a1;
- (void)removeUsageRecordApp:(id)a0 completion:(id /* block */)a1;
- (void)notifySubscriberWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerUpdateHandler:(Class)a0;

@end
