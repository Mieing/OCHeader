@class AWESearchImageFilterPluginConfig, YYMemoryCache, NSDictionary, WKWebView, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWESearchWebViewInterceptorMonitor : NSObject <BDWebInterceptorMonitor>

@property (nonatomic) BOOL loaded;
@property (nonatomic) BOOL curActiveState;
@property (retain, nonatomic) NSMutableArray *waitFilterItemQueue;
@property (retain, nonatomic) NSMutableArray *finishedItemKeyQueue;
@property (retain, nonatomic) YYMemoryCache *itemMemoryCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) AWESearchImageFilterPluginConfig *config;
@property (weak, nonatomic) WKWebView *webView;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableUseTTNetWithURL:(id)a0;
+ (id)sharedInstance;

- (void)bdw_URLSchemeTask:(id)a0 didReceiveResponse:(id)a1;
- (void)bdw_URLSchemeTask:(id)a0 didLoadData:(id)a1;
- (void)bdw_URLSchemeTaskDidFinishLoading:(id)a0;
- (void)bdw_URLSchemeTask:(id)a0 didFailWithError:(id)a1;
- (void)bdw_URLSchemeTask:(id)a0 didPerformRedirection:(id)a1 newRequest:(id)a2;
- (void)webViewNavigateMainFrameURL:(id)a0;
- (BOOL)inWhiteList:(id)a0;
- (BOOL)matchHost:(id)a0 other:(id)a1;
- (void)removeItemFromWaitCacheWithKey:(id)a0;
- (id)findItemInCacheWithKey:(id)a0;
- (void)cacheOrUpdateItem:(id)a0 withData:(id)a1;
- (void)addToFinishedQueueWithItem:(id)a0;
- (void)addToWaitFilterQueueWithItem:(id)a0;
- (id)downSampleImageData:(id)a0 maxSide:(double)a1;
- (void)blockWebViewElementWithUrl:(id)a0 mainFrameUrl:(id)a1 score:(double)a2;
- (void).cxx_destruct;
- (id)init;
- (void)startFilter;

@end
