@class NSObject, CMMotionManager, CMAttitude;
@protocol OS_dispatch_queue;

@interface LSLiveDeviceMotion : NSObject {
    void *operationQueueKey;
}

@property (retain, nonatomic) CMMotionManager *motionManager;
@property (retain, nonatomic) CMAttitude *attitude;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) long long motionDetectCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (nonatomic) BOOL disableOrienrationDetecttion;

+ (id)sharedInstance;

- (void)openARMode;
- (void)closeARMode;
- (void)calculateOrientation:(id)a0;
- (void)getQuaternion:(float *)a0 size:(unsigned long long)a1;
- (void)runAsync:(id /* block */)a0;
- (void)runSync:(id /* block */)a0;
- (void)startDetectDeviceMotion;
- (void)stopDetectDeviceMotion;
- (void).cxx_destruct;
- (id)init;

@end
