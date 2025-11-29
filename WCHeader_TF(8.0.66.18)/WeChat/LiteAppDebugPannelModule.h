@class LiteAppDynamicModuleCallback, UIViewController, NSString;

@interface LiteAppDebugPannelModule : NSObject <LiteAppDynamicModuleProtocol> {
    LiteAppDynamicModuleCallback *_callback;
}

@property (retain, nonatomic) LiteAppDynamicModuleCallback *callback;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liteapp_export_method_sync_31;
+ (id)liteapp_export_method_sync_32;
+ (id)liteapp_export_method_sync_33;

- (id)getLiteAppList;
- (id)getLiteAppConfigList;
- (BOOL)removeLiteApp:(id)a0;
- (void).cxx_destruct;

@end
