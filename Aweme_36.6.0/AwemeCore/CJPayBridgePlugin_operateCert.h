@interface CJPayBridgePlugin_operateCert : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)p_callbackWithFailMsg:(id)a0 callback:(id /* block */)a1;
- (void)p_checkCertStatus:(id)a0 callback:(id /* block */)a1;
- (void)p_installCert:(id)a0 callback:(id /* block */)a1;
- (void)p_useCertSignData:(id)a0 callback:(id /* block */)a1;
- (void)p_uninstallCert:(id)a0 callback:(id /* block */)a1;
- (id)p_createContextWithParams:(id)a0;
- (void)operateCertWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
