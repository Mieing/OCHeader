@class BDPRunningDispatchThread;

@interface BDPRemoteDebugQJS : NSObject <BDPRemoteDebugMessenger> {
    struct LEPUSContext { } *qjs_context;
    BDPRunningDispatchThread *js_thread;
}

- (id)initWithRuntime:(id)a0 agent:(id)a1;
- (void)sendToJS:(id)a0;
- (void).cxx_destruct;

@end
