@class NSString;

@interface BDWebOfflinePlugin : IWKPluginObject <IWKClassPlugin, IWKInstancePlugin>

@property (nonatomic) BOOL forestLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webViewWillDealloc:(id)a0;
- (id)webView:(id)a0 loadRequest:(id)a1;
- (id)webView:(id)a0 didInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 configuration:(id)a2;
- (void)enableForestStreamLoadForWebView:(id)a0;
- (void)disableForestStreamLoadForWebView:(id)a0;
- (void)startOffline:(id)a0;
- (void)stopOffline:(id)a0;
- (id)webView:(id)a0 didFinishNavigation:(id)a1;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;

@end
