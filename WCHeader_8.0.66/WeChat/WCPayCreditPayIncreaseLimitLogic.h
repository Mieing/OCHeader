@class NSString;

@interface WCPayCreditPayIncreaseLimitLogic : WCPayControlLogic <WCPayCreditPayAnswerQuestionViewControllerDelegate, WCPayCreditPayIncreaseLimitSucViewControllerDelegate, WCPayPayPwdViewControllerDelegate>

@property (nonatomic) BOOL m_bNeedQueryCreditInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)startLogic;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)a0;
- (void)WCPayCreditPayAnswerQuestionViewControllerBack;
- (void)WCPayCreditPayAnswerQuestionViewControllerNext:(id)a0;
- (void)WCPayCreditPayIncreaseLimitSucViewControllerBack;
- (void)OnQueryWXCreditQuestion:(id)a0 Error:(id)a1;
- (void)OnCommitWXCreditAnswer:(id)a0 Error:(id)a1;
- (void)OnVerifyPayPassword:(id)a0;
- (void)OnPayPasswordError:(id)a0 ErrorCount:(int)a1 LockTotalCount:(unsigned int)a2;
- (void)OnQueryWXCreditCardInfo:(id)a0 Error:(id)a1;

@end
