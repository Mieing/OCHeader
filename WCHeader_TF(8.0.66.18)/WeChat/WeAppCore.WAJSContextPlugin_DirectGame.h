@interface WeAppCore.WAJSContextPlugin_DirectGame : WAJSContextPluginBase {
    void /* unknown type, empty encoding */ directGameRootView;
    void /* unknown type, empty encoding */ rootViewLock;
}

- (BOOL)isDirectGameLaunch;
- (id)getOrCreateDirectGameRootView;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
