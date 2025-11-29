@class UIColor, NSArray, CADisplayLink, CAShapeLayer;

@interface IESLiveAvatarRotatingCircleView : UIView

@property (nonatomic) double angle;
@property (nonatomic) double radian;
@property (nonatomic) double arcPeriod;
@property (nonatomic) double realArcPeriod;
@property (nonatomic) double circlePeriod;
@property (retain, nonatomic) CAShapeLayer *dashCircle;
@property (retain, nonatomic) CAShapeLayer *solidArc;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) double timeOffsetCircle;
@property (nonatomic) double timeOffsetArc;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (retain, nonatomic) UIColor *circleColor;
@property (copy, nonatomic) NSArray *dashPattern;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 angle:(double)a1 arcPeriod:(double)a2 circlePeriod:(double)a3;
- (double)radTime:(double)a0;
- (void)startOrStop:(BOOL)a0;
- (id)arcPath;
- (id)circlePath;
- (id)arcWithStartAngle:(double)a0 endAngle:(double)a1;
- (BOOL)isSamePointWithFirst:(double)a0 second:(double)a1;
- (void)handleDisplayLink:(id)a0;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (double)normalize:(double)a0;

@end
