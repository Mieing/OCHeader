@class NSMutableArray, YYMemoryCache;

@interface AWEEnterpriseWebViewPreloadManager : NSObject

@property (retain, nonatomic) NSMutableArray *urls;
@property (retain, nonatomic) YYMemoryCache *preRenderViewCache;

+ (id)sharedInstance;

- (void)preRenderWithURLString:(id)a0 scene:(id)a1;
- (id)fetchPreRenderWebViewControllerWithURL:(id)a0;
- (BOOL)removePreRenderWithURLString:(id)a0;
- (BOOL)releasePreRenderWithURLString:(id)a0;
- (BOOL)isURLPreRendered:(id)a0;
- (id)p_renderedViewControllerWithURLString:(id)a0;
- (void)releaseLeastRecentlyUsedPreRender;
- (id)p_finalPreRenderURLString:(id)a0 scene:(id)a1;
- (id)p_preRenderWebViewWithURLString:(id)a0 scene:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
