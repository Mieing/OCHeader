@class NSString, WKWebView, UPWebViewJavascriptBridgeBase;
@protocol WKNavigationDelegate;

@interface UPWKWebViewJavascriptBridge : NSObject <WKNavigationDelegate, UPWebViewJavascriptBridgeBaseDelegate> {
    WKWebView *_webView;
    id<WKNavigationDelegate> _webViewDelegate;
    long long _uniqueId;
    UPWebViewJavascriptBridgeBase *_base;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enableLogging;
+ (id)bridgeForWebView:(id)a0;

- (void)send:(id)a0;
- (void)send:(id)a0 responseCallback:(id /* block */)a1;
- (void)callHandler:(id)a0;
- (void)callHandler:(id)a0 data:(id)a1;
- (void)callHandler:(id)a0 data:(id)a1 responseCallback:(id /* block */)a2;
- (void)registerHandler:(id)a0 handler:(id /* block */)a1;
- (void)removeHandler:(id)a0;
- (void)reset;
- (void)setWebViewDelegate:(id)a0;
- (void)disableJavscriptAlertBoxSafetyTimeout;
- (void)dealloc;
- (void)_setupInstance:(id)a0;
- (void)WKFlushMessageQueue;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (id)_evaluateJavascript:(id)a0;
- (void).cxx_destruct;

@end
