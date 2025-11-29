@class NSMutableDictionary, BDPUniqueID, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPPrefetchCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *dicSemaphore;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL hasHit;
@property (retain, nonatomic) NSMutableDictionary *prefetchDataDic;

- (void)updatePrefetchCacheStateOfNotUseCacheWithParam:(id)a0 uniqueID:(id)a1 type:(long long)a2;
- (void)removeCacheWithPrefetchId:(id)a0;
- (BOOL)shouldUsePrefetchCacheWithParam:(id)a0 uniqueID:(id)a1 type:(long long)a2 apiCallBackBlk:(id /* block */)a3 requestCompletion:(id /* block */)a4 error:(id *)a5 isPrefetch:(BOOL)a6;
- (void)removeCacheWithPrefetchIds:(id)a0;
- (void)updatePrefetchCacheWithKey:(id)a0 type:(long long)a1 data:(id)a2 response:(id)a3 error:(id)a4;
- (id)getPrefetchStat;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
