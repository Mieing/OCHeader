@class WABizF2FSuccPageCgi, NSString, WABizF2FPlaceOrderResp, WABizF2FCancelPayCgi, WABizF2FRequestPaymentCgi, MMITransmitKvData, WCPayJumpRemindControlLogic, WABizF2FPlaceOrderCgi, WCPayControlData, WCPayBizF2FPaidSuccViewController, WCBizLoadingView, WABizF2FRequestPaymentResp;

@interface WAJSEventHandler_requestPersonalPay : WAJSEventHandler_BaseEvent <WABizF2FRequestPaymentCgiDelegate, WABizF2FPlaceOrderCgiDelegate, WABizF2FCancelPayCgiDelegate, WABizF2FPayCheckCgiDelegate, WABizF2FSuccPageCgiDelegate, MMUseCaseCallback, WCPayBizF2FPaidSuccViewControllerDelegate>

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *outPrepayId;
@property (retain, nonatomic) WABizF2FRequestPaymentCgi *bizF2FRequestPaymentCgi;
@property (retain, nonatomic) WABizF2FPlaceOrderCgi *bizF2FPlaceOrderCgi;
@property (retain, nonatomic) WABizF2FCancelPayCgi *bizF2FCancelPayCgi;
@property (retain, nonatomic) WABizF2FSuccPageCgi *bizF2FSuccPageCgi;
@property (retain, nonatomic) WABizF2FRequestPaymentResp *bizF2FRequestPaymentResp;
@property (retain, nonatomic) WABizF2FPlaceOrderResp *placeOrderResp;
@property (retain, nonatomic) WCPayJumpRemindControlLogic *jumpRemindControlLogic;
@property (retain, nonatomic) MMITransmitKvData *paymentData;
@property (retain, nonatomic) WCPayControlData *m_data;
@property (retain, nonatomic) WCPayBizF2FPaidSuccViewController *paidSuccViewController;
@property (retain, nonatomic) WCBizLoadingView *m_loadView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onWABizF2FRequestPaymentCgiResponseOK:(id)a0;
- (void)onWABizF2FRequestPaymentCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onWABizF2FPlaceOrderCgiResponseOK:(id)a0;
- (void)onWABizF2FPlaceOrderCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onWABizPayCheckCgiResponseOK:(id)a0;
- (void)onWABizPayCheckCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onBizF2FPaidSuccViewControllerDoneBtnClick;
- (void)call:(id)a0;
- (void)onWABizF2FCancelPayCgiResponseOK:(id)a0;
- (void)onWABizF2FCancelPayCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onWABizF2FSuccPageCgiResponseOK:(id)a0;
- (id)convertSucPageRespFrom:(id)a0;
- (void)onWABizF2FSuccPageCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onSuccPageCgiFailed;
- (void)onAfterPaymentCancelOrFail;
- (void)onPayMoneyLogicCancel:(id)a0;
- (id)genAfterPlaceOrderCommReq:(id)a0;
- (void)onPayMoneyLogicSuccess:(id)a0;
- (void)onWABizF2FPlaceOrderFail;
- (void)showPanelWithPaymentResp:(id)a0;
- (void)onWABizF2FRequestPaymentFail;
- (void)startPlaceOrder:(unsigned long long)a0;
- (id)getPanelCustomView:(id)a0;
- (void)initLoadView;
- (void)startWCPayLoading;
- (void)stopWCPayLoading;
- (void).cxx_destruct;

@end
