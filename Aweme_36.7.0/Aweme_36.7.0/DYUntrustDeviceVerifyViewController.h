@class DYPhoneNumberModel, DYLoginNextActionButton, NSTimer, UILabel, DYVerificationCodeInputView, AWELoginButton;

@interface DYUntrustDeviceVerifyViewController : UIViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *errorTipLabel;
@property (retain, nonatomic) DYVerificationCodeInputView *codeInputView;
@property (retain, nonatomic) DYLoginNextActionButton *nextButton;
@property (retain, nonatomic) AWELoginButton *voiceButton;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long curCountDown;
@property (retain, nonatomic) DYPhoneNumberModel *phoneNumber;

+ (id)instanceWithPhoneNumber:(id)a0;

- (void)backAction:(id)a0;
- (void)countDownAction:(id)a0;
- (void)nextAction:(id)a0;
- (void)setCountDownAndTimer:(long long)a0 max:(long long)a1;
- (void)sendSMSCodeAction:(id)a0;
- (void)sendVoiceCodeAction:(id)a0;
- (void)sendVoiceCode:(BOOL)a0;
- (void)sendSMSCode;
- (void)showVoiceButton:(BOOL)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)showError:(id)a0;

@end
