@class WCPayLQTMoneyControlLogic, NSString, WCPayPayMoneyLogic;
@protocol WCPayBalanceSaveMoneyControlLogicDelegate;

@interface WCPayBalanceSaveMoneyControlLogic : WCPayControlLogic <MMTipsViewControllerDelegate, MMWebViewDelegate, WCPayLQTMoneyControlLogicDelegate, MMUseCaseCallback, WCBaseControlLogicDeleagte, WCPayPayMoneyLogicDelegate, WCPaySaveViewControllerDelegate, WCBaseControlMgrExt> {
    WCPayPayMoneyLogic *m_payLogic;
}

@property (nonatomic) BOOL bIsFromSaveViewControllerBindQuery;
@property (nonatomic) BOOL bShouldRefreshSelect;
@property (retain, nonatomic) WCPayLQTMoneyControlLogic *lqtMoneyControlLogic;
@property (nonatomic) BOOL bIsChargeBalanceSucc;
@property (weak, nonatomic) id<WCPayBalanceSaveMoneyControlLogicDelegate> logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)pause;
- (void)stopLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (BOOL)gotoViewController:(id)a0;
- (void)onErrorAlertViewDismiss:(id)a0;
- (void)OnWCPayBaseRequestNoKnownError:(id)a0 TenPayCmdType:(unsigned int)a1;
- (void)OnResetPasswordFinish:(id)a0;
- (void)WCPaySaveViewControllerCancel:(BOOL)a0;
- (void)WCPaySaveViewControllerNext:(id)a0;
- (void)WCPaySaveViewControllerClickLQTEntryViewWithAmount:(id)a0 selectCardInfo:(id)a1;
- (BOOL)WCPaySaveIsCurrentLogicTop;
- (void)WCPaySaveViewControllerBackFromPop;
- (void)OnGetBalanceSaveRequest:(id)a0 Error:(id)a1 retryPayInfo:(id)a2;
- (void)OnGetLocalPayCardList:(id)a0 UsrVerifiedInfo:(id)a1 SwicthInfo:(id)a2 BalanceInfo:(id)a3 NoticeInfo:(id)a4 loanEntryInfo:(id)a5 LqtInfo:(id)a6;
- (void)OnGetBindQueryInfo:(id)a0 Error:(id)a1;
- (void)startPayMoneyLogicWithReqKey:(id)a0 retryPayInfo:(id)a1 selectedCardInfo:(id)a2;
- (void)onLQTMoneyControlLogicStop:(BOOL)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)webViewReturn:(id)a0;
- (void)delayActiveViewControllerTextField;
- (void)ActiveSaveViewControllerTextField:(BOOL)a0;
- (void)startKindaSaveBalance:(unsigned long long)a0;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
