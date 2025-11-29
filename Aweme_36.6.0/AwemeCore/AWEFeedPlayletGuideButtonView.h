@class UIBezierPath, DUXBaseButton, CAShapeLayer;

@interface AWEFeedPlayletGuideButtonView : UIView

@property (retain, nonatomic) DUXBaseButton *button;
@property (retain, nonatomic) UIBezierPath *bezierPath;
@property (retain, nonatomic) CAShapeLayer *buttonBorderLayer;
@property (nonatomic) BOOL animated;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic) double calculatedTextWidth;

- (void)updateUIForBorder;
- (void)updateUIForButton;
- (void)startAnimationWithDuration:(double)a0;
- (void)setProgressFrom:(double)a0 to:(double)a1 duration:(double)a2;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)layout;
- (id)init;
- (void)setupButton;
- (void)cancelAnimation;

@end
