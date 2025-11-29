@class NSString, YYMemoryCache;

@interface AWESharkCardCache : NSObject

@property (retain, nonatomic) YYMemoryCache *cache;
@property (copy, nonatomic) NSString *scene;

- (id)__cacheKeyWithUrl:(id)a0 cardType:(id)a1;
- (BOOL)hasCardCacheForUrl:(id)a0 cardType:(id)a1;
- (id)cardCacheForUrl:(id)a0 cardType:(id)a1;
- (void)setCardCache:(id)a0 url:(id)a1 cardType:(id)a2;
- (void).cxx_destruct;
- (id)initWithScene:(id)a0;

@end
