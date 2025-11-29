@class IESECOrderListContext;

@interface IESECOrderListCacheManager : NSObject

@property (retain, nonatomic) IESECOrderListContext *context;

- (double)cacheDuration;
- (void)removeCache;
- (void)clearExpiredCache;
- (void)clearExpiredCacheWithUserDict:(id)a0;
- (void)saveCacheResponse:(id)a0 cacheKeyInfo:(id)a1;
- (id)cacheKeyInfo;
- (void)saveCacheResponse:(id)a0 cacheKey:(id)a1;
- (void)saveCacheResponseWithSchemeParams:(id)a0 response:(id)a1;
- (void)loadCacheToYataInstance:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)cacheKey;
- (id)initWithContext:(id)a0;

@end
