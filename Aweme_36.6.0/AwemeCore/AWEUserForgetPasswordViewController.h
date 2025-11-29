@class AWEUserLoginErrorInfoLabel, AWEUserForgetPasswordViewModel, UIView;

@interface AWEUserForgetPasswordViewController : AWEUserContainerBaseViewController

@property (retain, nonatomic) AWEUserForgetPasswordViewModel *viewModel;
@property (retain, nonatomic) UIView *verificationView;
@property (retain, nonatomic) AWEUserLoginErrorInfoLabel *errorLabel;
@property (retain, nonatomic) UIView *button;

- (void)viewControllerBindingUI;
- (void)cursorFocusWhenAppear;
- (id)initWithSendCodeModel:(id)a0;
- (void)addErrorLabel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)hideError;

@end
