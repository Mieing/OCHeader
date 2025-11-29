@class NSString;

@interface WCPayOfflinePayUnfreezeLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)VerifyPayPwdNext:(id)a0;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)OnUnfreezeOfflinePay:(id)a0;

@end
