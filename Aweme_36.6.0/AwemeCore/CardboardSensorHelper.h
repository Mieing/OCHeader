@class NSMutableSet, NSLock, CMMotionManager, CMAccelerometerData, NSOperationQueue, CMDeviceMotion;

@interface CardboardSensorHelper : NSObject {
    CMMotionManager *_motionManager;
    NSOperationQueue *_queue;
    NSMutableSet *_accelerometerCallbacks;
    NSMutableSet *_deviceMotionCallbacks;
    NSLock *_accelerometerLock;
    NSLock *_deviceMotionLock;
}

@property (retain) CMAccelerometerData *accelerometerData;
@property (retain) CMDeviceMotion *deviceMotion;
@property (readonly, nonatomic, getter=isAccelerometerAvailable) BOOL accelerometerAvailable;
@property (readonly, nonatomic, getter=isGyroAvailable) BOOL gyroAvailable;

+ (id)sharedSensorHelper;

- (void)invokeBlock:(id /* block */)a0 withLock:(id)a1;
- (void)start:(unsigned long long)a0 callback:(id /* block */)a1;
- (void)stop:(unsigned long long)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
