@interface ChatbotFileUtilCPP2NativeCallerCallback : NSObject {
    struct ChatbotFileUtilCPP2NativeCallerDispatcherBridgeObjcImpl { void /* function */ **x0; struct ChatbotFileUtilCPP2NativeCallerDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct ChatbotFileUtilCPP2NativeCallerDispatcherBridgeObjcImpl { void /* function */ **x0; struct ChatbotFileUtilCPP2NativeCallerDispatcherCallback *x1; id x2; } *)a0;
- (void)onGetUserCachePathComplete:(unsigned long long)a0 cachePath:(id)a1;

@end
