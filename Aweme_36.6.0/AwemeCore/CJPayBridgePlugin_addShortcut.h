@interface CJPayBridgePlugin_addShortcut : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)addShortcutWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3 command:(id)a4;

@end
