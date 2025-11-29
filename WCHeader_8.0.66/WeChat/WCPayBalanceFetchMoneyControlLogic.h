@class WCPayAddPayCardLogic, NSString, NSArray, WCPayPayResponseRetryInfo, WCPayPayMoneyLogic, WCPayBalanceTipsLogic, WCPayFetchBalanceReport;

@interface WCPayBalanceFetchMoneyControlLogic : WCPayControlLogic <WCPayFetchIdentifyTipsViewControllerDelegate, MMUseCaseCallback, WCBaseControlLogicDeleagte, WCPayPayMoneyLogicDelegate, WCPayNewFetchViewControllerDelegate, WCBaseControlMgrExt> {
    WCPayPayMoneyLogic *m_payLogic;
    WCPayAddPayCardLogic *m_oWCPayAddPayCardLogic;
    WCPayBalanceTipsLogic *m_oContinueTipLogic;
    WCPayBalanceTipsLogic *m_oFirstChargeTipLogic;
    WCPayBalanceTipsLogic *m_oNotEnoughtFeeTipLogic;
    WCPayBalanceTipsLogic *m_fetchChargesTipLogic;
    BOOL m_bHaveShowFisrtChargeTip;
    NSArray *m_arrMyAllCardsBeforeAddCard;
    BOOL m_bAddingNewCard;
    WCPayPayResponseRetryInfo *m_retryInfo;
    WCPayFetchBalanceReport *m_reportLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getReportLogic;
- (void)startLogic;
- (void)stopLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (BOOL)gotoViewController:(id)a0;
- (BOOL)WCPayFetchIsCurrentLogicTop;
- (void)WCPayFetchViewControllerCancel:(BOOL)a0;
- (void)dismissCurrentViewAndCheckStopLogicWithAnimated:(BOOL)a0;
- (void)WCPayFetchViewControllerNext:(id)a0 FetchAll:(BOOL)a1;
- (void)onErrorAlertViewDismiss:(id)a0;
- (void)OnWCPayBaseRequestNoKnownError:(id)a0 TenPayCmdType:(unsigned int)a1;
- (void)WCPayFetchViewControllerAddCard;
- (void)doAddCard;
- (void)OnContinueFetch;
- (void)WCPayFetchViewControlllerNeedUpdateData;
- (void)OnGetBalanceFetchRequest:(id)a0 ExtData:(id)a1 Error:(id)a2;
- (void)showFetchChargeAlert:(id)a0;
- (void)showFirstFetchInfoAlert:(id)a0 notEnoughtForFee:(id)a1;
- (void)showNotEnoughForFeeAlert:(id)a0;
- (void)onClickFetchAll;
- (void)OnGetBindQueryInfo:(id)a0 Error:(id)a1;
- (void)storeAllExistCards;
- (id)getNewBindCard;
- (id)getAvailableCards;
- (void)onWCPayFetchIdentifyTipsViewControllerConfirm:(id)a0;
- (void)onWCPayFetchIdentifyTipsViewControllerCancel;
- (void)startKindaFetchBalance:(unsigned long long)a0 fetchAll:(BOOL)a1;
- (void)call:(id)a0;
- (void)ActiveFetchViewControllerTextField:(BOOL)a0;
- (void).cxx_destruct;

@end
