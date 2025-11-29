@class NSTimer, NSString, UIView, UITextView, UIButton, CAGradientLayer, NSMutableAttributedString, UILabel, UIColor;

@interface AWEMediumRewardAlertView : UIView <UITextViewDelegate>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *messageTextView;
@property (retain, nonatomic) UIView *bottomBlurView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIButton *leftBtn;
@property (retain, nonatomic) UIButton *rightBtn;
@property (retain, nonatomic) UIView *horizontalLine;
@property (retain, nonatomic) UIView *verticalLine;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *leftTitle;
@property (copy, nonatomic) NSString *rightTitle;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ leftCompletion;
@property (copy, nonatomic) id /* block */ rightCompletion;
@property (retain, nonatomic) UIColor *leftTextColor;
@property (retain, nonatomic) UIColor *rightTextColor;
@property (retain, nonatomic) NSMutableAttributedString *attributedMessage;
@property (retain, nonatomic) UIColor *linkColor;
@property (copy, nonatomic) NSString *linkString;
@property (copy, nonatomic) NSString *linkUrlPrefix;
@property (copy, nonatomic) id /* block */ linkCompletion;
@property (nonatomic) long long textViewAlignment;
@property (nonatomic) double shouldShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rightBtnClick;
- (void)setupUIWithTitle:(id)a0 message:(id)a1;
- (void)leftBtnClick;
- (void)configBtnWithLeftBtnY:(double)a0 containerW:(double)a1;
- (void)startTimeIfNeed;
- (void)refreshButtonWithTime:(double)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 leftButtonTitle:(id)a2 rightButtonTitle:(id)a3 leftCompletion:(id /* block */)a4 rightCompletion:(id /* block */)a5;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)layoutSubviews;
- (void)dealloc;
- (void)show;

@end
