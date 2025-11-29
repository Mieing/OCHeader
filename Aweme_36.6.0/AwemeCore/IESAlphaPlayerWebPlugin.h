@class NSString;

@interface IESAlphaPlayerWebPlugin : IWKPluginObject <IWKClassPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)injectPlugin;

- (id)webView:(id)a0 loadRequest:(id)a1;
- (void)addAlphaComponent:(id)a0;
- (long long)priority;

@end
