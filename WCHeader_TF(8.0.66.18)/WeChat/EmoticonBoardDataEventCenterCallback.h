@interface EmoticonBoardDataEventCenterCallback : NSObject {
    struct EmoticonBoardDataEventCenterDispatcherBridgeObjcImpl { void /* function */ **x0; struct EmoticonBoardDataEventCenterDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct EmoticonBoardDataEventCenterDispatcherBridgeObjcImpl { void /* function */ **x0; struct EmoticonBoardDataEventCenterDispatcherCallback *x1; id x2; } *)a0;
- (void)onOnEmoticonThumbUpdatedComplete:(unsigned long long)a0;

@end
