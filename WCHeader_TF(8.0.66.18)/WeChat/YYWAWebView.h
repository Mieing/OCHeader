@class YYWAWebViewScriptMessageHandler, NSMutableDictionary, NSString, NSURLRequest, UIView, NSMutableArray, UIScrollView;
@protocol YYWAWebViewSyncJSAPIDelegate, YYWAWebViewDelegate, YYWebViewDelegate;

@interface YYWAWebView : WKWebView <WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, YYWebViewInterface>

@property (nonatomic) BOOL bDisablePopup;
@property (retain, nonatomic) YYWAWebViewScriptMessageHandler *scriptMessageHandler;
@property (nonatomic) BOOL isTestHitWKContentView;
@property (nonatomic) BOOL isHitTongCeng;
@property (nonatomic) BOOL isHitSelectableText;
@property (retain, nonatomic) UIView *wkHitView;
@property (retain, nonatomic) NSMutableDictionary *gestureEnableDic;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } oldSafeArea;
@property (retain, nonatomic) NSMutableArray *editMenuInteractions;
@property (weak, nonatomic) id<YYWAWebViewDelegate> nativeDelegate;
@property (weak, nonatomic) id<YYWAWebViewSyncJSAPIDelegate> syncJSApiDelegate;
@property (nonatomic) BOOL inputFocusing;
@property (nonatomic) BOOL ignoreSafeAreaChange;
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

- (id)defaultConfigurationWithPreInjectJSStr:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)configCustomUserAgent;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)evaluateJavaScriptFromString:(id)a0 completionBlock:(id /* block */)a1;
- (void)evaluateJavaScriptFromString:(id)a0 overwriteReturnValue:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)enableJavaScriptPopup:(BOOL)a0;
- (void)makeAllowDecision:(id /* block */)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (long long)wkNavigationTypeToYYWebViewNavigationType:(long long)a0;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)_webViewWebProcessDidBecomeUnresponsive:(id)a0;
- (void)_webViewWebProcessDidBecomeResponsive:(id)a0;
- (void)webView:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webView:(id)a0 runJavaScriptConfirmPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3 completionHandler:(id /* block */)a4;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)LoadRequest:(id)a0;
- (void)LoadHTMLString:(id)a0 baseURL:(id)a1;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)buildMenuWithBuilder:(id)a0;
- (id)inputAccessoryView;
- (void)removeEditMenuInteractionIfNeeded;
- (void)restoreEditMenuInteraction;
- (id)getWKContentView;
- (BOOL)becomeFirstResponder;
- (id)hitWKWebNativeTest:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)delayTongCengChangedScrollView:(id)a0;
- (void)onTongCengChangedScrollView:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)safeAreaInsetsDidChange;
- (void).cxx_destruct;

@end
