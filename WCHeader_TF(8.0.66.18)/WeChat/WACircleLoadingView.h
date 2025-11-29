@class CAShapeLayer;

@interface WACircleLoadingView : UIView

@property (retain, nonatomic) CAShapeLayer *backLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) CAShapeLayer *pointLayer;
@property (nonatomic) float backLineWidth;
@property (nonatomic) float progressWidth;
@property (nonatomic) BOOL animating;
@property (nonatomic) float progress;
@property (nonatomic) float circleDuration;
@property (nonatomic) float progressAnimationDuration;
@property (nonatomic) float pointSize;
@property (nonatomic) float pointBorderWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backLineWidth:(float)a1 progressWidth:(float)a2;
- (void)buildLayout;
- (void)startCircleAnimate;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
