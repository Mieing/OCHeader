@class NSString;

@interface WCPayCreditPayControlDetailLogic : WCPayControlLogic <WCPayCreditPayCardDetailInfoViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayCreditPayFinishCreateViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)startLogic;
- (void)jumpToNewMessage:(id)a0;
- (void)openBranderProfile;
- (id)getServiceContant;
- (void)WCPayCreditPayCardDetailInfoViewControllerBack;
- (void)WCPayCreditPayCardDetailInfoViewControllerContactBrandChat;
- (void)WCPayCreditPayCardDetailInfoViewControllerContactBrandProfile;
- (void)WCPayCreditPayCardDetailInfoViewControllerHelpGuider;
- (void)WCPayCreditPayCardDetailInfoViewControllerShowCreditRights;
- (void)WCPayCreditPayCardDetailInfoViewControllerRepayment;
- (void)WCPayCreditPayCardDetailInfoViewControllerShowCreditDetail;
- (void)gotoWebViewController:(id)a0;
- (void)WCPayCreditPayCardDetailInfoViewControllerSetMainBankCard:(id)a0;
- (void)WCPayCreditPayCardDetailInfoViewControllerUnbindCard:(id)a0;
- (void)WCPayCreditPayCardDetailInfoViewControllerViewBill;
- (void)WCPayCreditPayCardDetailInfoViewControllerIncreaseLimit;
- (void)WCPayCreditPayFinishCreateViewControllerBack;
- (void)WCPayCreditPayFinishCreateViewControllerGoToGetMoreLimit;
- (void)WCPayCreditPayCardDetailInfoViewControllerViewWillAppear;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)a0;
- (void)OnQueryWXCreditCardInfo:(id)a0 Error:(id)a1;
- (void)OnPayPasswordError:(id)a0 ErrorCount:(int)a1 LockTotalCount:(unsigned int)a2;
- (void)OnVerifyPayPassword:(id)a0;
- (void)OnSetMainCard:(id)a0 Error:(id)a1;
- (void)OnGetBindQueryInfo:(id)a0 Error:(id)a1;

@end
