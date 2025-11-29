@class NSString;

@interface WCPayCreditPayUnbindLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)startLogic;
- (void)confirmToUnbind;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)a0;
- (void)BackToRootView;
- (void)OnVerifyPayPassword:(id)a0;
- (void)OnPayPasswordError:(id)a0 ErrorCount:(int)a1 LockTotalCount:(unsigned int)a2;
- (void)OnUnbindCreditPay:(id)a0;
- (void)OnGetBindQueryInfo:(id)a0 Error:(id)a1;

@end
