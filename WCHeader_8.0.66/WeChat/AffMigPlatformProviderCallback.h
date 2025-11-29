@interface AffMigPlatformProviderCallback : NSObject {
    struct AffMigPlatformProviderDispatcherBridgeObjcImpl { void /* function */ **x0; struct AffMigPlatformProviderDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct AffMigPlatformProviderDispatcherBridgeObjcImpl { void /* function */ **x0; struct AffMigPlatformProviderDispatcherCallback *x1; id x2; } *)a0;
- (void)onGetChatPackageComplete:(unsigned long long)a0 isLastPkg:(BOOL)a1 offset:(unsigned long long)a2 chatPackage:(id)a3;
- (void)onInsertChatPackageComplete:(unsigned long long)a0;
- (void)onFilterRestoreMediaComplete:(unsigned long long)a0 filteredSize:(unsigned long long)a1 filteredMediaIdList:(id)a2;
- (void)onRequestSetupEnvWithUsernameComplete:(unsigned long long)a0 result:(int)a1;
- (void)onGetBatteryLevelComplete:(unsigned long long)a0 batteryLevel:(int)a1;

@end
