@class NSArray, NSString, UIScrollView, YYQBWebViewScriptMessageHandler, NSURLRequest;
@protocol YYWebViewDelegate;

@interface YYQBWebView : QBWKWebView <WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, YYWebViewInterface>

@property (nonatomic) BOOL bDisablePopup;
@property (retain, nonatomic) YYQBWebViewScriptMessageHandler *scriptMessageHandler;
@property (retain, nonatomic) NSArray *customScriptHandlerArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<YYWebViewDelegate> wvDelegate;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) NSURLRequest *request;
@property (nonatomic) BOOL allowsBackForwardNavigationGestures;
@property (readonly, nonatomic, getter=canGoBack) BOOL canGoBack;
@property (readonly, nonatomic, getter=canGoForward) BOOL canGoForward;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) BOOL disablePreviewElement;

+ (void)checkIfCurrentUserNeedNewProcessPool:(id)a0;

- (id)defaultConfigurationWithPreInjectJSStr:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 customScript:(id)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)evaluateJavaScriptFromString:(id)a0 completionBlock:(id /* block */)a1;
- (void)enableJavaScriptPopup:(BOOL)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didReceiveServerRedirectForProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (long long)wkNavigationTypeToYYWebViewNavigationType:(long long)a0;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void)webView:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)showTipView:(id)a0;
- (BOOL)canShowAlertInCurrentWebViewController;
- (void)webView:(id)a0 runJavaScriptConfirmPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)webView:(id)a0 shouldPreviewElement:(id)a1;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)LoadRequest:(id)a0;
- (void)LoadHTMLString:(id)a0 baseURL:(id)a1;
- (void)addDebugInfoView;
- (void)addScriptMessageHandlerName:(id)a0;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void).cxx_destruct;

@end
