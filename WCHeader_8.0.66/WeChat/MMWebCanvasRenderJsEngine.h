@class NSMutableDictionary, NSDictionary, WACanvasFileHelper, MMWebJsMediaServiceHandler, NSString;
@protocol MMWebCanvasRenderJsEngineDelegate;

@interface MMWebCanvasRenderJsEngine : MMWebCanvasBaseJsEngine <MMCanvasRenderClientContextDelegate, MMWebCanvasViewDataDelegate, MMWebCanvasViewEventDelegate>

@property (retain, nonatomic) NSDictionary *configInfo;
@property (retain, nonatomic) NSMutableDictionary *dicClientJSContexts;
@property (retain, nonatomic) NSMutableDictionary *eventQueue2Client;
@property (retain, nonatomic) MMWebJsMediaServiceHandler *videoDecoder;
@property (retain, nonatomic) WACanvasFileHelper *fileHelper;
@property (weak, nonatomic) id<MMWebCanvasRenderJsEngineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pathOfCacheDir;
+ (id)fileNameForResWithUrl:(id)a0;

- (id)initWithBasePkgInfo:(id)a0 bizPkgInfo:(id)a1 delegate:(id)a2;
- (void)dealloc;
- (void)internalInit;
- (void)setup;
- (void)stopEngine;
- (void)invalidAllTimers;
- (void)initMainContext;
- (BOOL)isClientContextExist:(id)a0;
- (id)createCanvasViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemData:(id)a1 viewDelegate:(id)a2;
- (void)updateClientWithCanvasId:(id)a0 withViewDelegate:(id)a1;
- (id)arrRenderClientCanvasId;
- (BOOL)isMediaPlaying;
- (void)attach:(id)a0;
- (void)detach:(id)a0;
- (void)repaint:(id)a0;
- (void)pause;
- (void)pause:(id)a0;
- (void)resume;
- (void)resume:(id)a0;
- (void)destory:(id)a0 viewDelegate:(id)a1;
- (void)internalDestroy:(id)a0;
- (void)stop;
- (void)stop:(id)a0;
- (void)enterHotZone:(id)a0;
- (void)exitHotZone:(id)a0;
- (void)onScreenShot;
- (id)getLayoutDataForCanvasId:(id)a0;
- (void)onSaveLayoutData:(id)a0 forCanvasId:(id)a1;
- (void)onCanvasSetHeight:(double)a0 forCanvasId:(id)a1;
- (void)onCallbackWithId:(id)a0 params:(id)a1;
- (BOOL)isFileExist:(id)a0 canvasView:(id)a1;
- (id)getFileData:(id)a0 canvasView:(id)a1;
- (id)getFileDataWithUrl:(id)a0 canvasView:(id)a1;
- (void)cancelAllFileTaskFromCanvasView:(id)a0;
- (id)trimmingWhitespaceWithStr:(id)a0;
- (void)onTouchEvent:(id)a0 withEvent:(id)a1 canvasView:(id)a2;
- (void)onFirstFrameRendered:(id)a0;
- (void)onCanvasViewEnterBackground:(id)a0;
- (void)onCanvasViewEnterForeground:(id)a0;
- (void)onTransferMessage:(id)a0 targetOrigin:(id)a1;
- (void)dispatchEventToAllClient:(id)a0;
- (void)dispatchEventToClient:(id)a0 event:(id)a1;
- (void).cxx_destruct;

@end
