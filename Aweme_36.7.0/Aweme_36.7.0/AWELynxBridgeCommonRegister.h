@interface AWELynxBridgeCommonRegister : NSObject

+ (void)registerJSBridgeHandler;
+ (id /* block */)fetchBridgeHandler:(long long)a0;
+ (void)registerMusicBridge;
+ (void)trackRequest:(id)a0;

@end
