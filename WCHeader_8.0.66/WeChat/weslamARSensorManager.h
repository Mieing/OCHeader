@class NSOperationQueue, CMMotionManager;

@interface weslamARSensorManager : NSObject

@property (retain, nonatomic) CMMotionManager *motionManager;
@property (retain, nonatomic) NSOperationQueue *motionUpdateQueue;
@property (retain, nonatomic) NSOperationQueue *gyroUpdateQueue;
@property (retain, nonatomic) NSOperationQueue *accUpdateQueue;
@property (nonatomic) BOOL isStarted;
@property (copy, nonatomic) id /* block */ motionHandler;
@property (copy, nonatomic) id /* block */ gyroHandler;
@property (copy, nonatomic) id /* block */ accHandler;
@property (nonatomic) double deviceMotionUpdateInterval;
@property (nonatomic) double gyroUpdateInterval;

- (id)init;
- (void)start;
- (void)stop;
- (void).cxx_destruct;

@end
