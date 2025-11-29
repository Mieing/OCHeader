@class UIFont, CAGradientLayer, NSString, UIView;

@interface AWEHotMusicNameLoopView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *loopContainerView;
@property (retain, nonatomic) UIView *musicContainerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double containerViewWidth;
@property (nonatomic) double containerViewHeight;
@property (nonatomic) double subviewWidth;
@property (nonatomic) long long subviewCount;
@property (nonatomic) BOOL canLoopAnimation;
@property (retain, nonatomic) UIFont *musicLabelFont;
@property (copy, nonatomic) NSString *musicLoopString;

- (double)widthWithLabelString:(id)a0;
- (id)subviewItemWithLabelString:(id)a0;
- (void)configRollingAnimationWithLabelString:(id)a0 shouldTrack:(BOOL)a1 animation:(BOOL)a2;
- (void)configRollingAnimationWithLabelString:(id)a0 withWidth:(double)a1 shouldTrack:(BOOL)a2 animation:(BOOL)a3;
- (void)configRollingAnimationWithLabelString:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
