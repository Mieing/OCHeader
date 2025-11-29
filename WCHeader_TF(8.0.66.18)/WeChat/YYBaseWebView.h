@class YYWKWebViewScriptMessageHandler, NSString, YYWKWebViewScriptMessageReplyHandler, UIScrollView, NSMutableArray, NSURLRequest;
@protocol YYWebViewDelegate;

@interface YYBaseWebView : WKWebView <WKScriptMessageHandlerWithReply, WKDownloadDelegate, WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, YYWebViewInterface>

@property (retain, nonatomic) YYWKWebViewScriptMessageHandler *scriptMessageHandler;
@property (retain, nonatomic) YYWKWebViewScriptMessageReplyHandler *scriptMessageReplyHandler;
@property (retain, nonatomic) NSMutableArray *customScriptHandlerArray;
@property (nonatomic) long long enableCheckLocalStorageAliveType;
@property (nonatomic) unsigned long long checkAliveTs;
@property (nonatomic) BOOL hasCheckLocalStorageAlive;
@property (nonatomic) BOOL didCheckLocalStorageAlive;
@property (nonatomic) BOOL needReportLocalStorageRecovery;
@property (retain, nonatomic) NSMutableArray *editMenuInteractions;
@property (nonatomic) BOOL bDisablePopup;
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

+ (id)processPool;

- (id)defaultConfigurationWithPreInjectJSStr:(id)a0 hookJSStr:(id)a1 arrCookies:(id)a2;
- (void)configurationWillCreate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)evaluateJavaScriptFromString:(id)a0 completionBlock:(id /* block */)a1;
- (void)enableJavaScriptPopup:(BOOL)a0;
- (id)currentProcessPool;
- (void)makeAllowDecision:(id /* block */)a0;
- (void)makeDownloadDecision:(id /* block */)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didReceiveServerRedirectForProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (long long)wkNavigationTypeToYYWebViewNavigationType:(long long)a0;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (BOOL)webView:(id)a0 shouldPreviewElement:(id)a1;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1 replyHandler:(id /* block */)a2;
- (void)addScriptMessageHandlerName:(id)a0;
- (void)LoadRequest:(id)a0;
- (void)LoadHTMLString:(id)a0 baseURL:(id)a1;
- (id)reload;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)webView:(id)a0 navigationAction:(id)a1 didBecomeDownload:(id)a2;
- (void)webView:(id)a0 navigationResponse:(id)a1 didBecomeDownload:(id)a2;
- (void)_webView:(id)a0 navigation:(id)a1 didSameDocumentNavigation:(long long)a2;
- (void)_webViewWebProcessDidBecomeUnresponsive:(id)a0;
- (void)checkLocalStorageApiAlive;
- (void)setNeedReportXPCRecovery;
- (void)checkNeedReportXPCIssue;
- (void)removeEditMenuInteractionIfNeeded;
- (void)restoreEditMenuInteraction;
- (id)getWKContentView;
- (void)buildMenuWithBuilder:(id)a0;
- (void)setKeyboardFocusEnabled:(BOOL)a0;
- (id)base64Decode:(id)a0;
- (void)setAllKeyboardFocus;
- (void).cxx_destruct;

@end
