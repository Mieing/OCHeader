@class AWEUserLoginErrorInfoLabel, AWEUserLoginEmailCodeViewModel, UIView, AWEUserLoginInputView;

@interface AWEUserLoginEmailCodeStep2ViewController : AWEUserLoginBaseViewController

@property (retain, nonatomic) AWEUserLoginEmailCodeViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEUserLoginErrorInfoLabel *errorLabel;
@property (retain, nonatomic) AWEUserLoginInputView *verificationCodeView;

- (id)pageBtm;
- (void)cursorFocusWhenAppear;
- (void)addErrorLabel:(id)a0;
- (void)setupBgViewIfNeed;
- (void)setupLoginComponentView;
- (void)startBind;
- (id)verificationInputModel;
- (id)initWithEmailAccount:(id)a0;
- (void)setupContainerView;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)setupUI;
- (void)hideError;
- (void)setupNavigationBar;

@end
