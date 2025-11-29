@interface CJPayBridgePlugin_loading : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)showLoadingWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)hideLoadingWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
