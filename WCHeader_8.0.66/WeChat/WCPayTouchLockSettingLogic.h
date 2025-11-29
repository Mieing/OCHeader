@class WCPayOpeniOSTouchLockCgi, NSString;
@protocol WCPayTouchLockSettingLogicDelegate;

@interface WCPayTouchLockSettingLogic : WCPaySecurityBaseControlLogic <WCPayPayPwdViewControllerDelegate, WCPayOpeniOSTouchLockCgiDelegate>

@property (retain, nonatomic) WCPayOpeniOSTouchLockCgi *openCgi;
@property (weak, nonatomic) id<WCPayTouchLockSettingLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 delegate:(id)a1;
- (void)startLogic;
- (void)callSetupSuccess;
- (void)openTouchLockWithToken:(id)a0 Model:(id)a1;
- (void)verifyTouchID:(id)a0;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)a0;
- (void)OnVerifyPayPassword:(id)a0;
- (void)OnVerifyPayPassword:(id)a0 andRetToken:(id)a1;
- (void)openiOSTouchLockCgi:(id)a0 didGetResponse:(id)a1;
- (void)openiOSTouchLockCgi:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;

@end
