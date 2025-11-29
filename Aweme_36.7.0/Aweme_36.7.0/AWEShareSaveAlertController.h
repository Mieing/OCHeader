@class AWEShareSaveAlertViewModel, NSArray, AWEAlertPanelTransitionController, NSString, UILabel, UIView, UIButton;

@interface AWEShareSaveAlertController : UIViewController <AWEPanelTransitionWithBackground>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIButton *dismissButton;
@property (copy, nonatomic) NSArray *actionButtons;
@property (retain, nonatomic) AWEShareSaveAlertViewModel *viewModel;
@property (retain, nonatomic) AWEAlertPanelTransitionController *transitionController;
@property (nonatomic) BOOL isStayLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (BOOL)awe_shouldBypassPresentationHook;
- (id)initWithViewModel:(id)a0 stayLandscape:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (BOOL)shouldAutorotate;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)actionButtonTapped:(id)a0;
- (void)dismissButtonTapped:(id)a0;

@end
