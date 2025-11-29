@class NSString;

@interface WKIESSecurityPlugin : IWKPluginObject <IWKInstancePlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isStartWithSusPrefix:(id)a0;
+ (id)susPrefixList;
+ (void)injectToWebView:(id)a0;

- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;

@end
