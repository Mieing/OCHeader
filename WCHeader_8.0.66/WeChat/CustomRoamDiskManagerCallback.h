@interface CustomRoamDiskManagerCallback : NSObject {
    struct CustomRoamDiskManagerDispatcherBridgeObjcImpl { void /* function */ **x0; struct CustomRoamDiskManagerDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct CustomRoamDiskManagerDispatcherBridgeObjcImpl { void /* function */ **x0; struct CustomRoamDiskManagerDispatcherCallback *x1; id x2; } *)a0;
- (void)onDeviceDiscoveredEvent:(id)a0 specialInfoPb:(id)a1;

@end
