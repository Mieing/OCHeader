@class NSNumber, NSString, NSOperationQueue, CMMotionManager, CLLocationManager, CMPedometer;

@interface TencentLBSSensorManager : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) CMMotionManager *manager;
@property (retain, nonatomic) CLLocationManager *locmanager;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (nonatomic) BOOL isStart;
@property (nonatomic) unsigned long long maxSize;
@property (nonatomic) double motionTime;
@property (retain, nonatomic) CMPedometer *pedometer;
@property (retain, nonatomic) NSNumber *lastSteps;
@property (copy) id /* block */ headingBlock;
@property (nonatomic) BOOL hasMotionData;
@property (nonatomic) BOOL isMagUseful;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)setSensorUpdateInterval:(double)a0;
- (void)startUpdatingAccelerationWithBlock:(id /* block */)a0;
- (void)startUpdatingGryWithBlock:(id /* block */)a0;
- (void)startUpdatingMagnetometerWithBlock:(id /* block */)a0;
- (void)startUpdatingDeviceMotionWithBlock:(id /* block */)a0;
- (void)startPedometerSinceNowWithHandler:(id /* block */)a0;
- (void)startUpdatingHeadWithBlock:(id /* block */)a0;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)stopHeadingUpdate;
- (void)stopPedometer;
- (void)stopUpdatingAcceleration;
- (void)stopUpdatingGry;
- (void)stopUpdatingMagnetometer;
- (void)stopUpdatingDeviceMotion;
- (void).cxx_destruct;

@end
