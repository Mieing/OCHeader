@class NSString, MMTCPNativeTask;

@interface MMTCPHandle : NSObject {
    struct OpaqueJSContext { } *_jscontext;
    struct MBTcpScriptState { void /* function */ **x0; unsigned int x1; struct OpaqueJSContext *x2; long long x3; } *_tcpScriptState;
    void *_tcpMgr;
    MMTCPNativeTask *tcpTask;
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
