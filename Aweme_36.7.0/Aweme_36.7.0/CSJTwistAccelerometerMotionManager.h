@class CMMotionManager;

@interface CSJTwistAccelerometerMotionManager : NSObject {
    CMMotionManager *_motionManager;
}

- (BOOL)_checkIfFulfillWithBaseValue:(double)a0 thetaValue:(double)a1 threshold:(double)a2;
- (void)stopTwistUpdates;
- (BOOL)twistAvailable;
- (BOOL)startTwistWithThreshold:(long long)a0 repeat:(BOOL)a1 updatesWithHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
