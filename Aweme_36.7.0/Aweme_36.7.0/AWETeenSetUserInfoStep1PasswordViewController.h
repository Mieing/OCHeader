@class AWETeenVerificationCodeInputView, AWETeenNextActionButton;

@interface AWETeenSetUserInfoStep1PasswordViewController : AWETeenSetUserInfoBaseViewController

@property (retain, nonatomic) AWETeenVerificationCodeInputView *inputView;
@property (retain, nonatomic) AWETeenNextActionButton *nextButton;

- (id)showCodeString;
- (void)showConfirmAlert;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
