@class NSValue, IESLiveDFAnimationHandler, IESLIveDFSpringAnimationContext;

@interface IESLiveDFSpringAnimation : IESLiveDFPropertyAnimation {
    double timingControlPoints[4];
}

@property (retain, nonatomic) IESLiveDFAnimationHandler *animationHandler;
@property (retain, nonatomic) IESLIveDFSpringAnimationContext *realContext;
@property (nonatomic) long long propertyType;
@property (retain, nonatomic) NSValue *controlPoint1;
@property (retain, nonatomic) NSValue *controlPoint2;
@property (nonatomic) BOOL bounce;
@property (nonatomic) double damping;
@property (nonatomic) double velocity;

+ (id)animationWithPropertyType:(long long)a0;

- (void)updateTime:(double)a0;
- (id)initWithPropertyType:(long long)a0;
- (void)notificationStopWithFinished:(BOOL)a0;
- (double)getSpringAnimation:(id)a0 springOffset:(double)a1;
- (void)checkMaxDampingVelocity;
- (void)loadTimingFunction;
- (void).cxx_destruct;
- (void)prepare;
- (id)context;
- (BOOL)isCompatible;

@end
