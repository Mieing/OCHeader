@class NSString, AWEUserLoginErrorInfoLabel, UIView, AWEUserLoginSMSViewModel, YYLabel;

@interface AWEUserLoginHalfScreenSMSStep1ViewController : AWEUserLoginBaseViewController <AWEUserLoginHalfScreenTransitionContextProvider>

@property (retain, nonatomic) AWEUserLoginSMSViewModel *viewModel;
@property (retain, nonatomic) UIView *whiteBackView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *phoneNumberInputView;
@property (retain, nonatomic) AWEUserLoginErrorInfoLabel *errorLabel;
@property (retain, nonatomic) YYLabel *passwordLoginButton;
@property (retain, nonatomic) UIView *bottomUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserLoginThemeAdapterClass;

- (id)pageBtm;
- (void)createContainerView;
- (id)aAWEUserLoginThemeAdapter;
- (BOOL)isHalfScreenPage;
- (void)cursorFocusWhenAppear;
- (void)updateViewLayoutForKeyboardAndRotate:(struct CGSize { double x0; double x1; })a0;
- (BOOL)needUpdateViewLayoutForKeyboardAndRotate;
- (void)startBind;
- (void)passwordLoginAction:(id)a0;
- (void)addWhiteBackView;
- (void)addThemeBackgroundView;
- (void)addThemeHeaderView;
- (void)updateContainerViewLayoutKeyboardShow:(BOOL)a0;
- (void)addOtherComponentView;
- (void)updatePasswordLoginButtonLayout;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;
- (void)showError:(id)a0;
- (void)hideError;

@end
