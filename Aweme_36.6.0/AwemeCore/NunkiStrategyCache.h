@class NunkiSafeCache;

@interface NunkiStrategyCache : NSObject

@property (retain, nonatomic) NunkiSafeCache *cacheDic;

- (id)cacheConfigForKey:(id)a0;
- (void)setCacheConfig:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
