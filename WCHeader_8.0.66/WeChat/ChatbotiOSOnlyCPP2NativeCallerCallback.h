@interface ChatbotiOSOnlyCPP2NativeCallerCallback : NSObject {
    struct ChatbotiOSOnlyCPP2NativeCallerDispatcherBridgeObjcImpl { void /* function */ **x0; struct ChatbotiOSOnlyCPP2NativeCallerDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct ChatbotiOSOnlyCPP2NativeCallerDispatcherBridgeObjcImpl { void /* function */ **x0; struct ChatbotiOSOnlyCPP2NativeCallerDispatcherCallback *x1; id x2; } *)a0;
- (void)onOnRecvVoIPAsrInfoComplete:(unsigned long long)a0;
- (void)onOnRecvToCliInfoComplete:(unsigned long long)a0;

@end
