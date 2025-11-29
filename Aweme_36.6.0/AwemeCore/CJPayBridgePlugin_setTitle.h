@interface CJPayBridgePlugin_setTitle : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (id)titleFromParam:(id)a0;
- (void)setTitleWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
