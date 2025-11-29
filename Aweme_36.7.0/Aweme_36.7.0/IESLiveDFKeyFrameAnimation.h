@class NSArray, IESLiveDFAnimationHandler, IESLIveDFKeyFrameAnimationContext;

@interface IESLiveDFKeyFrameAnimation : IESLiveDFAnimation {
    double timingControlPoints[4];
}

@property (retain, nonatomic) IESLiveDFAnimationHandler *animationHandler;
@property (retain, nonatomic) IESLIveDFKeyFrameAnimationContext *realContext;
@property (retain, nonatomic) NSArray *intervals;
@property (copy, nonatomic) NSArray *values;
@property (copy, nonatomic) NSArray *keyTimes;

+ (id)animationWithPropertyType:(long long)a0;

- (void)updateTime:(double)a0;
- (id)initWithPropertyType:(long long)a0;
- (void)loadTimingFunction;
- (void).cxx_destruct;
- (void)prepare;
- (id)context;

@end
