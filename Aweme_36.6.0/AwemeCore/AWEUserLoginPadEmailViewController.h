@class AWEUserLoginEmailViewModel, AWEUserLoginErrorInfoLabel, UIView, UILabel;

@interface AWEUserLoginPadEmailViewController : AWEUserLoginBaseViewController

@property (retain, nonatomic) AWEUserLoginEmailViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEUserLoginErrorInfoLabel *errorLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;

- (id)pageBtm;
- (void)handleKeyboardWillChange:(id)a0;
- (void)addErrorLabel:(id)a0;
- (void)updateViewLayoutForKeyboardAndRotate:(struct CGSize { double x0; double x1; })a0;
- (void)setupBgViewIfNeed;
- (void)setupLoginComponentView;
- (void)startBind;
- (void)updateBottomUtilWithHighlyCompact:(BOOL)a0 isKeyboardShow:(BOOL)a1 viewSize:(struct CGSize { double x0; double x1; })a2;
- (void)setupContainerView;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;
- (void)hideError;
- (void)setupNavigationBar;

@end
