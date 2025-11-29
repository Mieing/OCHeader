@interface CJPayBridgePlugin_bio : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)goSettingsParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3 command:(id)a4;
- (void)p_recordSaasScene:(id)a0 saasKey:(id)a1;
- (void)p_resetSaasSceneKey:(id)a0;
- (void)p_getSource:(id)a0;
- (void)bioPaymentShowStateWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)switchBioPaymentStateWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
