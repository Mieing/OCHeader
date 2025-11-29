@class UIColor, NSString, UIFont, UIView, NSMutableArray;

@interface AWETitleRollingTextView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIView *transitionContainerView;
@property (retain, nonatomic) UIView *rollingContainerView;
@property (retain, nonatomic) NSMutableArray *rollingViews;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) BOOL showRollingText;
@property (nonatomic) double subviewWidth;
@property (copy, nonatomic) NSString *rollingText;
@property (retain, nonatomic) UIColor *rollingTextColor;
@property (retain, nonatomic) UIFont *rollingTextFont;
@property (nonatomic) double rollingDuration;
@property (copy, nonatomic) id /* block */ stopAnimationCompletion;
@property (nonatomic) BOOL rolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_createRollingLabel;
- (void)startAnimatingWithDuration:(double)a0 fromView:(id)a1;
- (void)stopAnimatingWithCompletion:(id /* block */)a0;
- (void)configureWithRollingText:(id)a0 font:(id)a1 textColor:(id)a2 labelSpace:(double)a3 numberOfRolls:(long long)a4;
- (void)p_startRollingTextWithDuration:(double)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)pauseAnimating;
- (void)resumeAnimating;

@end
