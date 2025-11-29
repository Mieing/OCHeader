@interface WeAppCore.WAWebViewPlugin_AgentBridge : WAWebViewPluginBase {
    void /* unknown type, empty encoding */ callbacks;
    void /* unknown type, empty encoding */ nextId;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ locationHandler;
    void /* unknown type, empty encoding */ watchIdToCallbackId;
}

- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (id)registerCallbackWithCompletion:(id /* block */)a0;
- (void)handlePostMessage:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
