@interface CJPayBridgePlugin_showToast : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)showToastWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
