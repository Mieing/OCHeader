@class CJPayHalfScreenSMSVerificationViewController;

@interface CJPayBridgePlugin_CJVerify : TTBridgePlugin

@property (retain, nonatomic) CJPayHalfScreenSMSVerificationViewController *verifyVC;

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (id)p_verifyVCFromModel:(id)a0;
- (id)p_presenter;
- (void)p_sendMessage:(long long)a0 type:(id)a1 data:(id)a2;
- (void)p_callJSEvent:(id)a0;
- (void)CJVerifyWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)CJVerifyNotifyWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void).cxx_destruct;

@end
