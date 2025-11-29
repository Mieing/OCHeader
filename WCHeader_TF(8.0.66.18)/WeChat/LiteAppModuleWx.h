@class LiteAppDynamicModuleCallback, UIViewController, NSString;

@interface LiteAppModuleWx : NSObject <LiteAppDynamicModuleProtocol> {
    LiteAppDynamicModuleCallback *_callback;
}

@property (retain, nonatomic) LiteAppDynamicModuleCallback *callback;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liteapp_export_method_sync_22;
+ (id)liteapp_export_method_sync_23;

- (id)getAccountInfo;
- (BOOL)isCNPayWalletRegion;
- (void).cxx_destruct;

@end
