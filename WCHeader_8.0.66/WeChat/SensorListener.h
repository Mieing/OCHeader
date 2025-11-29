@class NSString, CMMotionManager;

@interface SensorListener : NSObject <IOrientationListener> {
    CMMotionManager *motionManager;
    NSString *lastOrientation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initMotionManager;
- (void)startOrientationListener:(id /* block */)a0;
- (void)getOrientation:(id /* block */)a0;
- (void)stopOrientationListener;
- (void).cxx_destruct;

@end
