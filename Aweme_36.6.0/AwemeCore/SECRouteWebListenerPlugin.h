@class NSArray, NSString;

@interface SECRouteWebListenerPlugin : IWKPluginObject <IWKClassPlugin>

@property (copy, nonatomic) NSArray *focusSchemes;
@property (copy, nonatomic) NSString *cacheRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isRouteFromNavigation:(id)a0;
+ (void)injectWithFocusSchemes:(id)a0;
+ (id)shared;

- (void).cxx_destruct;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;

@end
