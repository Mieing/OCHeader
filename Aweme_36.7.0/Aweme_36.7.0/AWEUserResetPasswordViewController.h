@class AWEUserResetPasswordViewModel, AWEUserLoginErrorInfoLabel, UIView;

@interface AWEUserResetPasswordViewController : AWEUserContainerBaseViewController

@property (retain, nonatomic) AWEUserResetPasswordViewModel *viewModel;
@property (retain, nonatomic) UIView *passwordInputView;
@property (retain, nonatomic) UIView *passwordCheckInput;
@property (retain, nonatomic) UIView *button;
@property (retain, nonatomic) AWEUserLoginErrorInfoLabel *errorLabel;

- (void)skipAction;
- (void)viewControllerBindingUI;
- (void)cursorFocusWhenAppear;
- (void)addErrorLabel:(id)a0;
- (id)initWithTicketModel:(id)a0 sendScene:(long long)a1;
- (id)initWithFinish:(id /* block */)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)hideError;

@end
