@interface CJPayBridgePlugin_isAppInstalled : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)isAppInstalledWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
