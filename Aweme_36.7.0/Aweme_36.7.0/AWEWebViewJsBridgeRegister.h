@interface AWEWebViewJsBridgeRegister : NSObject

+ (void)registerJSBridgeHandler;
+ (id)openJSBListCache;
+ (void)_fetchAuthIfNeededWithParams:(id)a0 bridge:(id)a1 callbackId:(id)a2;
+ (id)findWebViewController:(id)a0;

@end
