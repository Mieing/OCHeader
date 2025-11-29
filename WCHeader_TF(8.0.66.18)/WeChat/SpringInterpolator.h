@interface SpringInterpolator : NSObject

@property (nonatomic) double value;
@property (nonatomic) double velocity;
@property (nonatomic) double target;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;

- (id)initWithValue:(double)a0 velocity:(double)a1 target:(double)a2 mass:(double)a3 stiffness:(double)a4 damping:(double)a5;
- (double)stepWithDeltaTime:(double)a0;
- (BOOL)isAtRest;

@end
