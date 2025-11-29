@class NSString, UIView;
@protocol TXLivePushJSAdapterProtocol;

@interface WAWebViewPlugin_LivePusher : WAWebViewPlugin_embedView <TXLivePushJSAdapterDelegate, WALivePusherPixelBufferDelegate, MagicBrushCVPixelBufferRTDelegate> {
    int _curArrayBufferId;
    int _lastArrayBufferId;
}

@property (retain, nonatomic) id<TXLivePushJSAdapterProtocol> pusher;
@property (retain, nonatomic) UIView *preview;
@property (nonatomic) unsigned int pusherId;
@property (copy, nonatomic) id /* block */ operateCallback;
@property (nonatomic) BOOL isInBackground;
@property (nonatomic) BOOL hasPreview;
@property (nonatomic) BOOL isPublishingWhenEnterBackground;
@property (nonatomic) struct __CVBuffer { } *lastOutputFrameBuffer;
@property (nonatomic) unsigned int currentCanvasId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onWeAppWillEnterBackground:(id)a0;
- (id)minimizationItemInfo;
- (void)onWeAppDidEnterBackground:(id)a0;
- (void)onPusherEnterBackground:(id)a0;
- (void)onWeAppEnterForeground:(id)a0;
- (void)onAppWillResignActive:(id)a0;
- (void)onAppDidBecomeActive:(id)a0;
- (void)restorePreviewSetting;
- (void)saveAndForceStopPreviewSetting;
- (unsigned int)insertLivePusher:(unsigned int)a0 parentId:(unsigned int)a1 pos:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 configs:(id)a3;
- (void)updateLivePusher:(unsigned int)a0 pos:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 configs:(id)a2;
- (void)updateLivePusher:(unsigned int)a0 configs:(id)a1;
- (void)operateLivePusher:(unsigned int)a0 type:(id)a1 param:(id)a2 completion:(id /* block */)a3;
- (BOOL)removeLivePusher:(unsigned int)a0;
- (id)getLivePusher;
- (void)stopLivePusher;
- (void)onRecordStateChanged:(BOOL)a0;
- (void)onCameraStateChanged:(BOOL)a0;
- (id)getCurrentWebView;
- (void)onPushEvent:(int)a0 evtMsg:(id)a1 pusherId:(unsigned int)a2 param:(id)a3;
- (void)onLivePusherError:(unsigned int)a0 errCode:(long long)a1 errMsg:(id)a2 data:(id)a3;
- (void)onPushNetStatus:(id)a0 pusherId:(unsigned int)a1;
- (void)onPusherDidTakeSnapshot:(id)a0 pusherId:(unsigned int)a1;
- (void)onInsertLogView:(unsigned int)a0;
- (void)onLivePusherCallBack:(BOOL)a0 errNo:(long long)a1 errMsg:(id)a2;
- (void)onLivePusherBGMStart:(unsigned int)a0;
- (void)onLivePusherBGMProgress:(unsigned int)a0 progress:(long long)a1 duration:(long long)a2;
- (void)onLivePusherBGMComplete:(unsigned int)a0 errCode:(long long)a1;
- (void)onLivePusher:(unsigned int)a0 audioVolumeEvaluation:(long long)a1;
- (void)onPusherEvent:(id)a0;
- (void)sendEvent:(id)a0 param:(id)a1 sendWebview:(BOOL)a2;
- (void)onEnableCustomVideoCapture:(BOOL)a0 width:(double)a1 height:(double)a2;
- (void)liveManager:(id)a0 didPushVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 homeRotation:(long long)a2;
- (struct __CVBuffer { } *)getNextOutputPixelBuffer;
- (void)onLivePusherCameraFrameBufferUpdate:(unsigned int)a0 width:(long long)a1 height:(long long)a2;
- (void)onLivePusherCameraFrame:(unsigned int)a0 deviceOrientationRotation:(long long)a1;
- (void)sendCustomVideoFrame:(id)a0;
- (void)setupWebGLCanvas;
- (void)removeLastArrayBufferIfNeeded:(int)a0;
- (void)createRenderTargetIfNeededWithCanvasId:(unsigned int)a0;
- (void)onFrameAvailable:(struct __CVBuffer { } *)a0 inRT:(id)a1;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)updateCapsuleView:(BOOL)a0;
- (void).cxx_destruct;

@end
