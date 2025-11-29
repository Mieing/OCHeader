@interface EmoticonStoreEventCenterCallback : NSObject {
    struct EmoticonStoreEventCenterDispatcherBridgeObjcImpl { void /* function */ **x0; struct EmoticonStoreEventCenterDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct EmoticonStoreEventCenterDispatcherBridgeObjcImpl { void /* function */ **x0; struct EmoticonStoreEventCenterDispatcherCallback *x1; id x2; } *)a0;
- (void)onOnEmoticonStoreItemInstallFinishedComplete:(unsigned long long)a0;
- (void)onOnEmoticonStoreItemInstallFailedComplete:(unsigned long long)a0;
- (void)onOnEmoticonStoreItemChangedComplete:(unsigned long long)a0;

@end
