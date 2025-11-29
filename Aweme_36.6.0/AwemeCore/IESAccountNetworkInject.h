@class NSString;

@interface IESAccountNetworkInject : NSObject <IESAccountNetworkInjectDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldAddSafeMobileRegisterToLogin:(id)a0;
+ (BOOL)shouldAddVCDLoginAccountParamWithUrl:(id)a0;
+ (id)injectRequestParamsForURL:(id)a0;
+ (id)injectHeaderParamsForURL:(id)a0;

- (id)injectRequestParamsForURL:(id)a0;
- (id)injectHeaderParamsForURL:(id)a0;
- (id)injectDomain;
- (void)injectProcessMiddleCheck:(id)a0 completion:(id /* block */)a1;
- (void)willHandleError:(id)a0;
- (void)didHandleError:(id)a0 isHandledInSaaS:(BOOL)a1;
- (BOOL)switchOnKYCNetworkInterceptor;

@end
