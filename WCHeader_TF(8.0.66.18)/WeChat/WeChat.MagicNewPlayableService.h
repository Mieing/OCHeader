@interface WeChat.MagicNewPlayableService : MMUserService <MMServiceProtocol, IMBViewDelegate, IMBLifecycle> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_jsApiContext;
    void /* unknown type, empty encoding */ initConfig;
    void /* unknown type, empty encoding */ magicbrush;
    void /* unknown type, empty encoding */ mbCommonAdapter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mbVConsoleHelper;
    void /* unknown type, empty encoding */ pendingEvents;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ canvasView;
    void /* unknown type, empty encoding */ pkg;
    void /* unknown type, empty encoding */ manualPaused;
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ mainScriptInjected;
}

- (void)startWithConfig:(id)a0;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)manualResume;
- (void)setManualPauseStatus;
- (void)setMuteWithMute:(BOOL)a0;
- (void)sendEventWithName:(id)a0 params:(id)a1;
- (void)setContainerViewWithView:(id)a0;
- (void)injectJsFilesWithJsInfoFileArray:(id)a0 completion:(id /* block */)a1;
- (void)notifyMiniProgramPlayableStatusWithIsEnd:(BOOL)a0;
- (void)postMessageToMiniProgramLibWithExtra:(id)a0;
- (void)onCreated;
- (void)onMainScriptInjected:(id)a0;
- (void)onDestroy:(int)a0;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewLayout:(unsigned int)a0 view:(id)a1 left:(float)a2 top:(float)a3 width:(float)a4 height:(float)a5;
- (void)onCanvasViewDestroy:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)a0;
- (void)onJSException:(id)a0 msg:(id)a1 extra:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
