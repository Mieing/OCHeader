@class NSString;

@interface BDPIAPlugin : IWKPluginObject <IWKClassPlugin, IWKInstancePlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webViewWillDealloc:(id)a0;
- (id)webView:(id)a0 loadRequest:(id)a1;
- (id)removeWaitFix:(id)a0;
- (id)webView:(id)a0 didFinishNavigation:(id)a1;
- (id)webView:(id)a0 didCommitNavigation:(id)a1;
- (long long)priority;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;

@end
