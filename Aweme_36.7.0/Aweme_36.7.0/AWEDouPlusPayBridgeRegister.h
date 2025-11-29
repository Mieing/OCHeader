@interface AWEDouPlusPayBridgeRegister : NSObject

+ (void)registerJSBridgeHandler;
+ (void)handleDpShowResultJSBWithParams:(id)a0 jsBridge:(id)a1;
+ (void)handleOrderResultWithParams:(id)a0;
+ (long long)callbackCodeWithResultType:(long long)a0;
+ (void)handleTorchOrderPaySuccess:(BOOL)a0 queryParams:(id)a1 response:(id)a2 jsBridge:(id)a3;
+ (void)handleOrderPaySuccess:(BOOL)a0 queryParams:(id)a1 originParams:(id)a2;
+ (void)registerJSBridgeForCJPay;

@end
