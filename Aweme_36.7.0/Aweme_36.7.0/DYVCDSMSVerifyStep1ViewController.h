@class DYLoginNextActionButton, DYVCDSMSVerifyStep1ViewModel, UILabel, DYPhoneNumberInputView;

@interface DYVCDSMSVerifyStep1ViewController : UIViewController

@property (retain, nonatomic) DYVCDSMSVerifyStep1ViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) DYPhoneNumberInputView *phoneNumberInputView;
@property (retain, nonatomic) DYLoginNextActionButton *loginButton;
@property (copy, nonatomic) id /* block */ completion;

+ (id)instanceWithViewModel:(id)a0 completion:(id /* block */)a1;

- (void)loginAction;
- (void).cxx_destruct;
- (void)closeAction;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

@end
