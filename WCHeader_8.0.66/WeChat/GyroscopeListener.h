@class LiteAppDynamicModuleCallback, CMMotionManager;

@interface GyroscopeListener : NSObject

@property (retain, nonatomic) CMMotionManager *_manager;
@property (retain, nonatomic) LiteAppDynamicModuleCallback *_callback;

- (void).cxx_destruct;

@end
