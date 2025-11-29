@class UIView, DYASecurityTicketModel, NSTimer, DYLoginNextActionButton, NSString, UIButton, UITextField, UILabel;

@interface AWELarkLoginViewController : UIViewController

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UITextField *codeInputView;
@property (nonatomic) long long curCountDown;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) DYLoginNextActionButton *loginButton;
@property (retain, nonatomic) UILabel *codeLabel;
@property (retain, nonatomic) UITextField *codeTextField;
@property (retain, nonatomic) UIButton *codeButton;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) BOOL isSendingCode;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) DYASecurityTicketModel *model;
@property (retain, nonatomic) NSString *mobilePhone;

- (void)setCountDownAndTimer:(long long)a0;
- (void)countDownAction:(id)a0;
- (void)loginAction:(id)a0;
- (void)setLoginButtonEnable:(BOOL)a0;
- (void)codeButtonAction;
- (void)clearAction:(id)a0;
- (void).cxx_destruct;
- (void)closeAction;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)textFieldDidChange:(id)a0;
- (void)extracted;

@end
