@class MBCommonAdapter, _TtC6WeChat20MagicSclJsApiContext, _TtC6WeChat25MagicSclServicePkgManager, NSMutableDictionary, NSString;
@protocol IMBPublicServiceDispatcher;

@interface MagicSclService : NSObject <MBCommonAdapterDelegate, WeChat.MagicSclJsApiContextDelegate, IMBPublicService, IMBLifecycle, IMBPlugin, IMBViewDelegate>

@property (retain, nonatomic) MBCommonAdapter *mbCommonAdapter;
@property (retain, nonatomic) _TtC6WeChat20MagicSclJsApiContext *jsApiContext;
@property (retain, nonatomic) _TtC6WeChat25MagicSclServicePkgManager *pkgMgr;
@property (retain, nonatomic) NSMutableDictionary *canvasIdToBizName;
@property (weak, nonatomic) id<IMBPublicServiceDispatcher> dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)getPkgMgr;
- (id)provideConfig:(id)a0;
- (id)provideLifecycle;
- (void)setupDispatcher:(id)a0;
- (void)onMainScriptInjected:(id)a0;
- (void)onDestroy:(int)a0;
- (void)onJSException:(id)a0 msg:(id)a1 extra:(id)a2;
- (id)getPkgVersion;
- (id)getPkgInfo;
- (id)providePlugin:(id)a0;
- (id)getSclDelegate:(id)a0;
- (void)setCanvasStatusWithBizName:(id)a0 frameSetId:(id)a1 params:(id)a2;
- (BOOL)setFlutterCanvasMaxFpsWithBizName:(id)a0 params:(id)a1;
- (void)setGestureRectsWithBizName:(id)a0 frameSetId:(id)a1 canvasId:(unsigned int)a2 rects:(id)a3;
- (void)startUpCoverViewReadyWithBizName:(id)a0 frameSetId:(id)a1;
- (void)takeCanvasSnapshotWithCanvasId:(unsigned int)a0 imageBlock:(id /* block */)a1;
- (void)removeStartupCoverViewWithInstanceName:(id)a0 frameSetId:(id)a1;
- (void)registerExternalTextureWithType:(id)a0 textureId:(long long)a1 extraData:(id)a2 retBlock:(id /* block */)a3;
- (void)unRegisterExternalTextureWithType:(id)a0 textureId:(long long)a1 retBlock:(id /* block */)a2;
- (void)operateExternalTextureWithType:(id)a0 textureId:(long long)a1 action:(id)a2 retBlock:(id /* block */)a3;
- (id)getFrameSetWithFrameSetId:(id)a0;
- (void)reportFrameSetReadyWithFrameSetId:(id)a0;
- (void)setFrameSetStatusWithFrameSetId:(id)a0 params:(id)a1;
- (unsigned int)getDebugModeType;
- (id)getParentViewController;
- (id)getAppId;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewDestroy:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)a0;
- (void)onCanvasViewLayout:(unsigned int)a0 view:(id)a1 left:(float)a2 top:(float)a3 width:(float)a4 height:(float)a5;
- (void).cxx_destruct;

@end
