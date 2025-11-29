@class NSMutableDictionary;

@interface WCFinderPrefetchPool : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (retain, nonatomic) NSMutableDictionary *waitingCgiDict;
@property (retain, nonatomic) NSMutableDictionary *waitingToDropDict;
@property (retain, nonatomic) NSMutableDictionary *droppedCacheDict;

- (id)init;
- (void)saveRequest:(id)a0 extraData:(id)a1 cachedKey:(id)a2;
- (void)saveResponse:(id)a0 validityPeriod:(unsigned long long)a1 cachedKey:(id)a2;
- (void)saveCache:(id)a0 withCachedKey:(id)a1;
- (id)prefetchCacheWithCachedKey:(id)a0;
- (void)removePrefetchCacheWithCachedKey:(id)a0;
- (void)addWaitingCgi:(id)a0 cachedKey:(id)a1;
- (void)removeWaitingCgiWithCachedKey:(id)a0;
- (id)waitingCgiListWithCachedKey:(id)a0;
- (void)cleanExpiredCache;
- (void)_cleanExpiredCache;
- (void)addWaitingToDropCache:(id)a0 cachedKey:(id)a1;
- (void)removeWaitingToDropCacheWithRequestId:(unsigned long long)a0 cachedKey:(id)a1;
- (id)waitingToDropCacheWithRequestId:(unsigned long long)a0 cachedKey:(id)a1;
- (void)addDroppedCache:(id)a0 cachedKey:(id)a1;
- (void)removeAllDroppedCachesWithCachedKey:(id)a0;
- (id)droppedCachesAfterTimestamp:(unsigned long long)a0 cachedKey:(id)a1;
- (id)waitingToDropKeyWith:(unsigned long long)a0 cachedKey:(id)a1;
- (id)defaultMMKVMapID;
- (id)finderPrefetchCGIMMKV;
- (void).cxx_destruct;

@end
