@interface AWESearchCachalotLocalCacheManager : AWESearchVerticalContainerService

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (void)fetchCacheWithCompletion:(id /* block */)a0;
+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;
+ (void)preloadCache;
+ (id)historyStorage;
+ (void)updateHistoryWithData:(id)a0;
+ (id)getHistoryData;
+ (BOOL)shouldEnableSkipSaveCacheForSettings;
+ (void)saveCachaInfo:(id)a0;
+ (struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } *)p_fetchLock;
+ (void)p_notifyAllObserversCacheReady;
+ (BOOL)shouldEnableUnarchiveTryCatch;
+ (void)preFetchCoverUrl;
+ (id)p_fetchCacheObservers;
+ (void)saveCacheWithRootNode:(id)a0;
+ (void)clean;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;

@end
