@class NSString, WKWebView;
@protocol WKNavigationDelegate;

@interface IWKPluginNavigationDelegateProxy : NSObject <WKNavigationDelegate>

@property (weak, nonatomic) id<WKNavigationDelegate> proxy;
@property (weak, nonatomic) WKWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didReceiveServerRedirectForProvisionalNavigation:(id)a1;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)forwardInvocation:(id)a0;

@end
