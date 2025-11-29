@class NSString, MMWeEffectManager, MMLiveTaskId, UIView, MMLiveRemoteTrtcCustomRenderWrapperInitParam, MMVideoRenderView;

@interface MMLiveRemoteTrtcCustomRenderWrapper : NSObject <WeEffectEnergyController, WeEffectManagerResultDelegate>

@property (retain, nonatomic) MMLiveRemoteTrtcCustomRenderWrapperInitParam *customParam;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderRect;
@property (retain, nonatomic) MMVideoRenderView *videoRenderView;
@property (retain, nonatomic) MMWeEffectManager *weeffectManager;
@property (nonatomic) BOOL isAllowFp16;
@property BOOL isWeVisMgrCreated;
@property BOOL isCustomRenderStart;
@property BOOL isFirstFrameRendered;
@property BOOL isStopCustomRender;
@property (copy, nonatomic) id /* block */ customRenderStartCallback;
@property (copy, nonatomic) id /* block */ customRenderFirstFrameRenderedCallback;
@property (copy, nonatomic) id /* block */ customRenderWillStopCallback;
@property (copy, nonatomic) id /* block */ customRenderStopCallback;
@property (copy, nonatomic) id /* block */ luaScriptJsonMessageReceiveCallback;
@property (readonly, nonatomic) UIView *renderView;
@property (readonly, nonatomic) BOOL hasCustomRenderStarted;
@property (readonly, nonatomic) long long weffectScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 userId:(id)a1 renderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 param:(id)a3;
- (void)initDefaultData;
- (void)startCustomRender;
- (void)stopCustomRenderWithDelay:(BOOL)a0;
- (void)onCustomRenderStopFinished;
- (void)clearData;
- (void)onRenderVideoFrame:(id)a0 userId:(id)a1;
- (void)tagFrameRendered;
- (void)checkFirstFrameRendered;
- (void)createWeEffectMananger;
- (void)createVideoRenderView;
- (void)checkIsPrepareToCustomRender;
- (void)effectMgr:(id)a0 configSettings:(void *)a1;
- (void)effectMgr:(id)a0 adjustSettings:(void *)a1;
- (void)onWeEffectLuaScriptJsonMessageReceived:(id)a0 fromSourceId:(int)a1;
- (void)onResult:(int)a0;
- (void)onResourceID:(long long)a0;
- (void)onResourceIDVector:(id)a0 scene:(unsigned long long)a1;
- (void)onWeVisEffectMgrCreateCompleted;
- (void).cxx_destruct;

@end
