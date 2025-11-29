@interface CJPayBridgePlugin_Enigma : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (long long)innerCodeFrom:(long long)a0;
- (void)encryptWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)decryptWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
