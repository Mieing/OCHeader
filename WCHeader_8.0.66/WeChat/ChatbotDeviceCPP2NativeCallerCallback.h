@interface ChatbotDeviceCPP2NativeCallerCallback : NSObject {
    struct ChatbotDeviceCPP2NativeCallerDispatcherBridgeObjcImpl { void /* function */ **x0; struct ChatbotDeviceCPP2NativeCallerDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct ChatbotDeviceCPP2NativeCallerDispatcherBridgeObjcImpl { void /* function */ **x0; struct ChatbotDeviceCPP2NativeCallerDispatcherCallback *x1; id x2; } *)a0;
- (void)onOnAITalkingStatusChangeComplete:(unsigned long long)a0;

@end
