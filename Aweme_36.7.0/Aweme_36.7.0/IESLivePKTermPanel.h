@class UIButton, UISwitch, UIView;
@protocol IESHYContainerProtocol;

@interface IESLivePKTermPanel : IESLiveRevenueInteractPopupViewController

@property (nonatomic) long long entryType;
@property (copy, nonatomic) id /* block */ autoMatchBlock;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UISwitch *switchView;
@property (retain, nonatomic) UIButton *switchButton;
@property (retain, nonatomic) UIView *autoMatchView;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridView;

- (void)onSetupNavBar:(id)a0;
- (id)initWithDIContext:(id)a0 withEntryType:(long long)a1 autoMatchBlock:(id /* block */)a2;
- (void)showAutoMatchAgreeCell;
- (void)addButtonWithEntryType:(long long)a0;
- (void)showPKTermDetailWebView;
- (void)didClickedMatchButton;
- (void)addAutoMatchView;
- (void)updateAgreeStatus:(BOOL)a0;
- (void)hideMatchButtonWithCondition:(BOOL)a0;
- (BOOL)getSwitchStatus;
- (void)didClickedSwitch;
- (void).cxx_destruct;
- (void)showAlertView;
- (void)viewDidLoad;

@end
