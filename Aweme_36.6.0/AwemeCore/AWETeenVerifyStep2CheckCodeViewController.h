@class AWETeenVerificationCodeInputView, NSString, NSTimer, DUXContentSheet, UILabel, UIView, AWETeenNextActionButton;

@interface AWETeenVerifyStep2CheckCodeViewController : AWETeenVerifyBaseViewController <DUXSheetDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) AWETeenVerificationCodeInputView *codeInputGridView;
@property (retain, nonatomic) AWETeenNextActionButton *nextButton;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) UILabel *voiceLabel;
@property (retain, nonatomic) UILabel *errorTipLabel;
@property (retain, nonatomic) UILabel *resendLabel;
@property (retain, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long curCountDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)didNextBtnClicked;
- (void)handleCheckError:(id)a0;
- (void)setCountDownAndTimer:(long long)a0;
- (void)sendVoiceCodePanelCancelBtnClick;
- (void)sendVoiceCodePanelSendBtnClick;
- (void)countDownAction:(id)a0;
- (void)didVoiceBtnClicked;
- (void)reSendBtnClicked;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
