@class AWEUserLoginErrorInfoLabel, UIView, AWEUserLoginSMSViewModel, YYLabel;

@interface AWEUserLoginSMSStep1ViewController : AWEUserLoginBaseViewController

@property (retain, nonatomic) AWEUserLoginSMSViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *protocolView;
@property (retain, nonatomic) UIView *phoneNumberInputView;
@property (retain, nonatomic) AWEUserLoginErrorInfoLabel *errorLabel;
@property (retain, nonatomic) YYLabel *passwordLoginButton;
@property (nonatomic) BOOL hasShow;

+ (Class)aAWEUserLoginThemeAdapterClass;

- (id)pageBtm;
- (id)aAWEUserLoginThemeAdapter;
- (void)cursorFocusWhenAppear;
- (void)updateViewLayoutForKeyboardAndRotate:(struct CGSize { double x0; double x1; })a0;
- (BOOL)needUpdateViewLayoutForKeyboardAndRotate;
- (void)setupBgViewIfNeed;
- (void)setupLoginComponentView;
- (void)startBind;
- (void)passwordLoginAction:(id)a0;
- (void)updatePasswordLoginButtonLayout;
- (BOOL)canShowOverseaLayout;
- (BOOL)canActivateKeyboardEarlier;
- (void)updateBottomViewLayoutKeyboardShow:(BOOL)a0 viewSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateContainerViewForPad;
- (void)updateContainerViewForMobile;
- (void)setupContainerView;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;
- (void)showError:(id)a0;
- (void)hideError;
- (void)setupNavigationBar;

@end
