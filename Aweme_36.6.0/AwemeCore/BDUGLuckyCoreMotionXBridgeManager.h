@class NSString, CMPedometer;

@interface BDUGLuckyCoreMotionXBridgeManager : NSObject

@property (retain, nonatomic) CMPedometer *pedometer;
@property (nonatomic) BOOL isAlertControllerShowing;
@property (copy, nonatomic) NSString *hostClassName;

+ (id)shareInstance;

- (void)applyStepPermissionWithCompletion:(id /* block */)a0;
- (id)__convertStatusToString;
- (void)registerStepListenerWithCallback:(id /* block */)a0;
- (void)unregisterStepListenerWithCallback:(id /* block */)a0;
- (void)fetchStepCountWithDuration:(long long)a0 completion:(id /* block */)a1;
- (id)checkStepPermissionStatus;
- (BOOL)supportStepCount;
- (void).cxx_destruct;
- (id)init;

@end
