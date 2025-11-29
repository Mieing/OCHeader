@interface CJPayBridgePlugin_backBlock : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)callJSEvent:(id)a0;
- (void)backBlockWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)backBlockAlertWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)blockNativeBackWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
