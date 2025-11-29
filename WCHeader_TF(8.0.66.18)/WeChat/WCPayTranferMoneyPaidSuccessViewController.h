@class WCPaySelectVerifyTypeLogic, NSString, WCPayTransferMoneyPaidSuccessViewV2;
@protocol WCPayTranferMoneyPaidSuccessViewControllerDelegate;

@interface WCPayTranferMoneyPaidSuccessViewController : WCPayBaseViewController <WCPayTransferMoneyPaidSuccessViewV2Delegate, MMTipsViewControllerDelegate, WCBaseControlMgrExt> {
    BOOL m_bNeedBindCard;
    id<WCPayTranferMoneyPaidSuccessViewControllerDelegate> m_delegate;
}

@property (retain, nonatomic) WCPayTransferMoneyPaidSuccessViewV2 *m_layoutV2;
@property (retain, nonatomic) WCPaySelectVerifyTypeLogic *m_realNameLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (id)init;
- (void)setDelegate:(id)a0;
- (void)OnHistoryOrderDetailBack;
- (void)showSetPwdTipsView;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 withText:(id)a2 withTipsVC:(id)a3;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)ContinueOnHistoryOrderDetailBack;
- (void)initNavigationBar;
- (void)selectNeedBindCard:(id)a0;
- (void)layoutV2;
- (void)reloadTableView;
- (void)onSubscribeAppBtn:(id)a0;
- (void)refreshViewWithData:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickDone;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickLotteryBtn:(id)a0;
- (void)onWCPayTransferMoneyPaidSuccessViewV2StartDrawLottery:(unsigned int)a0;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ReturnWithoutDrawLottery;
- (void).cxx_destruct;

@end
