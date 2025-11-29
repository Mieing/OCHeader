@interface CKResourceCacheManager : NSObject

+ (void)cleanAllCache;
+ (void)cleanAllCacheByLRUWithThresholdCache;
+ (void)cleanCacheWithExpireSeconds:(unsigned long long)a0 cacheType:(long long)a1 extraParameters:(id)a2 completion:(id /* block */)a3;
+ (unsigned long long)getTotalCacheSize;
+ (void)config;

@end
