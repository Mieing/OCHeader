@class CAGradientLayer, NSArray, NSString, UIColor, UILabel, UIView, UIFont;

@interface WCMarqueeLabel : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *textLabel1;
@property (retain, nonatomic) UILabel *textLabel2;
@property (nonatomic) BOOL isPendingRebuildAnimation;
@property (nonatomic) BOOL shouldStopAnimation;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double animationValue;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSArray *gradientColors;
@property (retain, nonatomic) NSArray *locations;
@property (nonatomic) BOOL needResetFromValueToDefault;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) BOOL needAnimating;
@property (nonatomic) unsigned int repeatCount;
@property (nonatomic) double spacing;
@property (nonatomic) double speed;
@property (nonatomic) double startMargin;
@property (nonatomic) double marqueeMaxWidth;
@property (nonatomic) double leftGradientWidth;
@property (nonatomic) double rightGradientWidth;
@property (nonatomic) BOOL showGradientLayerAnimation;
@property (nonatomic) BOOL disableAutoPlayAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)triggerStartAnimation;
- (void)didReceiveDidBecomeActiveNotification;
- (void)didReceiveDidEnterBackgroundNotification;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)rebuildAnimationIfNeeded:(BOOL)a0;
- (void)startAnimation;
- (void)p_startContainerViewAnimation:(unsigned int)a0;
- (void)stopAnimation;
- (void)startGradientShowAnimation;
- (void)startGradientHideAnimation;
- (BOOL)checkGradientLayerLogic;
- (void)internalStartGradientLayer:(id)a0 endColor:(id)a1 startLocation:(id)a2 endLocation:(id)a3;
- (id)animationFakeColors;
- (id)animationFakeLocations;
- (void)rebuildGradientLayer;
- (void)hideGradientLayer;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
