@class CJPayStyleErrorLabel, UIView, CJPayTimer, MASConstraint, CJPayVerifyCodeTimerLabel, CJPaySMSInputView, CJPayLabel;
@protocol CJPaySMSInputViewDelegate;

@interface CJPayUnifyPreVerifySMSView : UIView

@property (retain, nonatomic) CJPaySMSInputView *smsInputView;
@property (retain, nonatomic) CJPayVerifyCodeTimerLabel *timeView;
@property (retain, nonatomic) CJPayLabel *titleLabel;
@property (retain, nonatomic) CJPayStyleErrorLabel *errorLabel;
@property (retain, nonatomic) UIView *bottomButtonView;
@property (weak, nonatomic) CJPayTimer *externTimer;
@property (weak, nonatomic) id<CJPaySMSInputViewDelegate> delegate;
@property (retain, nonatomic) MASConstraint *timeViewBottomConstraint;
@property (nonatomic) double maxKeyboardHeight;
@property (copy, nonatomic) id /* block */ tapResendBtnBlock;
@property (copy, nonatomic) id /* block */ sendSMSTimeRunOutBlock;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (copy, nonatomic) id /* block */ btmTrackerBlock;

- (void)updateTitleText:(id)a0;
- (void)updateErrorText:(id)a0;
- (void)p_tapResendButton;
- (void)p_keyboardShow:(id)a0;
- (void)p_setupUI;
- (void)clearInput;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)didMoveToWindow;

@end
