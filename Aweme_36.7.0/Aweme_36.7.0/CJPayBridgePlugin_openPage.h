@interface CJPayBridgePlugin_openPage : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)openPageWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (id)init;

@end
