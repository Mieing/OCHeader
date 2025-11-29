@class IESLiveButton, IESLiveCustomButton, IESLiveMultiLinkerBattleModeViewModel, UILabel, UIView, IESLiveInteractAnchorLinkersView;
@protocol IESLiveCompoundSubscription, IESLiveMultiLinkerProvider;

@interface IESLiveMultiLinkerBattleModeViewController : IESLiveRevenueInteractPopupViewController

@property (retain, nonatomic) IESLiveButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *modeSwitchBg;
@property (retain, nonatomic) UIView *currentModeBg;
@property (retain, nonatomic) IESLiveButton *personalModeButton;
@property (retain, nonatomic) IESLiveButton *teamModeButton;
@property (retain, nonatomic) IESLiveInteractAnchorLinkersView *linkersView;
@property (retain, nonatomic) IESLiveCustomButton *battleStartButton;
@property (nonatomic) unsigned long long panelType;
@property (retain, nonatomic) IESLiveMultiLinkerBattleModeViewModel *viewModel;
@property (weak, nonatomic) id<IESLiveMultiLinkerProvider> mLinkerProvider;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) BOOL canSwitchPKMode;
@property (nonatomic) BOOL isNetworkProcessing;

- (void)onBackButtonClicked;
- (void)onSetupNavBar:(id)a0;
- (id)initWithDIContext:(id)a0 panelType:(unsigned long long)a1 battleConfig:(id)a2 battleConfigStr:(id)a3 fromSource:(unsigned long long)a4;
- (void)doModeChangeAnimation:(unsigned long long)a0;
- (void)updateLinkerViewFrame;
- (void)onModeChangeButtonClicked:(unsigned long long)a0;
- (void)onPersonalModeButtonClicked;
- (void)onTeamModeButtonClicked;
- (void)onBattleStartButtonClicked;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setupSubviews;
- (void)setupData;

@end
