@class NSString;

@interface BDPWebViewComponentInterceptPluginImpl : NSObject <BDPWebViewComponentInterceptDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)enableInterceptorForConfiguration:(id)a0;
- (void)registerSchemeHandlerClassForWebView:(id)a0;

@end
