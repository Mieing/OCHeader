@interface CJPayBridgePlugin_larkAuth : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)larkAuthWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
