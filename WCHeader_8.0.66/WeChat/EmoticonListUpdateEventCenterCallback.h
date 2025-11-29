@interface EmoticonListUpdateEventCenterCallback : NSObject {
    struct EmoticonListUpdateEventCenterDispatcherBridgeObjcImpl { void /* function */ **x0; struct EmoticonListUpdateEventCenterDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct EmoticonListUpdateEventCenterDispatcherBridgeObjcImpl { void /* function */ **x0; struct EmoticonListUpdateEventCenterDispatcherCallback *x1; id x2; } *)a0;
- (void)onOnEmoticonListUpdatedComplete:(unsigned long long)a0;

@end
