@class WCPayOverseaFacingReceiveTransferCancelCgi, NSString, WCPayOverseaTransferGetCurrencyCgi, WCPayTransferMoneyControlLogic, WCPayOverseaFacingTransferOrderResponse, WCPayOverseaTransferGetCurrencyCgiRespObject, WCPayOverseaGetTransferNameCgi, WCPayOverseaGetTransferNameResponse, WCPayOverseaTransferOrderCgi, WCPayOverseaTransferOrderResp, WCPayOverseaFacingTransferOrderCgi;

@interface WCPayOverseaTransferMoneyControlLogic : WCPayControlLogic <WCPayOverseaTransferViewControllerDelegate, WCPayOverseaTransferOrderCgiDelegate, WCPayOverseaTransferGetCurrencyCgiDelegate, WCPayOverseaGetTransferNameCgiDelegate, WCPayOverseaFacingTransferOrderCgiDelegate, IStrangerContactMgrExt, MMUseCaseCallback> {
    int m_enWCPayTransferMoneyControlLogicScene;
}

@property (retain, nonatomic) NSString *m_nsQRCodeResponseUrl;
@property (retain, nonatomic) WCPayOverseaTransferGetCurrencyCgi *m_getCurrencyCgi;
@property (retain, nonatomic) WCPayOverseaTransferOrderCgi *m_orderCgi;
@property (retain, nonatomic) WCPayOverseaTransferGetCurrencyCgiRespObject *m_currencyResp;
@property (retain, nonatomic) WCPayOverseaTransferOrderResp *m_orderResp;
@property (retain, nonatomic) WCPayOverseaGetTransferNameCgi *m_getTransferNameCgi;
@property (retain, nonatomic) WCPayOverseaGetTransferNameResponse *m_getTransferNameReponse;
@property (retain, nonatomic) WCPayOverseaFacingTransferOrderCgi *m_facingTransferOrderCgi;
@property (retain, nonatomic) WCPayOverseaFacingTransferOrderResponse *m_facingTransferOrderResp;
@property (retain, nonatomic) WCPayOverseaFacingReceiveTransferCancelCgi *m_facingTransferCancelCgi;
@property (retain, nonatomic) WCPayTransferMoneyControlLogic *m_transferMoneyControlLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQRCodeUrl:(id)a0;
- (id)initWithUserName:(id)a0 walletType:(unsigned int)a1;
- (void)startLogic;
- (void)stopLogic;
- (void)onWCPayOverseaGetTransferNameResponseOK:(id)a0;
- (void)onWCPayOverseaGetTransferNameResponseBizError:(int)a0 errorMsg:(id)a1;
- (void)onWCPayOverseaGetTransferNameResponseCgiError:(int)a0 errorMsg:(id)a1;
- (void)onStrangerContactUpdated:(id)a0 Contact:(id)a1;
- (void)onWCPayOverseaFacingTransferOrderResponseOK:(id)a0;
- (void)onWCPayOverseaFacingTransferOrderResponseBizError:(int)a0 errorMsg:(id)a1;
- (void)onWCPayOverseaFacingTransferOrderResponseCgiError:(int)a0 errorMsg:(id)a1;
- (void)onWCPayOverseaTransferGetCurrencyCgiOkArgument:(id)a0;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)onWCPayOverseaTransferGetCurrencyBizErrorWithRetCode:(int)a0 ErrorMsg:(id)a1;
- (void)onWCPayOverseaTransferGetCurrencyCgiErrorWithRetCode:(int)a0 ErrorMsg:(id)a1;
- (void)WCPayOverseaTransferViewControllerCancel;
- (void)WCPayOverseaTransferViewControllerOnNext:(id)a0;
- (id)WCPayOverseaTransferViewControllerNickName;
- (id)WCPayOverseaTransferViewControllerHeadImageUrl;
- (void)onWCPayOverseaTransferOrderCgiOkWithResp:(id)a0;
- (void)onWCPayOverseaTransferOrderCgiReturnHasTheSameAmountUnreceiveTransferWithResp:(id)a0;
- (void)onWCPayOverseaTransferOrderCgiRetrunHasUnreceiveTransferWithResp:(id)a0;
- (void)onClickOpenTradeUrl;
- (void)onClickContinueTransfer;
- (void)onWCPayOverseaTransferOrderCgiErrorWithRetCode:(int)a0 ErrorMsg:(id)a1;
- (void)onWCPayOverseaTransferOrderBizErrorWithRetCode:(int)a0 ErrorMsg:(id)a1;
- (void)onWebViewWillClose:(id)a0;
- (void)webViewReturn:(id)a0;
- (void)reportIdkeyOverseaTransferGetCurrencyFailed;
- (void)reportIdkeyOverseaTransferGetCurrencyOk;
- (void)reportIdkeyOverseaTransferGetCurrencyOkContinue;
- (void)reportIdkeyOverseaTransferGetCurrencyOkChangeToRMB;
- (void)reportIdkeyOverseaTransferOrderFailed;
- (void)reportIdkeyOverseaTransferOrderOk;
- (BOOL)shouldStartNativeHKCashier:(id)a0;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
