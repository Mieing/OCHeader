@interface CJPayBridgePlugin_callHostApp : TTBridgePlugin

+ (id)sharedPlugin;
+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)callHostAppWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
