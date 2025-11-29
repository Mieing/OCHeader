@class WKWebView;

@interface BDAResourceLoaderMediator : NSObject {
    void /* unknown type, empty encoding */ webViewDataProvider;
}

@property (class, nonatomic, readonly) BDAResourceLoaderMediator *instance;

@property (nonatomic, readonly) WKWebView *preloadWebView;

+ (BOOL)isChengZiJianZhanWebSiteWithUrlString:(id)a0;
+ (void)startResourceLoadStrategyWithParamDict:(id)a0 successHandler:(id /* block */)a1 failHandler:(id /* block */)a2 extraModel:(id)a3;
+ (BOOL)syncStartResourceLoadStrategyWithParamDict:(id)a0 extraModel:(id)a1;

- (void)didReceiveMemoryWarningNotification;
- (void)loadServiceWithEnablePreloadLog:(BOOL)a0 enableDefaultGeckoAndPlugin:(BOOL)a1;
- (void)clearWebViewResource:(id)a0 channelName:(id)a1;
- (void)startWebViewPrerenderEvent:(id)a0;
- (BOOL)checkGeckoResourceIsValidWithAccessKey:(id)a0 channel:(id)a1;
- (void)clearPreloadWebViewInstance;
- (void)registerUserFeatureWithDelegate:(id)a0;
- (void)tryParseLandingPagePreloadConfigAndPreload:(id)a0 accessKey:(id)a1 channel:(id)a2;
- (BOOL)isMainHTMLRequestSentFor:(id)a0;
- (BOOL)isPreloadedFor:(id)a0;
- (void)preloadWebViewControllerDidLoad:(id)a0 requestURL:(id)a1;
- (void)preloadWebViewControllerDidDisappeared:(id)a0 requestURL:(id)a1;
- (void)defaultInitGeckoInfo;
- (id)defaultWebViewABTestDict;
- (void)startPreloadWithCid:(id)a0 adid:(id)a1 logExtra:(id)a2 webURL:(id)a3 abTestDict:(id)a4 landingPagePreloadCofig:(id)a5 openURL:(id)a6;
- (id)copy;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopy;

@end
