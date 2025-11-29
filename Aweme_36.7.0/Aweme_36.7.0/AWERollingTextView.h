@class UIColor, NSString, UIFont, CAGradientLayer, UIView, NSMutableArray;

@interface AWERollingTextView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIView *transitionContainerView;
@property (retain, nonatomic) UIView *rollingContainerView;
@property (retain, nonatomic) NSMutableArray *rollingViews;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) BOOL showRollingText;
@property (nonatomic) double subviewWidth;
@property (copy, nonatomic) NSString *rollingText;
@property (retain, nonatomic) UIColor *rollingTextColor;
@property (retain, nonatomic) UIColor *rollingTextShadowColor;
@property (retain, nonatomic) UIFont *rollingTextFont;
@property (retain, nonatomic) CAGradientLayer *fadeOutLayer;
@property (nonatomic) double rollingDuration;
@property (copy, nonatomic) id /* block */ stopAnimationCompletion;
@property (readonly, nonatomic) long long numberOfRolls;
@property (nonatomic) double fadesOutOffset;
@property (nonatomic) double autoPauseDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_createRollingLabel;
- (void)p_startRollingText;
- (void)startAnimatingWithDuration:(double)a0 fromView:(id)a1;
- (void)configureWithRollingText:(id)a0 font:(id)a1 textColor:(id)a2 textShadow:(id)a3 labelSpace:(double)a4 numberOfRolls:(id /* block */)a5;
- (void)startAnimatingWithSpeed:(double)a0 fromView:(id)a1;
- (void)stopAnimatingWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)pauseAnimating;
- (void)resumeAnimating;

@end
