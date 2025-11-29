@class WCPayQryHoneyPayerDetailCgi, WCPayUnbindHoneyPayCardCgi, WCPayModifyHoneyPayerCreditLineCgi, NSString, WCPayGetPayPwdTokenCgi, HoneyPayPayerCardDetailViewController, WCPayModifyHoneyPayerNotifyCgi, WCPayModifyHoneyPayerPayWayCgi, HoneyPayGetMCreditLineTokenCgi;
@protocol HoneyPayPayerDetailControlLogicDelegate;

@interface HoneyPayPayerDetailControlLogic : WCPayHoneyPayBaseControlLogic <HoneyPayPayerCardDetailViewControllerDelegate, WCPayQryHoneyPayerDetailCgiDelegate, HoneyPayModifyMaximumAmountViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayModifyHoneyPayerCreditLineCgiDelegate, WCPayUnbindHoneyPayCardCgiDelegate, WCPayModifyHoneyPayerPayWayCgiDelegate, WCPayModifyHoneyPayerNotifyCgiDelegate, HoneyPayGetMCreditLineTokenCgiDelegate, WCPayGetPayPwdTokenCgiDelegate, MMTipsViewControllerDelegate>

@property (nonatomic) unsigned long long entranceType;
@property (nonatomic) unsigned long long verifyPasswordScene;
@property (retain, nonatomic) WCPayQryHoneyPayerDetailCgi *detailCgi;
@property (retain, nonatomic) HoneyPayPayerCardDetailViewController *detailVC;
@property (retain, nonatomic) WCPayModifyHoneyPayerCreditLineCgi *modifyCgi;
@property (retain, nonatomic) WCPayUnbindHoneyPayCardCgi *unbindCgi;
@property (retain, nonatomic) WCPayModifyHoneyPayerPayWayCgi *modifyPayWayCgi;
@property (retain, nonatomic) WCPayModifyHoneyPayerNotifyCgi *modifyNotifyCgi;
@property (retain, nonatomic) HoneyPayGetMCreditLineTokenCgi *getMCreditLineTokenCgi;
@property (retain, nonatomic) WCPayGetPayPwdTokenCgi *getPayPwdTokenCgi;
@property (weak, nonatomic) id<HoneyPayPayerDetailControlLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 delegate:(id)a1;
- (void)startLogic;
- (void)stopLogic;
- (void)WCPayViewControllerDidBeRemoved:(id)a0;
- (void)requestCreatedDetail;
- (void)requestDetail;
- (void)verifyPassword:(unsigned long long)a0;
- (void)popAndPushDetailVC:(BOOL)a0;
- (void)payerCardDetailVCDidClickChangeMaximumAmount:(id)a0;
- (void)payerCardDetailVCDidClickUnbindCard:(id)a0;
- (void)payerCardDetailVC:(id)a0 changePayWay:(id)a1;
- (void)payerCardDetailVCDidClickCreatedDoneButton:(id)a0;
- (void)modifyMaximumAmountVC:(id)a0 didClickNextWithAmount:(id)a1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)a0;
- (void)OnGetBindQueryInfo:(id)a0 Error:(id)a1;
- (void)OnVerifyPayPassword:(id)a0;
- (void)getPayPwdTokenCgi:(id)a0 didGetResponse:(id)a1;
- (void)getPayPwdTokenCgi:(id)a0 didFailWithError:(id)a1;
- (void)qryHoneyPayerDetailCgi:(id)a0 didGetResponse:(id)a1;
- (void)qryHoneyPayerDetailCgi:(id)a0 didFailWithError:(id)a1;
- (void)getMCreditLineTokenCgi:(id)a0 didGetResponse:(id)a1;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)getMCreditLineTokenCgi:(id)a0 didFailWithError:(id)a1;
- (void)modifyHoneyPayerCreditLineCgi:(id)a0 didGetResponse:(id)a1;
- (void)modifyHoneyPayerCreditLineCgi:(id)a0 didFailWithError:(id)a1;
- (void)unbindHoneyPayCardCgi:(id)a0 didGetResponse:(id)a1;
- (void)unbindHoneyPayCardCgi:(id)a0 didFailWithError:(id)a1;
- (void)modifyHoneyPayerPayWayCgi:(id)a0 didGetResponse:(id)a1;
- (void)modifyHoneyPayerPayWayCgi:(id)a0 didFailWithError:(id)a1;
- (void)modifyHoneyPayerNotifyCgi:(id)a0 didGetResponse:(id)a1;
- (void)modifyHoneyPayerNotifyCgi:(id)a0 didFailWithError:(id)a1;
- (id)cardNo;
- (id)tokenMess;
- (void).cxx_destruct;

@end
