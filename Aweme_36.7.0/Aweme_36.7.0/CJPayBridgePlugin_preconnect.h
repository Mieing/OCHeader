@interface CJPayBridgePlugin_preconnect : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)preconnectWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)dnsPrefetchWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
