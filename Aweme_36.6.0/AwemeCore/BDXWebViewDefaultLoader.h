@class NSString, WKWebView;
@protocol BDXWebViewLoaderDelegate;

@interface BDXWebViewDefaultLoader : NSObject <BDXWebViewLoader, WKScriptMessageHandler, WKNavigationDelegate>

@property (retain, nonatomic) WKWebView *webview;
@property (weak, nonatomic) id<BDXWebViewLoaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getWebView;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)load:(id)a0;
- (void).cxx_destruct;
- (void)reload;
- (id)initWithDelegate:(id)a0;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)evaluateJavaScript:(id)a0 completionHandler:(id /* block */)a1;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)setParams:(id)a0;

@end
