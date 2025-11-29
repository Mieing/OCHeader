@interface CloudBackupPlatformProviderCallback : NSObject {
    struct CloudBackupPlatformProviderDispatcherBridgeObjcImpl { void /* function */ **x0; struct CloudBackupPlatformProviderDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct CloudBackupPlatformProviderDispatcherBridgeObjcImpl { void /* function */ **x0; struct CloudBackupPlatformProviderDispatcherCallback *x1; id x2; } *)a0;
- (void)onPushRouteComplete:(unsigned long long)a0 result:(id)a1;
- (void)onRemoveMediaComplete:(unsigned long long)a0;

@end
