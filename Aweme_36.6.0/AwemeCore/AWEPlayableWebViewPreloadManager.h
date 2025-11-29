@class NSMutableDictionary, YYMemoryCache;

@interface AWEPlayableWebViewPreloadManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *webInstances;
@property (retain, nonatomic) YYMemoryCache *URLs;

- (BOOL)enablePlayableContainerPreRenderWithModel:(id)a0;
- (BOOL)isURLPreRendered:(id)a0 model:(id)a1;
- (id)fetchPreRenderedPlayableContainerViewControllerWithRequestURL:(id)a0 model:(id)a1;
- (void)preRenderIfNeededWithURLString:(id)a0 title:(id)a1 model:(id)a2;
- (BOOL)removePreRenderIfNeededWithURLString:(id)a0 model:(id)a1;
- (void)removeAllPrerenderedPlayableContainerControllers;
- (id)cacheKeyWithAweme:(id)a0 urlString:(id)a1;
- (void)updateWithModelIfNeeded:(id)a0 URLString:(id)a1;
- (void)removePrerenderLeastRecentlyWebViewController;
- (void)removePrerenderWebViewControllerWithCacheKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithCountLimit:(long long)a0;
- (void)dealloc;

@end
