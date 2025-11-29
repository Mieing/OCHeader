@interface CJPayBridgePlugin_closeCallback : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)closeCallbackWithParamV2:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (BOOL)handleAnnieXDecoupleCloseCallbackWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)closeCallbackWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
