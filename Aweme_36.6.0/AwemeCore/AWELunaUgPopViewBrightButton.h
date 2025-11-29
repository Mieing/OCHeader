@class UIColor, NSString, UIImageView, CABasicAnimation;

@interface AWELunaUgPopViewBrightButton : UIButton <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *lightImageView;
@property (retain, nonatomic) CABasicAnimation *animation;
@property (nonatomic) double interval;
@property (nonatomic) double animationDuration;
@property (nonatomic) double animationDelayTime;
@property (nonatomic) long long repeatTimes;
@property (nonatomic) BOOL isBrightHighlight;
@property (retain, nonatomic) UIColor *normalBackgroundColor;
@property (retain, nonatomic) UIColor *brightBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithDelayTime:(double)a0 animationDuration:(double)a1 interval:(double)a2 repeatTimes:(long long)a3 isBrightHighlight:(BOOL)a4;
- (BOOL)p_canShowAnimation;
- (BOOL)p_needChangeBackgroundColorWhileBright;
- (void)p_startAnimation;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)stopAnimation;
- (void)layoutSubviews;
- (void)updateUI;

@end
