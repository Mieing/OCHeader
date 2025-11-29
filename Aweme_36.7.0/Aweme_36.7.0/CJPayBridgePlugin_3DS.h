@class CJPay3DSVerifyModule;

@interface CJPayBridgePlugin_3DS : TTBridgePlugin

@property (retain, nonatomic) CJPay3DSVerifyModule *dsVerifyModule;

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)ddcFor3DSWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)dmDeviceFingerprintWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)dsChallengeWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void).cxx_destruct;

@end
