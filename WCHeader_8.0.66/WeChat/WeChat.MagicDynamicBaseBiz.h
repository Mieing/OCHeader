@interface WeChat.MagicDynamicBaseBiz : WeChat.MBDynamicBizContext <IMBViewDelegate, IMBLifecycle, MBCommonAdapterDelegate> {
    void /* unknown type, empty encoding */ magicbrush;
    void /* unknown type, empty encoding */ mbCommonAdapter;
    void /* unknown type, empty encoding */ mbVConsoleHelper;
    void /* unknown type, empty encoding */ created;
    void /* unknown type, empty encoding */ pendingStart;
    void /* unknown type, empty encoding */ paused;
    void /* unknown type, empty encoding */ mainScriptInjected;
    void /* unknown type, empty encoding */ pendingEvents;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ jsapiContextImpl;
}

- (id)init;
- (void)setup:(id)a0;
- (void)start;
- (void)pause;
- (void)resume;
- (void)sendEventWithName:(id)a0 params:(id)a1;
- (void)destroy;
- (id)provideCurrentViewController;
- (unsigned int)getDebugModeType;
- (void)onCreated;
- (void)onMainScriptInjected:(id)a0;
- (void)onJSException:(id)a0 msg:(id)a1 extra:(id)a2;
- (void)onDestroy:(int)a0;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewLayout:(unsigned int)a0 view:(id)a1 left:(float)a2 top:(float)a3 width:(float)a4 height:(float)a5;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)a0;
- (void)onCanvasViewDestroy:(unsigned int)a0 view:(id)a1;
- (void).cxx_destruct;

@end
