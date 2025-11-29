@interface MMLiveHapticsParameterCurveControlPoint : NSObject

@property (nonatomic) double timeSinceBeginOfCurve;
@property (nonatomic) double value;

+ (id)controlPointWithTimeSinceBeginOfCurve:(double)a0 value:(double)a1;

- (id)initWithTimeSinceBeginOfCurve:(double)a0 value:(double)a1;
- (id)coreHapticsParameterCurveControlPoint;

@end
