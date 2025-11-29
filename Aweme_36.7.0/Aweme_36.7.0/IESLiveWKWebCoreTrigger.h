@interface IESLiveWKWebCoreTrigger : IWKPluginObject

- (void)updateMonitorOfWebView:(id)a0 statusCode:(id)a1 error:(id)a2 withType:(long long)a3;
- (id)webView:(id)a0 didFinishNavigation:(id)a1;
- (id)webView:(id)a0 didReceiveServerRedirectForProvisionalNavigation:(id)a1;
- (id)webViewWebContentProcessDidTerminate:(id)a0;
- (id)webView:(id)a0 didCommitNavigation:(id)a1;
- (id)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (id)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;

@end
