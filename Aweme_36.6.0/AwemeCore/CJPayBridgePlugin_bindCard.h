@interface CJPayBridgePlugin_bindCard : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (id)p_buildCommonModelWithParams:(id)a0;
- (id)p_buildUserInfo:(id)a0;
- (void)bindCardWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
