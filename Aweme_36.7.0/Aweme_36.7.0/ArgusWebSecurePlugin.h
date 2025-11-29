@class NSString;

@interface ArgusWebSecurePlugin : IWKPluginObject <IWKClassPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webView:(id)a0 loadRequest:(id)a1;
- (id)webView:(id)a0 didInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 configuration:(id)a2;
- (id)getOrInitDelegate:(id)a0;
- (long long)priority;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;

@end
