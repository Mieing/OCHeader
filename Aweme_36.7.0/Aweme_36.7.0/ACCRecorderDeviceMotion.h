@class NSOperationQueue, CMMotionManager;

@interface ACCRecorderDeviceMotion : NSObject

@property (retain, nonatomic) CMMotionManager *motionManager;
@property (nonatomic) long long deviceOrientation;
@property (retain, nonatomic) NSOperationQueue *motionQueue;
@property (nonatomic) double lastXYRotate;
@property (copy, nonatomic) id /* block */ updateBlock;

- (id)initWithMotionUpdateInterval:(double)a0;
- (double)motionUpdateInterval:(double)a0;
- (void)calculateOrientation:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
