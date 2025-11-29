@class BUStaticPlugin, NSString, NSPointerArray, NSURL, UIScrollView, BUJSInjector, UIViewController;

@interface BUWKWebView : WKWebView <WKNavigationDelegate, BUWebView>

@property (retain, nonatomic) NSPointerArray *slaveDelates;
@property (retain, nonatomic) UIScrollView *ttr_scrollView;
@property (retain, nonatomic) BUJSInjector *ttr_injector;
@property (nonatomic) BOOL hasInjectedScript;
@property (nonatomic) BOOL reallySuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *ttr_sourceController;
@property (retain, nonatomic) BUStaticPlugin *ttr_staticPlugin;
@property (readonly, nonatomic) NSURL *ttr_url;

+ (id)shareProcessPool;

- (void)injectScriptIfNeed;
- (BOOL)checkIfAddToShow;
- (BOOL)checkWebContentBlank:(id)a0 withBlankColor:(id)a1;
- (void)bu_oldDetectBlankWebViewCompleteBlock:(id /* block */)a0;
- (void)bu_detectBlankWebViewWithColor:(id)a0 completeBlock:(id /* block */)a1;
- (double)checkWebContentBlankPercent:(id)a0;
- (void)bu_oldDetectBlankWebViewPercentCompleteBlock:(id /* block */)a0;
- (void)ttr_loadHTMLString:(id)a0 baseURL:(id)a1;
- (void)ttr_loadFileURL:(id)a0 allowingReadAccessToURL:(id)a1;
- (void)ttr_stopLoading;
- (BOOL)ttr_canGoForward;
- (void)ttr_goForward;
- (void)ttr_removeDelegate:(id)a0;
- (void)ttr_removeAllDelegate;
- (void)ttr_fireEvent:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)ttr_fireEvent:(id)a0 data:(id)a1;
- (void)ttr_loadRequest:(id)a0;
- (void)bu_detectBlankWebViewCompleteBlock:(id /* block */)a0;
- (void)ttr_evaluateJavaScript:(id)a0 completionHandler:(id /* block */)a1;
- (void)ttr_addDelegate:(id)a0;
- (void)bu_detectBlankPercentWithImageStr:(id)a0 completeBlock:(id /* block */)a1;
- (void)bu_detectBlankPercentCompleteBlock:(id /* block */)a0;
- (BOOL)ttr_canGoBack;
- (void)ttr_goBack;
- (void)ttr_reload;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;

@end
