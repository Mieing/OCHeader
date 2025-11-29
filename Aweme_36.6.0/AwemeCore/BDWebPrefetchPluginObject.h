@class NSString;

@interface BDWebPrefetchPluginObject : IWKPluginObject <IWKClassPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enablePrefetch;

- (id)webView:(id)a0 loadRequest:(id)a1;
- (void)p_registerPrefetchBridgeForWebView:(id)a0;
- (id)webView:(id)a0 didCommitNavigation:(id)a1;

@end
