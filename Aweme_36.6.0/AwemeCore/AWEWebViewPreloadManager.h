@class NSString, IESWKWebView, AWEAdWebViewController, AWEOriginalAdModel;
@protocol AWEWebViewConfigProtocol, AWEHttpTask;

@interface AWEWebViewPreloadManager : NSObject <IESWebViewCommonDelegate, AWEGokuPluginTargetProtocol>

@property (retain, nonatomic) IESWKWebView *webView;
@property (copy, nonatomic) NSString *trackPreloadTagJs;
@property (retain, nonatomic) id<AWEHttpTask> requestTask;
@property (retain, nonatomic) AWEOriginalAdModel *currAdModel;
@property (retain, nonatomic) id<AWEWebViewConfigProtocol> webConfig;
@property (retain, nonatomic) AWEAdWebViewController *webViewController;
@property (copy, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSString *accessKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)enableWebViewPreloadWithModel:(id)a0;
- (void)preloadWithModelListIfNeeded:(id)a0;
- (BOOL)enableWebViewPreRenderWithModel:(id)a0;
- (id)fetchPreRenderedWebViewViewController;
- (id)fetchPreRenderWebViewWithRequestURL:(id)a0;
- (long long)preloadStatusOfModel:(id)a0;
- (BOOL)isURLPreRendered:(id)a0;
- (void)setupWebViewPreloadWithModelIfNeeded:(id)a0;
- (BOOL)removePreRenderIfNeededWithURLString:(id)a0;
- (id)fetchThirdPreloadWebViewWithURLString:(id)a0;
- (BOOL)isThirdPreloadURLString:(id)a0;
- (void)removePreloadWebView;
- (void)didReceiveMemoryWarningNotification;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)preRenderIfNeededWithURLString:(id)a0 title:(id)a1 model:(id)a2;
- (id)makeTrackPreloadTagJsTagWithAdModel:(id)a0;
- (void)resetPreloadInfo;
- (void)removePrerenderWebViewController;
- (BOOL)enableWebviewCachePreloadWithModel:(id)a0;
- (void)setupWebViewCacheWithModelList:(id)a0;
- (void)tryPreloadThirdWebLandingPage;
- (void)loadPreloadData;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)moduleNames;
- (void)dealloc;
- (void)webViewDidFinishLoad:(id)a0;

@end
