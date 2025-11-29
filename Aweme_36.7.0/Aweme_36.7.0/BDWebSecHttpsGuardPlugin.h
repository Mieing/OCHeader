@class NSString;

@interface BDWebSecHttpsGuardPlugin : IWKPluginObject <IWKClassPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webView:(id)a0 loadRequest:(id)a1;

@end
