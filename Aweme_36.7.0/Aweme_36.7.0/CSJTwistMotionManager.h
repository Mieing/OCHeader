@class CMMotionManager;

@interface CSJTwistMotionManager : NSObject

@property (retain, nonatomic) CMMotionManager *motionManager;
@property (nonatomic) long long methodType;
@property (nonatomic) double updateInterval;
@property (nonatomic) double angularSensitivity;
@property (nonatomic) double accelerationSensitivity;
@property (nonatomic) double resetWhenOverflow;
@property (nonatomic) double deltaAngleX;
@property (nonatomic) double deltaAngleY;
@property (nonatomic) double deltaAngleZ;

- (BOOL)motionManagerAvailable;
- (BOOL)startObserverWithThreshold:(long long)a0 methodType:(long long)a1 updateInterval:(double)a2 repeat:(BOOL)a3 updatesWithHandler:(id /* block */)a4;
- (void)p_gyroMethodWithThreshold:(long long)a0 repeat:(BOOL)a1 handler:(id /* block */)a2;
- (void)p_lanJunMethodWithThreshold:(long long)a0 repeat:(BOOL)a1 handler:(id /* block */)a2;
- (void)p_douYinMethodWithThreshold:(long long)a0 repeat:(BOOL)a1 handler:(id /* block */)a2;
- (BOOL)p_isAchieveAngleWithAngleX:(double)a0 angleY:(double)a1 angleZ:(double)a2 threshold:(double)a3;
- (void).cxx_destruct;
- (id)init;
- (void)stopMotionUpdates;

@end
