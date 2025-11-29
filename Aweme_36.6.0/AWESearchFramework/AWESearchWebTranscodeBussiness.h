@class AWESearchWebTranscodeContainerContext, DUXAlertDialog, NSDictionary, NSString, AWESearchWebViewInterceptorMonitor, BDXWebView;

@interface AWESearchWebTranscodeBussiness : NSObject <WKHTTPCookieStoreObserver, DUXAlertDialogDelegate, AWESearchWebTranscodeBussinessProtocol>

@property (weak, nonatomic) BDXWebView *webView;
@property (nonatomic) BOOL enableClientAIAdBlock;
@property (nonatomic) BOOL darkModeScriptInjected;
@property (nonatomic) BOOL isBecomeActive;
@property (nonatomic) BOOL isSyncingCookies;
@property (nonatomic) BOOL isfinishedLoading;
@property (weak, nonatomic) DUXAlertDialog *dialog;
@property (retain, nonatomic) AWESearchWebTranscodeContainerContext *context;
@property (copy, nonatomic) NSDictionary *commonSearchParams;
@property (retain, nonatomic) AWESearchWebViewInterceptorMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)factoryCreateConcreteBussinessWithContext:(id)a0;

- (void)alertDialogDidDismiss:(id)a0;
- (id)trackParams;
- (id)searchResultId;
- (id)webViewWillDealloc:(id)a0;
- (id)webView:(id)a0 loadRequest:(id)a1;
- (id)webView:(id)a0 loadData:(id)a1 MIMEType:(id)a2 characterEncodingName:(id)a3 baseURL:(id)a4;
- (id)webView:(id)a0 loadHTMLString:(id)a1 baseURL:(id)a2;
- (id)searchParams;
- (int)clickTime;
- (BOOL)isAladdin;
- (id)alaSrc;
- (void)takeScreenShotImage:(id)a0;
- (id)transcodingManager;
- (id)currentTranscodingManager;
- (id)webSchemeParams;
- (void)updateWithContainerContext:(id)a0;
- (void)webViewOnLoad:(id)a0;
- (void)darkModeTraitCollectionDidChange:(id)a0;
- (BOOL)enableTrackWebScreenShotEvent;
- (BOOL)enableTrackWebReadPercent;
- (void)loadDarkModScript:(BOOL)a0;
- (BOOL)checkUrlIfAvoidCookieSync:(id)a0;
- (BOOL)enableWebInjectDomReady;
- (void)tryToAddBackButton:(id)a0 queryItems:(id)a1;
- (id)regulateSettingsDict;
- (void)showDialogWithJumpUrl:(id)a0 withRegulateDict:(id)a1;
- (void)injectFontScale;
- (BOOL)__isDarkMode;
- (BOOL)isTopBDXBaseWebVC;
- (void)addClientCookieSyncObserve;
- (void)addThemeChangeNotification;
- (void)addAIInterceptMonitorAndScript:(id)a0;
- (void)addScreenShotNotification;
- (void)setupCommonSearchParams;
- (void)webInjectDomReady;
- (void)setupFinishLoading;
- (void)tryClientAIAdBlock:(id)a0;
- (id)secondJumpInterceptForWebView:(id)a0 NavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (BOOL)checkIfShouldSkipFailUrl:(id)a0;
- (id)webView:(id)a0 didFinishNavigation:(id)a1;
- (id)schema;
- (void).cxx_destruct;
- (id)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (id)init;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)query;
- (id)host;
- (id)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)cookiesDidChangeInCookieStore:(id)a0;
- (id)searchID;
- (id)pd;

@end
