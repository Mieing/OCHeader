@class DYLoginNextActionButton, DYVerificationCodeInputView, DYUserProtocolView, UIButton, NSDictionary, MASConstraint, DYPhoneNumberInputView, UILabel;
@protocol DYPhoneBindViewDelegate;

@interface DYPhoneBindView : UIView

@property (retain, nonatomic) DYVerificationCodeInputView *verificationCodeInputView;
@property (retain, nonatomic) DYLoginNextActionButton *bindButton;
@property (retain, nonatomic) UILabel *invalidLabel;
@property (retain, nonatomic) MASConstraint *protocolViewTopConstraint;
@property (weak, nonatomic) id<DYPhoneBindViewDelegate> delegate;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) DYPhoneNumberInputView *phoneNumberInputView;
@property (retain, nonatomic) UIButton *voiceButton;
@property (nonatomic) BOOL isSafeMobile;
@property (retain, nonatomic) DYUserProtocolView *protocolView;
@property (copy, nonatomic) NSDictionary *protocolConfigDictionary;

- (void)setRemainTime:(unsigned long long)a0;
- (void)stopLoaingWithError:(id)a0;
- (void)showErrorHint:(id)a0;
- (void)sendSMSCodeAction;
- (void)sendVoiceCode:(BOOL)a0;
- (void)bindAcion;
- (void)sendVoiceCodeAction;
- (void)updateNextButtonStatus;
- (void)updateVerificationButtonStatus;
- (void)hideVoiceCodeButton;
- (void)hideErrorHint;
- (void)showVoiceCodeButton;
- (void)enableSendCodeButton;
- (void)codeInputViewBecomeFirstResponder;
- (id)phoneNumber;
- (void).cxx_destruct;
- (void)startLoading;
- (id)code;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
