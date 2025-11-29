@class NSTimer, NSString, DYASecurityTicketModel, UIButton, AWEAccountDeleteButton, UITextField, AWELoginButton, UILabel;

@interface DYSMSCodeVerifyBlackViewController : UIViewController <UITextFieldDelegate, AWEAccountDeleteButtonDelegate>

@property (retain, nonatomic) AWELoginButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UITextField *inputField;
@property (retain, nonatomic) AWEAccountDeleteButton *deleteButton;
@property (retain, nonatomic) UIButton *resendBtn;
@property (retain, nonatomic) UIButton *submitBtn;
@property (weak, nonatomic) NSTimer *timer;
@property (nonatomic) long long currentCountdown;
@property (copy, nonatomic) NSString *mobile;
@property (retain, nonatomic) DYASecurityTicketModel *model;
@property (copy, nonatomic) NSString *enterUrl;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserCodeVerifyCommonAdapterClass;

- (void)backAction:(id)a0;
- (void)deleteButtonDidClick;
- (void)startCountDown:(long long)a0;
- (void)editingChangedAction:(id)a0;
- (void)sendCodeAction:(id)a0;
- (void)submitAction:(id)a0;
- (void)setSubmitBtnState:(BOOL)a0;
- (id)aAWEUserCodeVerifyCommonAdapter;
- (id)initWithMobile:(id)a0 ticketModel:(id)a1;
- (void)updateCountdown;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
