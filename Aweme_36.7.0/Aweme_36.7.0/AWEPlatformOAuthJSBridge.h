@interface AWEPlatformOAuthJSBridge : NSObject

+ (void)registerJSBridgeHandler;
+ (void)registerUniqueJSBridgeHandler;
+ (id)registerJumpOpenAuthPageWithJSBridge:(id)a0 callbackId:(id)a1 result:(id)a2 JSSDKVersion:(id)a3 executeCallback:(BOOL *)a4;

@end
