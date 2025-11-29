@class DYASecurityTicketModel, NSString, DYVerificationCodeInputView, DYLoginNextActionButton, NSTimer, NSDictionary, DYSMSCodeVerifyViewConfig, UILabel;

@interface DYSMSCodeVerifyViewController : UIViewController

@property (copy, nonatomic) id /* block */ finishBlock;
@property (retain, nonatomic) DYSMSCodeVerifyViewConfig *viewConfig;
@property (retain, nonatomic) DYASecurityTicketModel *ticketModel;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *errorTipLabel;
@property (retain, nonatomic) DYVerificationCodeInputView *codeInputView;
@property (retain, nonatomic) DYLoginNextActionButton *nextButton;
@property (copy, nonatomic) NSString *phoneNumber;
@property (weak, nonatomic) NSTimer *countDownTimer;
@property (nonatomic) long long curCountDown;

+ (id)instanceWithSharkTicket:(id)a0 mobile:(id)a1 finishBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3 viewConfig:(id)a4 trackParams:(id)a5;
+ (id)instanceWithSharkTicket:(id)a0 mobile:(id)a1 finishBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)backAction:(id)a0;
- (void)nextAction:(id)a0;
- (void)sendSMSCode:(id)a0;
- (void)countDownFired:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)handleError:(id)a0;
- (void)viewDidLoad;

@end
