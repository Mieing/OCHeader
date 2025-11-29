@class YYLabel, AWEUserLoginEmailViewModel, AWEUserLoginErrorInfoLabel, UIView, UIButton;

@interface AWEUserLoginFullScreenEmailViewController : AWEUserLoginBaseViewController

@property (retain, nonatomic) AWEUserLoginEmailViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEUserLoginErrorInfoLabel *errorLabel;
@property (retain, nonatomic) UIButton *forgetPasswordBtn;
@property (retain, nonatomic) YYLabel *smsLoginLabelStyleButton;
@property (nonatomic) long long scene;

- (id)pageBtm;
- (void)handleKeyboardWillChange:(id)a0;
- (void)addErrorLabel:(id)a0;
- (void)setupBgViewIfNeed;
- (void)setupLoginComponentView;
- (id)initWithEmailAccount:(id)a0 scene:(long long)a1;
- (void)startBind;
- (void)forgetPasswordClicked;
- (void)updateViewLayoutWithKeyboardHeight:(double)a0;
- (id)buttonWithText:(id)a0 font:(id)a1 color:(id)a2;
- (void)smsLoginAction;
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
