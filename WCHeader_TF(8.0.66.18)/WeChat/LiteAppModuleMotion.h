@class LiteAppDynamicModuleCallback, UIViewController, NSString;

@interface LiteAppModuleMotion : NSObject <LiteAppDynamicModuleProtocol> {
    LiteAppDynamicModuleCallback *_callback;
}

@property (retain, nonatomic) LiteAppDynamicModuleCallback *callback;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liteapp_export_method_async_26;
+ (id)liteapp_export_method_sync_27;

- (void)onDeviceOrientationChange:(id)a0;
- (void)offDeviceOrientationChange;
- (id)getMotionManager;
- (long long)getSensorUpdateInterval:(long long)a0;
- (void).cxx_destruct;

@end
