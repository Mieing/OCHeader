@class IESForestMemoryCache;

@interface IESForestMemoryCacheManager : NSObject

@property (retain, nonatomic) IESForestMemoryCache *generalMemoryCache;
@property (retain, nonatomic) IESForestMemoryCache *preloadMemoryCache;

+ (void)updateCacheLimit:(long long)a0;
+ (void)updatePreloadCacheLimit:(long long)a0;
+ (id)sharedInstance;

- (void)updateCacheLimit:(id)a0;
- (void)updatePreloadCacheLimit:(id)a0;
- (void)clearCacheForRequest:(id)a0;
- (BOOL)p_cacheImageResponse:(id)a0 withRequest:(id)a1;
- (BOOL)p_cacheNonImageResponse:(id)a0 withRequest:(id)a1;
- (BOOL)cacheResponse:(id)a0 withRequest:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)clearCaches;
- (id)responseForRequest:(id)a0;

@end
