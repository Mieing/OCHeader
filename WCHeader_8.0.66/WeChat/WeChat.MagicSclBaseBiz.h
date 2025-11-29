@protocol _TtP6WeChat26IMBSclExternalViewDelegate_;

@interface WeChat.MagicSclBaseBiz : NSObject <IMBLifecycle, IMBViewDelegate, WeChat.MagicSclJsApiContextDelegate, MagicSclServiceDelegate, MBCommonAdapterDelegate> {
    void /* unknown type, empty encoding */ sessionIdToTime;
    void /* unknown type, empty encoding */ appContextId;
    void /* unknown type, empty encoding */ created;
    void /* unknown type, empty encoding */ pendingStart;
    void /* unknown type, empty encoding */ mainScriptInjected;
    void /* unknown type, empty encoding */ sclEventEmitter;
    void /* unknown type, empty encoding */ pendingEvents;
    void /* unknown type, empty encoding */ canvasMgr;
    void /* unknown type, empty encoding */ frameSets;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ frameSetRoots;
    void /* unknown type, empty encoding */ defaultJsApiContext;
    void /* unknown type, empty encoding */ paused;
    void /* unknown type, empty encoding */ starterDelegate;
    void /* unknown type, empty encoding */ isBizActive;
    void /* unknown type, empty encoding */ autoPauseExt;
    void /* unknown type, empty encoding */ magicbrush;
}

@property (nonatomic, readonly) id<_TtP6WeChat26IMBSclExternalViewDelegate_> externalViewDelegate;

- (void)resetReport;
- (void)reportFrameSetAvaliableWithFrameSet:(id)a0;
- (void)reportFrameSetReadyWithFrameSet:(id)a0;
- (void)reportFirstFrameWithFrameSet:(id)a0;
- (id)init;
- (void)dealloc;
- (void)appDidBecomeActive;
- (void)appDidEnterBackground;
- (void)setup:(id)a0;
- (void)start;
- (void)pause;
- (void)resume;
- (void)destroy;
- (void)sendEventWithName:(id)a0 params:(id)a1;
- (id)createFrameSetRootWithPath:(id)a0 query:(id)a1 useClientClick:(BOOL)a2;
- (void)destroyFrameSetRootWithId:(id)a0;
- (long long)frameSetRootCount;
- (id)getFrameSetRootWithId:(id)a0;
- (void)addFrameSetJsapiWithConfig:(id)a0 type:(long long)a1;
- (unsigned int)getDebugModeType;
- (id)getParentViewController;
- (id)getAppId;
- (void)onCreated;
- (void)onMainScriptInjected:(id)a0;
- (void)onDestroy:(int)a0;
- (void)onJSException:(id)a0 msg:(id)a1 extra:(id)a2;
- (id)bizVersionInfo;
- (id)getJsApiContextDelegate;
- (void)registerExternalTextureWithType:(id)a0 textureId:(long long)a1 extraData:(id)a2 retBlock:(id /* block */)a3;
- (void)unRegisterExternalTextureWithType:(id)a0 textureId:(long long)a1 retBlock:(id /* block */)a2;
- (void)operateExternalTextureWithType:(id)a0 textureId:(long long)a1 action:(id)a2 retBlock:(id /* block */)a3;
- (void)setCanvasStatusWithBizName:(id)a0 frameSetId:(id)a1 params:(id)a2;
- (BOOL)setFlutterCanvasMaxFpsWithBizName:(id)a0 params:(id)a1;
- (void)setGestureRectsWithBizName:(id)a0 frameSetId:(id)a1 canvasId:(unsigned int)a2 rects:(id)a3;
- (void)startUpCoverViewReadyWithBizName:(id)a0 frameSetId:(id)a1;
- (void)takeCanvasSnapshotWithCanvasId:(unsigned int)a0 imageBlock:(id /* block */)a1;
- (void)removeStartupCoverViewWithInstanceName:(id)a0 frameSetId:(id)a1;
- (void)setFrameSetStatusWithFrameSetId:(id)a0 params:(id)a1;
- (id)getFrameSetWithFrameSetId:(id)a0;
- (void)reportFrameSetReadyWithFrameSetId:(id)a0;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewLayout:(unsigned int)a0 view:(id)a1 left:(float)a2 top:(float)a3 width:(float)a4 height:(float)a5;
- (void)onCanvasViewDestroy:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)a0;
- (void).cxx_destruct;

@end
