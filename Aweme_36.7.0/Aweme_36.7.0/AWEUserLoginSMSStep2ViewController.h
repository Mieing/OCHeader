@class UIButton, AWEUserLoginSMSResendCodeView, AWEUserLoginErrorInfoLabel, UIView, AWEUserLoginSMSViewModel, UILabel;

@interface AWEUserLoginSMSStep2ViewController : AWEUserLoginBaseViewController

@property (retain, nonatomic) AWEUserLoginSMSViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEUserLoginErrorInfoLabel *errorLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (nonatomic) BOOL isFromMaskLogin;
@property (retain, nonatomic) UIButton *notReceiveVerificationBtn;
@property (retain, nonatomic) UIView *verificationCodeView;
@property (retain, nonatomic) AWEUserLoginSMSResendCodeView *resendCodeView;

- (id)pageBtm;
- (id)initWithPhoneModel:(id)a0 isFromMaskLogin:(BOOL)a1 verificationContext:(id)a2;
- (void)cursorFocusWhenAppear;
- (void)addErrorLabel:(id)a0;
- (void)updateViewLayoutForKeyboardAndRotate:(struct CGSize { double x0; double x1; })a0;
- (BOOL)needUpdateViewLayoutForKeyboardAndRotate;
- (void)setupBgViewIfNeed;
- (void)setupLoginComponentView;
- (void)startBind;
- (void)updateViewLayoutWithKeyboardHeight:(double)a0;
- (void)createReceiveVerificationButton;
- (void)resendCodeButtonClick:(id)a0;
- (void)notReceiveVerificationBtnClicked;
- (BOOL)enableLoginPanelRefactor;
- (id)initWithPhoneModel:(id)a0 isFromMaskLogin:(BOOL)a1;
- (void)setupContainerView;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;
- (void)hideError;
- (void)setupNavigationBar;

@end
