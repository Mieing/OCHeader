@class UIColor, CAShapeLayer, UIView, CALayer;

@interface MMLiveLikeButtonAnimationView : MMUIView

@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) UIColor *topColor;
@property (retain, nonatomic) UIColor *bottomColor;
@property (nonatomic) double progressWidth;
@property (nonatomic) double progress;
@property (retain, nonatomic) CAShapeLayer *bgProgressLayer;
@property (nonatomic) BOOL needUpdateBgProgress;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) CALayer *gradientLayer;

- (void)refreshProgress:(double)a0;
- (void)updateProgress:(double)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createBackgruondProgressView;
- (void)drawCycleProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configWithTopColor:(id)a0 bottomColor:(id)a1 progressWidth:(double)a2;
- (void).cxx_destruct;

@end
