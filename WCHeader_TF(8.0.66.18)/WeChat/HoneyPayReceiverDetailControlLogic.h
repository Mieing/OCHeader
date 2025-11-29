@class NSString, WCPayQryHoneyUserDetailCgi, WCPayGetHoneyPayCardCgi, HoneyPayReceiverStatusViewController;
@protocol HoneyPayReceiverDetailControlLogicDelegate;

@interface HoneyPayReceiverDetailControlLogic : WCPayHoneyPayBaseControlLogic <HoneyPayReceiverStatusViewControllerDelegate, WCPayQryHoneyUserDetailCgiDelegate, WCPayGetHoneyPayCardCgiDelegate>

@property (retain, nonatomic) HoneyPayReceiverStatusViewController *detailVC;
@property (retain, nonatomic) WCPayQryHoneyUserDetailCgi *detailCgi;
@property (retain, nonatomic) WCPayGetHoneyPayCardCgi *getCardCgi;
@property (nonatomic) BOOL receiveCardSuccess;
@property (weak, nonatomic) id<HoneyPayReceiverDetailControlLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 delegate:(id)a1;
- (void)MMUIViewControllerDidBeRemoved:(id)a0;
- (void)startLogic;
- (void)dealloc;
- (void)WCPayViewControllerDidBeRemoved:(id)a0;
- (void)requestDetail;
- (id)cardNo;
- (void)receiverStatusVCDidClickGetCard:(id)a0;
- (void)receiverStatusVCDidClickGotoBankCardList:(id)a0;
- (void)qryHoneyUserDetailCgi:(id)a0 didGetResponse:(id)a1;
- (void)qryHoneyUserDetailCgi:(id)a0 didFailWithError:(id)a1;
- (void)getHoneyPayCardCgi:(id)a0 didGetResponse:(id)a1;
- (void)getHoneyPayCardCgi:(id)a0 didFailWithError:(id)a1;
- (void)OnRealnameVerifySuccess:(id)a0;
- (void).cxx_destruct;

@end
