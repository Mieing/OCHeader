@interface WeChat.MagicPlayableService : MMUserService <MMServiceProtocol, IMBViewDelegate, IMBPkgManagement, IMBFileSystem, IMBLifecycle> {
    void /* unknown type, empty encoding */ mainScriptCallback;
    void /* unknown type, empty encoding */ mainScriptJSContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_jsApiContext;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ magicbrush;
    void /* unknown type, empty encoding */ mbCommonAdapter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mbVConsoleHelper;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ canvasView;
    void /* unknown type, empty encoding */ pkg;
    void /* unknown type, empty encoding */ manualPaused;
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ usingOldJs;
    void /* unknown type, empty encoding */ bootsPkg;
}

- (void)startWithConfig:(id)a0;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)manualResume;
- (void)setMuteWithMute:(BOOL)a0;
- (void)sendEventWithEvent:(id)a0 data:(id)a1;
- (void)setContainerViewWithView:(id)a0;
- (void)notifyMiniProgramPlayableStatusWithIsEnd:(BOOL)a0;
- (void)onCreated;
- (void)onMainScriptInjected:(id)a0;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewLayout:(unsigned int)a0 view:(id)a1 left:(float)a2 top:(float)a3 width:(float)a4 height:(float)a5;
- (void)onCanvasViewDestroy:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)a0;
- (void)onJSException:(id)a0 msg:(id)a1 extra:(id)a2;
- (void)provideMainScriptWithJSContext:(id)a0 callback:(id /* block */)a1;
- (void)provideMainScript:(id /* block */)a0;
- (id)provideFileSystem;
- (id)getFileDataByPath:(id)a0;
- (id)readFile:(id)a0 position:(long long)a1 length:(long long)a2 error:(id *)a3;
- (id)init;
- (void).cxx_destruct;

@end
