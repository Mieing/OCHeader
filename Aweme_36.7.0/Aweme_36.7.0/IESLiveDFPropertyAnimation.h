@class CAMediaTimingFunction, NSValue, IESLiveDFAnimationHandler, IESLIveDFPropertyAnimationContext;

@interface IESLiveDFPropertyAnimation : IESLiveDFAnimation {
    double timingControlPoints[4];
}

@property (retain, nonatomic) IESLiveDFAnimationHandler *animationHandler;
@property (retain, nonatomic) IESLIveDFPropertyAnimationContext *realContext;
@property (nonatomic) long long propertyType;
@property (retain, nonatomic) NSValue *controlPoint1;
@property (retain, nonatomic) NSValue *controlPoint2;
@property (retain, nonatomic) id fromValue;
@property (retain, nonatomic) id toValue;
@property (nonatomic) long long repeatCount;
@property (nonatomic) BOOL autoreverses;
@property (retain) CAMediaTimingFunction *timingFunction;

+ (id)positionAnimationWithPath:(struct CGPath { } *)a0;
+ (id)positionAnimationWithBezierControlPoint1:(struct CGPoint { double x0; double x1; })a0 controlPoint2:(struct CGPoint { double x0; double x1; })a1;
+ (id)animationWithPropertyType:(long long)a0;

- (void)updateTime:(double)a0;
- (id)initWithPropertyType:(long long)a0 bezierPath:(struct CGPath { } *)a1;
- (void)loadTimingFunction;
- (void).cxx_destruct;
- (void)prepare;
- (id)context;
- (BOOL)isCompatible;

@end
