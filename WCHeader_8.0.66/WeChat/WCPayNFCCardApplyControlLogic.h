@class WCPayNFCCardPlaceOrderCgi, NSString, WCPayNFCCardQueryOrderCgi, OrderQueryOrderResponse, OrderCreateOrderResponse, ApplyNFCCardResponse, EXTPKG_mmpayapplynfccardbo_CardPasskitInfo;
@protocol WCPayNFCCardApplyControlLogicDelegate;

@interface WCPayNFCCardApplyControlLogic : WCPayControlLogic <WCPayQueryNFCardInfoCgiDelegate, WCPayNFCCardPlaceOrderCgiDelegate, MMUseCaseCallback, WCPayNFCCardQueryOrderCgiDelegate, PKAddPaymentPassViewControllerDelegate, WCPayIssueNFCCardCgiDelegate, WCPayNFCCardApplyViewControllerDelegate>

@property (retain, nonatomic) OrderCreateOrderResponse *placeOrderResponse;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) ApplyNFCCardResponse *applyNFCCardResponse;
@property (retain, nonatomic) OrderQueryOrderResponse *orderQueryReponse;
@property (retain, nonatomic) EXTPKG_mmpayapplynfccardbo_CardPasskitInfo *cardPasskitInfo;
@property (retain, nonatomic) NSString *outTradeNo;
@property (retain, nonatomic) WCPayNFCCardPlaceOrderCgi *placeOrderCgi;
@property (retain, nonatomic) WCPayNFCCardQueryOrderCgi *queryOrderCgi;
@property (weak, nonatomic) id<WCPayNFCCardApplyControlLogicDelegate> logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (void)startLogic;
- (void)startQueryCardInfoCgi;
- (int)countDonwSec:(long long)a0;
- (void)onWCPayNFCCardTipsViewControllerCancel;
- (void)onWCPayQueryNFCardInfoCgiResponseOK:(id)a0 result:(id)a1;
- (void)onWCPayQueryNFCardInfoCgiResponseError:(id)a0 errorMsg:(id)a1 errorCode:(unsigned int)a2;
- (void)onWCPayNFCCardApplyViewControllerCancel;
- (void)onWCPayNFCCardApplyViewControllerConfirmApply:(long long)a0;
- (void)onWCPayNFCCardPlaceOrderCgiResponseOK:(id)a0 result:(id)a1;
- (void)onWCPayNFCCardPlaceOrderCgiResponseError:(id)a0 errorMsg:(id)a1 errorCode:(unsigned int)a2;
- (void)doInWxAppPay:(id)a0;
- (void)call:(id)a0;
- (void)doNFCCardQueryOrderCgi;
- (void)doContinueApplyCard;
- (void)onWCPayNFCCardQueryOrderCgiResponseOK:(id)a0 result:(id)a1;
- (void)onWCPayNFCCardQueryOrderCgiResponseError:(id)a0 errorMsg:(id)a1 errorCode:(unsigned int)a2;
- (void)addPaymentPassViewController:(id)a0 generateRequestWithCertificateChain:(id)a1 nonce:(id)a2 nonceSignature:(id)a3 completionHandler:(id /* block */)a4;
- (void)addPaymentPassViewController:(id)a0 didFinishAddingPaymentPass:(id)a1 error:(id)a2;
- (void)onWCPayIssueNFCCardCgiResponseError:(id)a0 errorMsg:(id)a1 errorCode:(unsigned int)a2;
- (void)onWCPayIssueNFCCardCgiResponseOK:(id)a0 result:(id)a1;
- (void).cxx_destruct;

@end
