@class NSString, WCPayLQTPickerPanelView;
@protocol WCPayLQTAutoChargeSetttingViewControllerDelegate;

@interface WCPayLQTAutoChargeSetttingViewController : WCPayBaseViewController <WCPayLQTPickerPanelViewDelegate>

@property (weak, nonatomic) id<WCPayLQTAutoChargeSetttingViewControllerDelegate> delegate;
@property (retain, nonatomic) WCPayLQTPickerPanelView *pickerPanelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)navigationBarBackgroundColor;
- (void)refreshViewWithData:(id)a0;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)leftBtnClick;
- (void)setupContentView;
- (void)showOpenSuccToastIfNeed;
- (void)reloadTableView;
- (id)setupHeaderView;
- (void)makeSwicthCell:(id)a0;
- (void)makeChargeTimeCell:(id)a0;
- (void)onSwitchChange:(id)a0;
- (void)cancelClose;
- (void)confirmClose;
- (void)chargeTimeCellClick;
- (void)onPickerPanelViewDismiss;
- (void)onPickerPanelViewConfirmWithTimeSpan:(id)a0;
- (id)timeStringFromTimeSpan:(unsigned int)a0;
- (void).cxx_destruct;

@end
