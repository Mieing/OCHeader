@class WCPayNFCCardQueryDepositCgi, NSString, DepositQueryDepositResponse, WCPayNFCCardTipsModal, OrderCreateOrderResponse, WCPayNFCCardPlaceOrderCgi, WCPayPassKitFacade;
@protocol WCPayNFCCardChargeControlLogicDelegate;

@interface WCPayNFCCardChargeControlLogic : WCPayControlLogic <WCPayQueryNFCardInfoCgiDelegate, WCPayNFCCardPlaceOrderCgiDelegate, WCPayNFCCardQueryDepositCgiDelegate, MMUseCaseCallback>

@property (retain, nonatomic) WCPayPassKitFacade *passkitMgr;
@property (retain, nonatomic) OrderCreateOrderResponse *placeOrderResponse;
@property (retain, nonatomic) NSString *outTradeNo;
@property (retain, nonatomic) DepositQueryDepositResponse *orderQueryReponse;
@property (retain, nonatomic) WCPayNFCCardQueryDepositCgi *queryOrderCgi;
@property (retain, nonatomic) WCPayNFCCardPlaceOrderCgi *placeOrderCgi;
@property (retain, nonatomic) WCPayNFCCardTipsModal *tipsModal;
@property (nonatomic) BOOL isChargeSuccess;
@property (weak, nonatomic) id<WCPayNFCCardChargeControlLogicDelegate> logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (void)startLogic;
- (void)startQueryCardInfoCgi;
- (void)onWCPayQueryNFCardInfoCgiResponseOK:(id)a0 result:(id)a1;
- (void)onWCPayQueryNFCardInfoCgiResponseError:(id)a0 errorMsg:(id)a1 errorCode:(unsigned int)a2;
- (void)onWCPayNFCCardChargeViewControllerCancel;
- (long long)getCurrentPassBalance;
- (void)onWCPayNFCCardChargeViewControllerConfirmCharge:(long long)a0;
- (void)onWCPayNFCCardPlaceOrderCgiResponseOK:(id)a0 result:(id)a1;
- (void)onWCPayNFCCardPlaceOrderCgiResponseError:(id)a0 errorMsg:(id)a1 errorCode:(unsigned int)a2;
- (void)doInWxAppPay:(id)a0;
- (void)call:(id)a0;
- (void)doNFCCardQueryOrderCgi;
- (void)refreshBalance;
- (void)onWCPayNFCCardQueryDepositCgiResponseOK:(id)a0 result:(id)a1;
- (void)onWCPayNFCCardQueryDepositCgiResponseError:(id)a0 errorMsg:(id)a1 errorCode:(unsigned int)a2;
- (void).cxx_destruct;

@end
