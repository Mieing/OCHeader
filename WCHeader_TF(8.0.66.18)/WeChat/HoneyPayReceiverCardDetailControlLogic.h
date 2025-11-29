@class WCPayQryHoneyPayCardDetailCgi, WCPayGetPayPwdTokenCgi, WCPayUnbindHoneyPayCardCgi, NSString, HoneyPayReceiverCardDetailViewController;
@protocol HoneyPayReceiverCardDetailControlLogicDelegate;

@interface HoneyPayReceiverCardDetailControlLogic : WCPayHoneyPayBaseControlLogic <WCPayQryHoneyPayCardDetailCgiDelegate, WCPayUnbindHoneyPayCardCgiDelegate, HoneyPayReceiverCardDetailViewControllerDelegate, WCPayGetPayPwdTokenCgiDelegate>

@property (retain, nonatomic) WCPayQryHoneyPayCardDetailCgi *detailCgi;
@property (retain, nonatomic) WCPayUnbindHoneyPayCardCgi *unbindCgi;
@property (retain, nonatomic) WCPayGetPayPwdTokenCgi *getPayPwdTokenCgi;
@property (retain, nonatomic) HoneyPayReceiverCardDetailViewController *detailVC;
@property (weak, nonatomic) id<HoneyPayReceiverCardDetailControlLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 delegate:(id)a1;
- (void)MMUIViewControllerDidBeRemoved:(id)a0;
- (void)startLogic;
- (void)requestDetail;
- (void)receiverCardDetailVCDidClickUnbindCard:(id)a0;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)a0;
- (void)OnVerifyPayPassword:(id)a0;
- (void)getPayPwdTokenCgi:(id)a0 didGetResponse:(id)a1;
- (void)getPayPwdTokenCgi:(id)a0 didFailWithError:(id)a1;
- (void)qryHoneyPayCardDetailCgi:(id)a0 didGetResponse:(id)a1;
- (void)qryHoneyPayCardDetailCgi:(id)a0 didFailWithError:(id)a1;
- (void)unbindHoneyPayCardCgi:(id)a0 didGetResponse:(id)a1;
- (void)unbindHoneyPayCardCgi:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;

@end
