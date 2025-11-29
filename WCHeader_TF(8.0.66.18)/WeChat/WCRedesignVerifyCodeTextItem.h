@class UIButton;

@interface WCRedesignVerifyCodeTextItem : WCRedesignTextItem

@property (retain, nonatomic) UIButton *verifyCodeButton;
@property (nonatomic) double maxCountDownButtonWidth;
@property (nonatomic) long long countDown;
@property (nonatomic) long long iCount;
@property (nonatomic) BOOL useShortWording;
@property (copy, nonatomic) id /* block */ tapVerifyCodeButtonHandler;
@property (copy, nonatomic) id /* block */ onSetNeedsLayout;

- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (void)config;
- (void)startCountDownTimer;
- (void)stopCountDownTimer;
- (void)updateVerifyCodeButton;
- (void)updateVerifyCodeButtonWithIsFirst:(BOOL)a0;
- (double)buttonWidthForCalLineBreak;
- (void).cxx_destruct;

@end
