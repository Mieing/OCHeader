@interface AWEJSBridgeHandlerRegister : NSObject

+ (void)registerJSBridgeHandler;
+ (id)findWebViewController:(id)a0;
+ (Class)aAWEDYThirdPartyAppIdManagerCommonAdapterClass;
+ (unsigned long long)bridgeAuthType;
+ (void)_requestWithModel:(id)a0 callbackId:(id)a1 jsBridge:(id)a2;
+ (void)registerThemeValue:(id)a0;
+ (void)_processFetchResultWithResponseModel:(id)a0 responseError:(id)a1 completionModel:(id)a2 completionError:(id)a3 callbackId:(id)a4 jsBridge:(id)a5;
+ (id)platformIdFromPlatformString:(id)a0;
+ (void)trackRequest:(id)a0;

- (id)aAWEDYThirdPartyAppIdManagerCommonAdapter;

@end
