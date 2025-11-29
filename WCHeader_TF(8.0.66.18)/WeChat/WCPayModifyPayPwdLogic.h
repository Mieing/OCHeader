@class NSString;

@interface WCPayModifyPayPwdLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate, WCPayPayPwdViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)showGiveUpLogicAlert;
- (void)OnAlertGiveUpLogic;
- (void)VerifyPayPwdNext:(id)a0;
- (void)SetPayPwdNext:(id)a0;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)BackToRootView;
- (void)onErrorAlertViewDismiss:(id)a0;
- (void)OnVerifyPayPassword:(id)a0;
- (void)OnModifyWCPayPassword:(id)a0 NewWCPayPassword:(id)a1 Error:(id)a2;

@end
