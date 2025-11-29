@class NSMutableDictionary;

@interface BDARewardCacheService : NSObject

@property (retain, nonatomic) NSMutableDictionary *memoryCache;
@property (copy, nonatomic) id /* block */ cacheRemovedBlock;

+ (double)cacheExpirationTime;

- (void)removeAllCaches;
- (id)cachesInScene:(unsigned long long)a0;
- (id)rewardDataInScene:(unsigned long long)a0 forKey:(id)a1;
- (void)saveRewardData:(id)a0 inScene:(unsigned long long)a1 forKey:(id)a2;
- (void)removeCacheInScene:(unsigned long long)a0 forKey:(id)a1;
- (void)removeCachesInScene:(unsigned long long)a0;
- (id)cacheExpirationDateInScene:(unsigned long long)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
