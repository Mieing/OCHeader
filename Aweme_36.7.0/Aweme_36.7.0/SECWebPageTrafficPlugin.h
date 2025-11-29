@interface SECWebPageTrafficPlugin : IWKPluginObject

- (id)webView:(id)a0 loadRequest:(id)a1;
- (void)webViewDidFail:(id)a0;
- (id)webView:(id)a0 didReceiveServerRedirectForProvisionalNavigation:(id)a1;
- (long long)priority;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)uniqueID;
- (id)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;

@end
