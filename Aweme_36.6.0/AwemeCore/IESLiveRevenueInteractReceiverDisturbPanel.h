@class HTSLiveUser, IESLiveRevenueInteractReceiverDisturbViewModel, UIView, UIButton;
@protocol IESLiveRevenueInteractProvider;

@interface IESLiveRevenueInteractReceiverDisturbPanel : IESLiveRevenueInteractPopupViewController

@property (retain, nonatomic) HTSLiveUser *oppositeAnchor;
@property (retain, nonatomic) IESLiveRevenueInteractReceiverDisturbViewModel *viewModel;
@property (weak, nonatomic) id<IESLiveRevenueInteractProvider> provider;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *autoRejectButton;
@property (retain, nonatomic) UIButton *temporaryRejectButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long clickedButtonType;

- (void)didClickButton:(id)a0;
- (void)bindAction;
- (void)onSetupNavBar:(id)a0;
- (id)initWithDIContext:(id)a0 oppositeUser:(id)a1 scene:(unsigned long long)a2 provider:(id)a3;
- (void)addFlexActivityParamsIfNeed:(id)a0;
- (void)trackSettingPanelClick:(unsigned long long)a0;
- (void)dissMissDisturbPanel;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupViews;

@end
