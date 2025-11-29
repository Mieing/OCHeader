@class YYLabel, AWEUserLoginPasswordViewModel, AWEUserLoginErrorInfoLabel, UIView, UIButton;

@interface AWEUserLoginFullScreenPasswordViewController : AWEUserLoginBaseViewController

@property (retain, nonatomic) AWEUserLoginPasswordViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *phoneInputView;
@property (retain, nonatomic) UIView *passwordInputView;
@property (retain, nonatomic) AWEUserLoginErrorInfoLabel *errorLabel;
@property (retain, nonatomic) UIButton *forgetPasswordBtn;
@property (retain, nonatomic) YYLabel *smsLoginLabelStyleButton;

- (id)pageBtm;
- (void)cursorFocusWhenAppear;
- (void)addErrorLabel:(id)a0;
- (void)updateViewLayoutForKeyboardAndRotate:(struct CGSize { double x0; double x1; })a0;
- (BOOL)needUpdateViewLayoutForKeyboardAndRotate;
- (void)setupBgViewIfNeed;
- (void)setupLoginComponentView;
- (void)startBind;
- (void)forgetPasswordClicked;
- (id)buttonWithText:(id)a0 font:(id)a1 color:(id)a2;
- (void)smsLoginAction;
- (void)updateBottomViewLayoutViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateForgetPasswordButtonLayout;
- (id)initWithPhoneNumberContext:(id)a0;
- (void)setupContainerView;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;
- (void)hideError;
- (void)setupNavigationBar;

@end
