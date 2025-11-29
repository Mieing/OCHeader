@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPAppPagePrefetchManager : NSObject <BDPWarmBootMessage, BDPAppPreloadMessage> {
    NSMutableDictionary *_prefetcherDic;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)appPreloadFinishedWithModel:(id)a0 schema:(id)a1 error:(id)a2;
+ (void)tryDecodeAppConfigPrefetchURLsWithModel:(id)a0 schema:(id)a1 needPrefetch:(BOOL)a2;
+ (id)sharedManager;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (BOOL)prefetchWithCurrentSchema:(id)a0 uniqueID:(id)a1 prefetchFlag:(unsigned long long)a2;
- (id)getCachedEntryPathWithUniqueID:(id)a0;
- (BOOL)shouldUsePrefetchCacheWithParam:(id)a0 uniqueID:(id)a1 apiCallBackBlk:(id /* block */)a2 requestCompletion:(id /* block */)a3 error:(id *)a4;
- (void)decodeWithConfigDict:(id)a0 uniqueID:(id)a1 version:(id)a2 completion:(id /* block */)a3;
- (BOOL)isInnerApp:(id)a0;
- (void)delayCleanMemoryCacheWithUniqueID:(id)a0;
- (void)releasePrefetcherWithUniqueID:(id)a0;
- (BOOL)isAllowPrefetchWithSchema:(id)a0;
- (void)decodeAndPrefetchWithConfigDict:(id)a0 schema:(id)a1 uniqueID:(id)a2 version:(id)a3 prefetchFlag:(unsigned long long)a4;
- (void)decodeWithConfigData:(id)a0 uniqueID:(id)a1 version:(id)a2;
- (void)decodeAndPrefetchPluginConfig:(id)a0 schema:(id)a1 uniqueID:(id)a2;
- (unsigned long long)hitCount:(id)a0;
- (unsigned long long)cacheCount:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
