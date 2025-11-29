@class WCPayAddPayCardLogic, NSString, WCPayLQTMoneyControlLogic, WCPayLQTDetailControlLogic, WCPayBalanceSaveMoneyControlLogic;

@interface WCPayBalanceDetailControlLogic : WCPayControlLogic <WCPayWalletUpdateExt, WCPayLQTDetailControlLogicDelegate, WCPayECardDetailControlLogicDelegate, WCPayLQTMoneyControlLogicDelegate, WCPayBalanceSaveMoneyControlLogicDelegate, MMUseCaseCallback, WCPayBalanceDetailViewControllerDelegate, WCBaseControlMgrExt> {
    WCPayAddPayCardLogic *m_oWCPayAddPayCardLogic;
}

@property (retain, nonatomic) WCPayLQTDetailControlLogic *lqtDetailControlLogic;
@property (retain, nonatomic) WCPayLQTMoneyControlLogic *lqtMoneyControlLogic;
@property (retain, nonatomic) WCPayBalanceSaveMoneyControlLogic *saveMoneyControlLogic;
@property (nonatomic) int m_eWCPayBalanceDetailControlLogicScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)startLogic;
- (void)startBalanceDetailLogic;
- (void)pause;
- (void)call:(id)a0;
- (void)BalanceDetailBack;
- (void)BalanceDetailSaveMoney;
- (void)BalanceDetailFetchMoney;
- (void)BalanceDetailRequeryBalance;
- (void)BalanceDetailBackOpenECardDetail:(id)a0;
- (void)BalanceDetailJumpToLQTDetail:(id)a0;
- (void)BalanceDetailJumpToLQTDetail:(id)a0 vcDelegate:(id)a1;
- (void)BalanceDetailJumpToLQTSave:(id)a0;
- (void)BalanceDetailJumpToLQTSave:(id)a0 entranceType:(int)a1 bindSerial:(id)a2 amount:(id)a3 vcDelegate:(id)a4;
- (void)doAddCard;
- (void)doAddCardForFetchMoney;
- (void)doFetchMoney;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)BackToRootView;
- (void)OnGetBindQueryInfo:(id)a0 Error:(id)a1;
- (void)OnRealnameVerifySuccessNotification:(id)a0;
- (void)onLQTDetailControlLogicStop;
- (void)eCardDeteailLogicDidUnbindCard:(id)a0;
- (void)onWCPayWalletUpdateDidCall;
- (void)onLQTMoneyControlLogicStop:(BOOL)a0;
- (void)onBalanceSaveMoneyControlLogicStop:(BOOL)a0;
- (void).cxx_destruct;

@end
