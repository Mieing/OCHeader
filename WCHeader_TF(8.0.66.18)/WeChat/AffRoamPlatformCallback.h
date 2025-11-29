@interface AffRoamPlatformCallback : NSObject {
    struct AffRoamPlatformDispatcherBridgeObjcImpl { void /* function */ **x0; struct AffRoamPlatformDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct AffRoamPlatformDispatcherBridgeObjcImpl { void /* function */ **x0; struct AffRoamPlatformDispatcherCallback *x1; id x2; } *)a0;
- (void)onGetAllConversationsComplete:(unsigned long long)a0 result:(id)a1;
- (void)onGetAllDevicesComplete:(unsigned long long)a0 devices:(id)a1;
- (void)onGetOnlineDevicesComplete:(unsigned long long)a0 devices:(id)a1;
- (void)onGetIotBoundDevicesComplete:(unsigned long long)a0 devices:(id)a1;
- (void)onBindDeviceComplete:(unsigned long long)a0 device:(id)a1 isSuccess:(BOOL)a2;
- (void)onGetNetNameComplete:(unsigned long long)a0 netName:(id)a1;

@end
