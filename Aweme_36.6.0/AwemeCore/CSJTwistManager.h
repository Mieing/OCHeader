@class CSJTwistMotionManager, CSJTwistAccelerometerMotionManager;

@interface CSJTwistManager : NSObject

@property (retain, nonatomic) CSJTwistMotionManager *twistMotionManager;
@property (retain, nonatomic) CSJTwistAccelerometerMotionManager *accelerometerMotionManager;
@property (nonatomic) double rotationThreshold;
@property (nonatomic) double updateInterval;

- (void)p_startAccelerometerMotionManagerWithHandler:(id /* block */)a0 repeat:(BOOL)a1;
- (void)p_startMotionManagerWithHandler:(id /* block */)a0 methodType:(long long)a1 repeat:(BOOL)a2;
- (void)startTwistWithCalculationMethod:(unsigned long long)a0 rotationThreshold:(double)a1 updateInterval:(double)a2 repeat:(BOOL)a3 updatesWithHandler:(id /* block */)a4;
- (void)stopTwistObserver;
- (void).cxx_destruct;

@end
