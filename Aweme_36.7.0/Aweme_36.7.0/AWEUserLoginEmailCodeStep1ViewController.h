@class AWEUserLoginErrorInfoLabel, AWEUserLoginEmailCodeViewModel, UIView, YYLabel;

@interface AWEUserLoginEmailCodeStep1ViewController : AWEUserLoginBaseViewController

@property (retain, nonatomic) AWEUserLoginEmailCodeViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEUserLoginErrorInfoLabel *errorLabel;
@property (retain, nonatomic) UIView *emailAccountView;
@property (retain, nonatomic) YYLabel *passwordLoginButton;

- (id)pageBtm;
- (void)cursorFocusWhenAppear;
- (void)handleKeyboardWillChange:(id)a0;
- (void)addErrorLabel:(id)a0;
- (void)setupBgViewIfNeed;
- (void)setupLoginComponentView;
- (void)startBind;
- (void)updateBottomViewLayoutKeyboardShow:(BOOL)a0;
- (void)passwordLoginAction:(id)a0;
- (void)setupContainerView;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;
- (void)hideError;
- (void)setupNavigationBar;

@end
