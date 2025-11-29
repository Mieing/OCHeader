@class NSString, DolphinRerankService;
@protocol DolphinMemoryCache;

@interface DolphinRerankMemoryCache : NSObject <DolphinMemoryCacheDelegate>

@property (retain, nonatomic) id<DolphinMemoryCache> cache;
@property (weak, nonatomic) DolphinRerankService *service;
@property (copy, nonatomic) id /* block */ cacheFilterBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allCaches;
- (id)cacheModel:(id)a0 withContext:(id /* block */)a1;
- (BOOL)containsModel:(id)a0;
- (BOOL)removeCacheModel:(id)a0;
- (void)filterCacheObject;
- (void)improvePriority:(id)a0;
- (void)willSetObject:(id)a0 forKey:(id)a1;
- (void)willRemoveObject:(id)a0 forKey:(id)a1;
- (void)removeOldestUntilCount:(long long)a0;
- (void)see;
- (void)willChangePriority:(double)a0 forKey:(id)a1 value:(id)a2;
- (long long)modelMatchOption;
- (id)generateUniqueIdentifier:(id)a0;
- (id)findRealModelInCache:(id)a0;
- (long long)clearMode;
- (void)improvePriority:(double)a0 forCacheModel:(id)a1;
- (void)changeSource:(id)a0 forCacheModel:(id)a1;
- (id)modelForUniqueId:(id)a0;
- (void).cxx_destruct;
- (void)clearCache;
- (id)initWithService:(id)a0;
- (long long)count;

@end
