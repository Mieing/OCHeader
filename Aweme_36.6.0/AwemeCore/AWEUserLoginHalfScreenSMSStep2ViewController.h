@class UIButton, AWEUserLoginSMSResendCodeView, NSString, AWEUserLoginErrorInfoLabel, UIView, AWEUserLoginSMSViewModel, UILabel;

@interface AWEUserLoginHalfScreenSMSStep2ViewController : AWEUserLoginBaseViewController <AWEUserLoginHalfScreenTransitionContextProvider>

@property (retain, nonatomic) AWEUserLoginSMSViewModel *viewModel;
@property (retain, nonatomic) UIView *whiteBackView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEUserLoginErrorInfoLabel *errorLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (nonatomic) BOOL isFromMaskLogin;
@property (retain, nonatomic) UIButton *notReceiveVerificationBtn;
@property (retain, nonatomic) UIView *verificationCodeView;
@property (retain, nonatomic) UIView *loginButton;
@property (retain, nonatomic) AWEUserLoginSMSResendCodeView *resendCodeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pageBtm;
- (id)initWithPhoneModel:(id)a0 isFromMaskLogin:(BOOL)a1 verificationContext:(id)a2;
- (BOOL)isHalfScreenPage;
- (void)cursorFocusWhenAppear;
- (void)updateViewLayoutForKeyboardAndRotate:(struct CGSize { double x0; double x1; })a0;
- (BOOL)needUpdateViewLayoutForKeyboardAndRotate;
- (void)setupLoginComponentView;
- (void)startBind;
- (void)addWhiteBackView;
- (void)addThemeBackgroundView;
- (void)addThemeHeaderView;
- (void)updateContainerViewLayoutKeyboardShow:(BOOL)a0;
- (void)createReceiveVerificationButton;
- (void)resendCodeButtonClick:(id)a0;
- (void)notReceiveVerificationBtnClicked;
- (void)updateLoginButtonLayout;
- (BOOL)enableLoginPanelRefactor;
- (id)initWithPhoneModel:(id)a0 isFromMaskLogin:(BOOL)a1;
- (void)setupContainerView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;
- (void)showError:(id)a0;
- (void)hideError;

@end
