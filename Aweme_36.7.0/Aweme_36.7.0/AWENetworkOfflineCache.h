@interface AWENetworkOfflineCache : NSObject

+ (void)removeAllCaches;
+ (id)liteCache;
+ (void)saveJSONResponse:(id)a0 forCacheKey:(id)a1;
+ (void)fetchCachedJSONResponseForKey:(id)a0 maxAge:(double)a1 completion:(id /* block */)a2;
+ (void)setMemoryLimit:(unsigned long long)a0 diskLimit:(unsigned long long)a1;
+ (id)cacheQueue;
+ (id)mainCache;

@end
