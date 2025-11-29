@interface CJPayBridgePlugin_setBounce : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)setBounce:(BOOL)a0 webviewController:(id)a1;
- (void)setBounceWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
