@class NSString;

@interface WCPayChangeOfflinePayFeeLimitLogic : WCPayControlLogic <WCPayChangeOfflinePayLimitFeeViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayPayPwdViewControllerDelegate>

@property (nonatomic) int m_enWCPayChangeOfflinePayFeeLimitLogicScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)startLogic;
- (void)EndChangeOfflinePayFeeLimit;
- (void)VerifyPayCardBack;
- (void)VerifyPayCardNext:(id)a0;
- (void)VerifyPayCardAgain:(id)a0;
- (void)VerifyPayPwdNext:(id)a0;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)OnWCPayChangeOfflinePayLimitFeeViewControllerBack;
- (void)OnWCPayChangeOfflinePayLimitFeeViewControllerChangeToLimit:(long long)a0;
- (void)OnChangeOfflinePayLimit:(id)a0 Error:(id)a1;

@end
