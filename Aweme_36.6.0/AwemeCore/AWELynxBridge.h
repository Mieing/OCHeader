@interface AWELynxBridge : BDLynxBridge

+ (void)registerGlobalHandler:(id /* block */)a0 forMethod:(id)a1;
+ (id)skipMethodNames;
+ (id)allXBridgeNames;
+ (id)searchXBridgeNames;
+ (BOOL)needSkipMethodName:(id)a0;

@end
