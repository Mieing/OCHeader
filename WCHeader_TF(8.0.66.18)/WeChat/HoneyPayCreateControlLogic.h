@class NSString, WCPayCheckHoneyUserCgi, WCPayCheckHoneyPayerCgi, WCPayGetPayPwdTokenCgi, WCPayPayPwdViewController, HoneyPaySelectCardTypeViewController, HoneyPayGetCreateTokenSignCgi, WCPayCreateHoneyPayCardCgi;
@protocol HoneyPayCreateControlLogicDelegate;

@interface HoneyPayCreateControlLogic : WCPayHoneyPayBaseControlLogic <WCPayGetPayPwdTokenCgiDelegate, HoneyPayGetCreateTokenSignCgiDelegate, WCPayCheckHoneyUserCgiDelegate, WCPayCheckHoneyPayerCgiDelegate, WCPayCreateHoneyPayCardCgiDelegate, WCPaySelectSingleContactControlLogicDelegate, MMTipsViewControllerDelegate, WCPayPayPwdViewControllerDelegate, HoneyPayPayerDetailControlLogicDelegate, HoneyPaySelectCardTypeViewControllerDelegate, HoneyPayPrepareCardViewControllerDelegate>

@property (retain, nonatomic) WCPayCheckHoneyPayerCgi *checkPayerCgi;
@property (retain, nonatomic) WCPayCheckHoneyUserCgi *checkUserCgi;
@property (retain, nonatomic) HoneyPayGetCreateTokenSignCgi *getCreateTokenSignCgi;
@property (retain, nonatomic) WCPayCreateHoneyPayCardCgi *createCgi;
@property (retain, nonatomic) WCPayGetPayPwdTokenCgi *getPayPwdTokenCgi;
@property (retain, nonatomic) HoneyPaySelectCardTypeViewController *selectCardTypeVC;
@property (retain, nonatomic) WCPayPayPwdViewController *pwdVC;
@property (weak, nonatomic) id<HoneyPayCreateControlLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 delegate:(id)a1;
- (void)startLogic;
- (void)dealloc;
- (void)gotoModifyMaximumAmount;
- (void)verifyPassword;
- (void)selectSingleContactLogic:(id)a0 didSelectContact:(id)a1;
- (void)OnRealnameVerifySuccess:(id)a0;
- (void)selectCardTypeVC:(id)a0 didSelectCardType:(id)a1;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)prepareCardVC:(id)a0 didClickNextWithAmount:(id)a1 wishing:(id)a2;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)a0;
- (void)OnVerifyPayPassword:(id)a0;
- (void)getPayPwdTokenCgi:(id)a0 didGetResponse:(id)a1;
- (void)getPayPwdTokenCgi:(id)a0 didFailWithError:(id)a1;
- (void)checkHoneyPayerCgi:(id)a0 didGetResponse:(id)a1;
- (void)checkHoneyPayerCgi:(id)a0 didFailWithError:(id)a1;
- (void)getCreateTokenSignCgi:(id)a0 didGetResponse:(id)a1;
- (void)getCreateTokenSignCgi:(id)a0 didFailWithError:(id)a1;
- (void)checkHoneyUserCgi:(id)a0 didGetResponse:(id)a1;
- (void)checkHoneyUserCgi:(id)a0 didFailWithError:(id)a1;
- (void)createHoneyPayCardCgi:(id)a0 didGetResponse:(id)a1;
- (void)createHoneyPayCardCgi:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;

@end
