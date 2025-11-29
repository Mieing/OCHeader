@interface EmoticonPackageListUpdateEventCenterCallback : NSObject {
    struct EmoticonPackageListUpdateEventCenterDispatcherBridgeObjcImpl { void /* function */ **x0; struct EmoticonPackageListUpdateEventCenterDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct EmoticonPackageListUpdateEventCenterDispatcherBridgeObjcImpl { void /* function */ **x0; struct EmoticonPackageListUpdateEventCenterDispatcherCallback *x1; id x2; } *)a0;
- (void)onOnEmoticonPackageListUpdatedComplete:(unsigned long long)a0;

@end
