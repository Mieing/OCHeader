@class NSString, NSOperationQueue, CMMotionManager, NSMutableArray;

@interface TSMotionTracker : NSObject <TSMotionEventTracker>

@property (retain, nonatomic) NSOperationQueue *workQueue;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (retain, nonatomic) NSMutableArray *accelerationItems;
@property (retain, nonatomic) NSMutableArray *gyroItems;
@property (retain, nonatomic) NSMutableArray *motionItems;
@property (nonatomic) double timeBeganTracking;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (nonatomic) unsigned long long numberOfMotionsKept;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preflightTrack;
+ (void)postflightTrack;

- (id)initWithInterval:(double)a0 trackEventHandler:(id /* block */)a1;
- (void)dealloc;
- (BOOL)startAccelerationMonitoringWithEventHandler:(id /* block */)a0;
- (void)stopAccelerationMonitoring;
- (BOOL)startGyroMonitoringWithEventHandler:(id /* block */)a0;
- (void)stopGyroMonitoring;
- (BOOL)startMotionMonitoringWithEventHandler:(id /* block */)a0;
- (void)stopMotionMonitoring;
- (void).cxx_destruct;

@end
