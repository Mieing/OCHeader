@class AWENetworkSafeArray;
@protocol AWENetworkCacheType;

@interface AWENetworkCacheManager : NSObject

@property (retain, nonatomic) id<AWENetworkCacheType> cache;
@property (retain, nonatomic) AWENetworkSafeArray *fetchingArray;

+ (BOOL)isPrefetching;
+ (void)cleanCacheForKey:(id)a0;
+ (id)cacheKeyFromURLString:(id)a0 params:(id)a1;
+ (void)cleanCacheForURLString:(id)a0 params:(id)a1;
+ (void)cleanAllCaches;
+ (void)setCacheIfNeededWithStrategy:(id)a0 jsonObj:(id)a1;
+ (void)fetchCacheWithStrategy:(id)a0 modelClass:(Class)a1 cacheblock:(id /* block */)a2;
+ (id)modelization:(id)a0 modelClass:(Class)a1;
+ (id)processingCacheWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 cacheStrategy:(id)a3 completion:(id /* block */)a4;
+ (id)cacheOnErrorWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 cacheStrategy:(id)a3 completion:(id /* block */)a4;
+ (id)disableCacheGetWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (void)cleanCacheForTask:(id)a0;
+ (BOOL)isPrefetchingWithKey:(id)a0;
+ (BOOL)isPrefetchingWithURLString:(id)a0 params:(id)a1;
+ (void)configureCacheWithMemoryLimit:(unsigned long long)a0;
+ (void)setCache:(id)a0;
+ (id)manager;

- (void).cxx_destruct;

@end
