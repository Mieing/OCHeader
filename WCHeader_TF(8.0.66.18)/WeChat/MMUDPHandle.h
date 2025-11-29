@class MMUDPNativeTask, NSString;

@interface MMUDPHandle : NSObject {
    struct OpaqueJSContext { } *_jscontext;
    struct MBUdpScriptState { void /* function */ **x0; unsigned int x1; struct OpaqueJSContext *x2; long long x3; } *_udpScriptState;
    void *_udpMgr;
    MMUDPNativeTask *udpTask;
    BOOL _jitMode;
    NSString *_appid;
}

- (id)initWithJSContext:(struct OpaqueJSContext { } *)a0 parent:(struct OpaqueJSValue { } *)a1;
- (id)initOnJitModeWithAppId:(id)a0;
- (void)setLogDelegate:(id)a0;
- (void)releaseContext;
- (void)dealloc;
- (void).cxx_destruct;

@end
