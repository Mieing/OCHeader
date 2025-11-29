@class CJPayVerifyCodeTimerLabel, NSString, CJPayButton, UILabel, CJPaySMSInputView, CJPayStyleErrorLabel;
@protocol CJPayHalfScreenSMSVerificationViewInterface;

@interface CJPayHalfScreenSMSVerificationViewController : CJPayHalfPageBaseViewController <CJPaySMSInputViewDelegate>

@property (retain, nonatomic) CJPaySMSInputView *smsInputView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayButton *helpButton;
@property (retain, nonatomic) CJPayStyleErrorLabel *errorLabel;
@property (retain, nonatomic) CJPayVerifyCodeTimerLabel *countDownTimerView;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (nonatomic) BOOL textInputFinished;
@property (retain, nonatomic) id<CJPayHalfScreenSMSVerificationViewInterface> viewDelegate;
@property (nonatomic) unsigned long long codeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnimationType:(unsigned long long)a0;
- (void)verifySMS;
- (void)gotoNextStep;
- (void)tapResendButton;
- (void)didFinishInputSMS:(id)a0;
- (void)didDeleteLastSMS;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)showErrorMessage:(id)a0;
- (double)containerHeight;
- (void)back;

@end
