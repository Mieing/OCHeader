@class NSDictionary, NSString, WKUserContentController;
@protocol WKScriptMessageHandler, AWETimorWebViewDelegate;

@interface AWETimorWebView : WKWebView <BDPBridgeInstanceProtocol, WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler, UIScrollViewDelegate>

@property (nonatomic) long long terminatedCount;
@property (retain, nonatomic) id<WKScriptMessageHandler> messageHandlerProxy;
@property (weak, nonatomic) WKUserContentController *userContentController;
@property (retain, nonatomic) NSDictionary *param;
@property (nonatomic) long long webViewID;
@property (weak, nonatomic) id<AWETimorWebViewDelegate> commonWebViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)webViewConfiguration:(id)a0;

- (void)setupAPIFunctions;
- (void)removeAPIFunctions;
- (void)invoke:(id)a0 completion:(id /* block */)a1;
- (id)processBusinessBridgeCallBackWithAPIName:(id)a0 error:(id)a1 result:(id)a2;
- (void)callbackInvoke:(long long)a0 data:(id)a1;
- (void)invokeEvent:(id)a0 params:(id)a1 type:(long long)a2 instance:(id)a3 checkBlock:(id /* block */)a4 executeResult:(id /* block */)a5;
- (void)evaluateScript:(id)a0 completion:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 param:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)dealloc;
- (void)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3 completionHandler:(id /* block */)a4;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
