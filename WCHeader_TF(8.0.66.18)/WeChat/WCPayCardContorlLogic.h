@class NSString;

@interface WCPayCardContorlLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate, WCPayCardDetailViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)CardDetailUnbindCard:(id)a0;
- (void)CardDetailSetMainBankCard:(id)a0;
- (void)CardDetailExpiredUnbindCard:(id)a0;
- (void)CardDetailRepay:(id)a0;
- (void)CardDetailBack;
- (void)VerifyPayPwdNext:(id)a0;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)BackToRootView;
- (void)OnUnBindCard:(id)a0 Error:(id)a1;
- (void)OnSetMainCard:(id)a0 Error:(id)a1;
- (void)OnGetBindQueryInfo:(id)a0 Error:(id)a1;

@end
