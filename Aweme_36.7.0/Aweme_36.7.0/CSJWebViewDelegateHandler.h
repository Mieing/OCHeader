@class CSJAdSlot, NSString, CSJWKWebViewClient, UIViewController;
@protocol CSJAd;

@interface CSJWebViewDelegateHandler : NSObject <WKUIDelegate, BUWebViewDelegate>

@property (weak, nonatomic) CSJWKWebViewClient *webView;
@property (retain, nonatomic) id<CSJAd> adInfo;
@property (retain, nonatomic) CSJAdSlot *adSlot;
@property (nonatomic) BOOL hasEnterBackground;
@property (nonatomic, getter=isSupportAlert) BOOL supportAlert;
@property (weak, nonatomic) UIViewController *parentVC;
@property (copy, nonatomic) id /* block */ loadEventBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchHookConsoleLog;
- (id)trackTag;
- (void)appDidEnterBackgroundNotification:(id)a0;
- (id)getTrackTag;
- (void)sendTrackDataWithParameters:(id)a0;
- (void)registShowConsole;
- (void)addScriptMessageHandleForName:(id)a0;
- (void)registerUserAgent;
- (BOOL)bu_shouldStartLoadWithRequestWithURL:(id)a0;
- (BOOL)p_handleAppStoreRequest:(id)a0;
- (id)origUA;
- (id)sdkUA;
- (id)initWithAdInfo:(id)a0 adSlot:(id)a1 webView:(id)a2;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)webView:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webView:(id)a0 runJavaScriptConfirmPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)dealloc;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (void)webViewDidStartLoad:(id)a0;
- (void)webViewDidFinishLoad:(id)a0;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)addObservers;

@end
