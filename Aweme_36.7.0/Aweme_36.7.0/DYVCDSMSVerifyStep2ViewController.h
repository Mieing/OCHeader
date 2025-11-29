@class DYVCDSMSVerifyStep2ViewModel, NSTimer, DYLoginNextActionButton, UILabel, DYVerificationCodeInputView;

@interface DYVCDSMSVerifyStep2ViewController : UIViewController

@property (retain, nonatomic) DYVCDSMSVerifyStep2ViewModel *viewModel;
@property (nonatomic) long long countDown;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) DYVerificationCodeInputView *codeInputView;
@property (retain, nonatomic) DYLoginNextActionButton *loginButton;
@property (copy, nonatomic) id /* block */ completion;

+ (id)instanceWithViewModel:(id)a0 completion:(id /* block */)a1;

- (void)countDownAction;
- (void)setCountDownAndTimer:(long long)a0;
- (void)loginAction;
- (void)sendCodeAction;
- (void).cxx_destruct;
- (void)closeAction;
- (void)viewDidLoad;

@end
