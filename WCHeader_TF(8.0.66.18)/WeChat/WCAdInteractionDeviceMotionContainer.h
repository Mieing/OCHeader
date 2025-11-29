@class CADisplayLink, CMDeviceMotion;
@protocol WCAdInteractionDeviceMotionContainerDelegate;

@interface WCAdInteractionDeviceMotionContainer : NSObject

@property (nonatomic) unsigned long long monitorType;
@property (retain, nonatomic) CMDeviceMotion *oriMotion;
@property (retain, nonatomic) CADisplayLink *displayTimer;
@property (nonatomic) BOOL shouldResumeTimer;
@property (nonatomic) BOOL isTerminated;
@property (weak, nonatomic) id<WCAdInteractionDeviceMotionContainerDelegate> delegate;

- (id)initWithMonitorType:(unsigned long long)a0;
- (void)dealloc;
- (void)addNotificationObservers;
- (void)onViewWillResignActive:(id)a0;
- (void)onViewDidBecomeActive:(id)a0;
- (void)activateContainer;
- (void)suspendContainer;
- (void)terminateContainer;
- (BOOL)isContainerActive;
- (BOOL)isContainerTerminated;
- (BOOL)isContainerRunning;
- (void)resetContainer;
- (void)activateDeviceMotion;
- (void)deactivateDeviceMotion;
- (void)activateTimer;
- (void)deactivateTimer;
- (void)timerUpdateOrientation:(id)a0;
- (void)updateOrientation;
- (void)updateOrientationWithCurMotion:(id)a0 oriMotion:(id)a1;
- (double)fetchAngleInDegreesFromOriAngle:(float)a0 oriAxis:(union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3]; })a1 orientationType:(unsigned long long)a2;
- (void).cxx_destruct;

@end
