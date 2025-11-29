@class NSDictionary, NSString, CJPayButton, UIImageView, CJPayVerifyCodeTimerLabel, CJPaySMSInputView, UILabel;

@interface CJPayUnifyHalfSMSVerifyViewController : CJPayHalfPageBaseViewController <CJPaySMSInputViewDelegate>

@property (retain, nonatomic) CJPaySMSInputView *smsInputView;
@property (retain, nonatomic) CJPayVerifyCodeTimerLabel *timeView;
@property (retain, nonatomic) CJPayButton *helpBtn;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *mobileMask;
@property (copy, nonatomic) NSString *mobileType;
@property (copy, nonatomic) id /* block */ inputCompletionBlock;
@property (copy, nonatomic) id /* block */ trackerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupConstraints;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)didFinishInputSMS:(id)a0;
- (void)didDeleteLastSMS;
- (void)p_tapResendButton;
- (void)p_updateUIBySendSMSResult:(BOOL)a0 errorMsg:(id)a1;
- (void)p_goToHelpVC;
- (void)updateErrorLabelWithErrorText:(id)a0;
- (void)resetInput;
- (void)reSendMsg;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithParams:(id)a0;
- (void)stopLoading;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (double)containerHeight;
- (void)back;

@end
