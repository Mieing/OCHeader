@class NSMutableArray, AWEProfileEditFlowStepView, UIView, MASConstraint, AWEProfileEditFlowViewModel;

@interface AWEProfileEditFlowViewController : UIViewController

@property (retain, nonatomic) AWEProfileEditFlowViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backupContainerView;
@property (retain, nonatomic) MASConstraint *containerTopConstraint;
@property (retain, nonatomic) MASConstraint *containerBottomConstraint;
@property (nonatomic) BOOL showing;
@property (retain, nonatomic) AWEProfileEditFlowStepView *rootView;
@property (retain, nonatomic) NSMutableArray *views;
@property (nonatomic) double keyboardHeight;
@property (copy, nonatomic) id /* block */ onDismissed;

- (void)p_handleKeyboardShowNoti:(id)a0;
- (id)popToRootViewAnimated:(BOOL)a0;
- (void)pushView:(id)a0 animated:(BOOL)a1;
- (id)popViewAnimated:(BOOL)a0;
- (void)p_viewModelChangeStatus;
- (void)p_viewModelChangeStep;
- (void)p_addBackupContainerViewWithAbove:(BOOL)a0;
- (void)p_animateOldView:(id)a0 newView:(id)a1 pushing:(BOOL)a2 completion:(id /* block */)a3;
- (id)p_createContainerView;
- (void)p_updateCurrentStep;
- (void)p_setShowing:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithViewModel:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)topView;

@end
