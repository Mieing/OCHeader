@class NSString, WKUserContentController;
@protocol WKScriptMessageHandler, BDPWebViewImplInterface;

@interface BDPBridgeWebView : WKWebView <WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler, UIScrollViewDelegate, BDPBridgeInstanceProtocol>

@property (retain, nonatomic) id<WKScriptMessageHandler> messageHandlerProxy;
@property (weak, nonatomic) WKUserContentController *userContentController;
@property (nonatomic) long long webViewID;
@property (nonatomic) BOOL isWebviewVisible;
@property (nonatomic) long long webviewTerminateOptimizeType;
@property (nonatomic) long long terminatedCount;
@property (nonatomic) BOOL isTerminateReloading;
@property (weak, nonatomic) id<BDPWebViewImplInterface> bridgeImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)webViewConfiguration:(id)a0;
+ (id)BDPBuildNonMicroAppWebFirstRequest:(id)a0 andEnvInfo:(id)a1;

- (void)setupAPIFunctions;
- (void)removeAPIFunctions;
- (void)invoke:(id)a0 completion:(id /* block */)a1;
- (void)loadScript:(id)a0 completion:(id /* block */)a1;
- (void)loadCPScript:(id)a0 completion:(id /* block */)a1;
- (void)onDocumentReady:(id)a0 completion:(id /* block */)a1;
- (void)tryStartLoading:(id)a0 completion:(id /* block */)a1;
- (id)reasonString:(long long)a0;
- (void)showTerminateReloadAlertWithUniqueID:(id)a0;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)publish:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)_webView:(id)a0 webContentProcessDidTerminateWithReason:(long long)a1;

@end
