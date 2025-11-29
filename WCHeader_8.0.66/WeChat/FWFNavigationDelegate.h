@class FWFNavigationDelegateFlutterApiImpl, NSString;

@interface FWFNavigationDelegate : FWFObject <WKNavigationDelegate>

@property (readonly, nonatomic) FWFNavigationDelegateFlutterApiImpl *navigationDelegateAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
