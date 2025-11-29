@class BDAWebViewChannelInterceptor, NSString, IESForestKit, NSMutableArray;
@protocol RxCancellable;

@interface BDAWebViewPreloadTask : NSObject <WKNavigationDelegate> {
    void /* unknown type, empty encoding */ task;
    void /* unknown type, empty encoding */ runningContext;
    void /* unknown type, empty encoding */ startPrerenderTask;
    void /* unknown type, empty encoding */ geckoPreloadSuccessTask;
    void /* unknown type, empty encoding */ startGenerateWebViewTask;
    void /* unknown type, empty encoding */ dataProvider;
}

@property (class, nonatomic, readonly) IESForestKit *forestKit;

@property (nonatomic, retain) NSMutableArray *parallelLoadGeckoTasks;
@property (nonatomic, retain) id<RxCancellable> disableInterceptionMission;
@property (nonatomic) BOOL preconnectStart;
@property (nonatomic, readonly) BDAWebViewChannelInterceptor *channelInterceptor;
@property (nonatomic, readonly) NSString *rawPreloadURL;

- (void)webviewStartPrerender;
- (void)tryStartPreconnect;
- (void)registerGeckoPreloadPlugin:(id)a0 requestURL:(id)a1;
- (void)unregisterGeckoPreloadPlugin:(id)a0 requestURL:(id)a1;
- (void)webViewDidStartLoad:(id)a0 requestURL:(id)a1;
- (void)preloadWebViewDidShowed:(id)a0;
- (BOOL)isPreLoadWebViewShowed:(id)a0;
- (BOOL)preloadWebViewAppearStatus;
- (void)updateQuickSlideStatus:(BOOL)a0;
- (void)taskWillCancel;
- (void)setupChannelInterceptorTrackEventBlock;
- (void)startSSPPreload:(id)a0 customUA:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webViewDidFinishLoad:(id)a0;

@end
