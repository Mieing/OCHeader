@class MMFinderLiveLotteryPacketDisplayLogic, LOTAnimationView, UIImageView, UIView, MMTimerLabel, NSDateComponentsFormatter;

@interface MMFinderLiveLittleLotteryPacketView : UIView

@property (retain, nonatomic) NSDateComponentsFormatter *accessibilityTimeFormatter;
@property (retain, nonatomic) UIView *staticBGView;
@property (retain, nonatomic) LOTAnimationView *pagPacketView;
@property (retain, nonatomic) MMTimerLabel *tipLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ didMoveToSuperviewBlock;
@property (nonatomic) double tipLabelHeightForStaticStyle;
@property (nonatomic) BOOL isStaticStyle;
@property (weak, nonatomic) MMFinderLiveLotteryPacketDisplayLogic *logic;
@property (nonatomic) unsigned int remainTime;
@property (copy, nonatomic) id /* block */ countDownCompleteCallback;
@property (copy, nonatomic) id /* block */ countDownRemainTimeCallback;
@property (nonatomic) long long currentState;
@property (nonatomic) unsigned int currentLotteryStatus;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutImageView;
- (void)layoutStaticBGView;
- (void)setAlpha:(double)a0;
- (void)layoutPagPacketView;
- (void)layoutTipLabel;
- (void)switchToStaticStyleAnimatedWithCompletion:(id /* block */)a0;
- (void)switchToNormalStyle;
- (void)startDisplayAnimated;
- (void)switchToBigAnimationStyleWithCompletion:(id /* block */)a0;
- (void)convertRemainTimeToHour:(unsigned int *)a0 minute:(unsigned int *)a1 second:(unsigned int *)a2;
- (void)startCountDown;
- (BOOL)isCountingDown;
- (void)stopCountDown;
- (void)stopDisplay;
- (void)reset;
- (void)setImage:(id)a0;
- (unsigned int)currentRemainTime;
- (void)didMoveToSuperview;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;

@end
