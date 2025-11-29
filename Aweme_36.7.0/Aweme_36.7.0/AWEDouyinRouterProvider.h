@class NSString;

@interface AWEDouyinRouterProvider : NSObject <AWEUserRouterProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerDeviceOnceWithCompletion:(id /* block */)a0;
- (void)handleLoginRouterWithParams:(id)a0 ignoreDeviceIdCheck:(BOOL)a1;
- (BOOL)canSSOLoginAndAnalyzeSchemaWithDict:(id)a0;
- (unsigned long long)loginPanelStyleFromParams:(id)a0;
- (void)ssoLoginWithPlatform:(id)a0;
- (void)handleLoginRouterWithParams:(id)a0;

@end
