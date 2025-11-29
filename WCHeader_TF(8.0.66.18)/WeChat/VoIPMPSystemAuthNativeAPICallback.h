@interface VoIPMPSystemAuthNativeAPICallback : NSObject {
    struct VoIPMPSystemAuthNativeAPIDispatcherBridgeObjcImpl { void /* function */ **x0; struct VoIPMPSystemAuthNativeAPIDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct VoIPMPSystemAuthNativeAPIDispatcherBridgeObjcImpl { void /* function */ **x0; struct VoIPMPSystemAuthNativeAPIDispatcherCallback *x1; id x2; } *)a0;
- (void)onRequestComplete:(unsigned long long)a0 isAuthorized:(BOOL)a1;

@end
