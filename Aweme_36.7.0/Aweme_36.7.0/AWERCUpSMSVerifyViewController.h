@class NSString, DYASecurityTicketModel, AWEUITextLoadingView, AWELoginButton, UILabel, UIButton;

@interface AWERCUpSMSVerifyViewController : AWERCBaseVerifyViewController

@property (retain, nonatomic) AWELoginButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *firstTipNameLabel;
@property (retain, nonatomic) UILabel *firstTipValueLabel;
@property (retain, nonatomic) UILabel *secondTipNameLabel;
@property (retain, nonatomic) UIButton *secondTipValueLabel;
@property (retain, nonatomic) UIButton *submitBtn;
@property (retain, nonatomic) UIButton *editSMSBtn;
@property (retain, nonatomic) UIButton *faqBtn;
@property (retain, nonatomic) UILabel *tipLabel;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) DYASecurityTicketModel *verifyTicket;
@property (nonatomic) unsigned long long countdown;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (nonatomic) unsigned long long clickMsgDoneCount;
@property (nonatomic) double lastClickMsgDoneTime;

- (void)countDown:(id)a0;
- (void)backAction:(id)a0;
- (void)submitAction:(id)a0;
- (void)updateSubmitButtonWithCountdown:(unsigned long long)a0;
- (BOOL)copyPhoneNumberToClipboard;
- (void)editSMSAction:(id)a0;
- (void)faqAction:(id)a0;
- (void)realSubmitActionWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

@end
