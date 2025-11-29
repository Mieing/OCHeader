@class NSString;

@interface CJPayAnnieXBDWebKitImpl : NSObject <CJPayBDWebKitInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bindToProtocol;
+ (id)sharedInstance;

- (void)setupClassPluginForWebInterceptor;
- (void)setInterceptionEnable:(BOOL)a0;
- (void)configSecureLinkDomain:(id)a0;
- (void)injectToWebView:(id)a0 withAid:(int)a1 scene:(id)a2 lang:(id)a3;
- (void)secureGoBackStepByStep:(id)a0 reachEndBlock:(id /* block */)a1;
- (void)registerCustomInterceptor:(id)a0;
- (void)unregisterCustomInterceptor:(id)a0;
- (void)setInterceptionUseFalconURLSchemaHandle:(BOOL)a0;
- (void)unregisterPatterns:(id)a0;
- (void)registerPatterns:(id)a0 forGurdAccessKey:(id)a1;
- (id)createBDWebCookiePlugin;
- (void)setEnableInterceptor:(BOOL)a0 withConfiguration:(id)a1;
- (void)setSyncModeWithConfiguration:(id)a0;
- (void)setAsyncModeWithConfiguration:(id)a0;
- (void)setSwitchOnFirstRequestSecureCheck:(BOOL)a0 withWebView:(id)a1;
- (void)setSecureLinkCheckRedirectTypeAsyncWithWebView:(id)a0;

@end
