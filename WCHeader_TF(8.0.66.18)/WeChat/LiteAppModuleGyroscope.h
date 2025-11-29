@class LiteAppDynamicModuleCallback, UIViewController, NSString;

@interface LiteAppModuleGyroscope : NSObject <LiteAppDynamicModuleProtocol> {
    LiteAppDynamicModuleCallback *_callback;
}

@property (retain, nonatomic) LiteAppDynamicModuleCallback *callback;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liteapp_export_method_sync_29;
+ (id)liteapp_export_method_sync_30;
+ (id)liteapp_export_method_async_31;
+ (id)liteapp_export_method_sync_32;

@end
