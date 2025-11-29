@interface CJPayBridgePlugin_getSettings : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (id)filterFields:(id)a0 fromDict:(id)a1;
- (void)getSettingsWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
