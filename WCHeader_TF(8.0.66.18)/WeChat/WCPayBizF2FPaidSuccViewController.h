@class NSString, WCPayTransferMoneyPaidSuccessViewV2;
@protocol WCPayBizF2FPaidSuccViewControllerDelegate;

@interface WCPayBizF2FPaidSuccViewController : WCPayBaseViewController <WCPayTransferMoneyPaidSuccessViewV2Delegate>

@property (weak, nonatomic) id<WCPayBizF2FPaidSuccViewControllerDelegate> delegate;
@property (retain, nonatomic) WCPayTransferMoneyPaidSuccessViewV2 *m_layoutV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateView;
- (void)refreshActivityContent;
- (void)refreshViewWithData:(id)a0;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickDone;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickLotteryBtn:(id)a0;
- (void)onWCPayTransferMoneyPaidSuccessViewV2StartDrawLottery:(unsigned int)a0;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ReturnWithoutDrawLottery;
- (void).cxx_destruct;

@end
