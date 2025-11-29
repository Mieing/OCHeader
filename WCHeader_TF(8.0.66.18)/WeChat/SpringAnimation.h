@interface SpringAnimation : NSObject

@property (nonatomic) double zeta;
@property (nonatomic) double omega0;
@property (nonatomic) double omega1;
@property (nonatomic) double v0;
@property (readonly, nonatomic) double stiffness;
@property (readonly, nonatomic) double damping;
@property (readonly, nonatomic) double mass;
@property (readonly, nonatomic) double initialVelocity;
@property (nonatomic) double fromValue;
@property (nonatomic) double toValue;

- (id)initWithStiffness:(double)a0 damping:(double)a1 mass:(double)a2 initialVelocity:(double)a3 fromValue:(double)a4 toValue:(double)a5;
- (double)curveFunction:(double)a0;

@end
