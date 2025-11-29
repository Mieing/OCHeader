@class NSPointerArray, NSMutableDictionary, NSString;

@interface MBPublicService : MagicBrushBiz <IMBLifecycle, IMBPkgManagement, IMBPublicServiceDispatcher>

@property (retain, nonatomic) NSPointerArray *pendingBizArray;
@property (nonatomic) BOOL isPrepared;
@property (retain, nonatomic) NSMutableDictionary *canvasIdToBizName;
@property (retain, nonatomic) NSMutableDictionary *canvasIdToPendingEvent;
@property (readonly, copy, nonatomic) NSString *alias;
@property (nonatomic) BOOL invalid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(id)a0 internalImpl:(BOOL)a1;
- (void)destroy;
- (void)provideMainScript:(id /* block */)a0;
- (void)onCreated;
- (void)onMainScriptInjected:(id)a0;
- (void)bindBiz:(id)a0;
- (void)unbindBiz:(id)a0;
- (void)postMessage:(id)a0 toBiz:(id)a1;
- (void)receiveMessage:(id)a0 fromBiz:(id)a1;
- (void)bindCanvas:(unsigned int)a0 withBiz:(id)a1;
- (void)notifyExternalCVPixelBuffer:(id)a0 elementId:(int)a1 buffer:(struct __CVBuffer { } *)a2;
- (void)sendEvent:(id)a0 data:(id)a1;
- (id)getBizForCanvasId:(unsigned int)a0;
- (void)onCanvasCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasDestroyed:(unsigned int)a0 view:(id)a1;
- (void)onCanvasFrameChanged:(unsigned int)a0 view:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)a0;
- (void).cxx_destruct;

@end
