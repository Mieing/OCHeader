@interface WeChat.WAJSContextPlugin_MagicBrushFrame : WAJSContextPluginBase <WAAppTaskMgrExt> {
    void /* unknown type, empty encoding */ insertedAppids;
}

- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (void)insertMagicBrushFrameWithParams:(id)a0 completion:(id /* block */)a1;
- (void)removeMagicBrushFrameWithParams:(id)a0;
- (void)onAppPackageDidBeSweep:(id)a0 debugMode:(unsigned long long)a1;
- (void).cxx_destruct;

@end
