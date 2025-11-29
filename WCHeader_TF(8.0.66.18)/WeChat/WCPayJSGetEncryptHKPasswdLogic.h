@protocol WCPayJSGetEncryptHKPasswdLogicDelegate;

@interface WCPayJSGetEncryptHKPasswdLogic : WCPayJSAuthBaseLogic

@property (weak, nonatomic) id<WCPayJSGetEncryptHKPasswdLogicDelegate> delegate;

- (id)initWithJSEvent:(id)a0 param:(id)a1 delegate:(id)a2;
- (void)authOk;
- (void)callFail:(BOOL)a0;
- (void)callGetEncryptPwd:(id)a0 signature:(id)a1;
- (void)authFail;
- (void).cxx_destruct;

@end
