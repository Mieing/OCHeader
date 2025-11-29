@class NSString, MMLiveManger;
@protocol MMLiveCaptureAdapterDelegate;

@interface MMLiveCaptureAdapter : NSObject <MMLiveMangerPusherDelegate, MMLiveManagerMetricsDelegate, MMLiveManagerCaptureDelegate>

@property (retain, nonatomic) MMLiveManger *liveCapture;
@property (weak, nonatomic) id<MMLiveCaptureAdapterDelegate> captureDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initLiveCaptureDelegatesAndEffectManager:(id)a0;
- (void)startCameraCaptureWithContainerView:(id)a0;
- (void)startCameraCaptureWithContainerView:(id)a0 useFrontCamera:(BOOL)a1;
- (void)stopCameraCapture;
- (void)switchCamera;
- (void)switchCameraWithCompletionHandler:(id /* block */)a0;
- (void)setFrameRate:(int)a0;
- (void)setMaxRenderFrameRate:(int)a0;
- (void)setFront:(BOOL)a0;
- (void)setFaceDetect:(BOOL)a0;
- (void)setVideoResolution:(long long)a0;
- (void)setVideoResolution1920x1440;
- (void)setVideoResolution2560x1440;
- (void)updateVideoAspectRatio21_10:(BOOL)a0;
- (struct CGSize { double x0; double x1; })getCaptureVideoSize;
- (struct CGSize { double x0; double x1; })getCaptureVideoSizeWithCroped;
- (void)setRotation:(int)a0;
- (void)setMirror:(BOOL)a0 isFront:(BOOL)a1;
- (void)setRemoteMirror:(BOOL)a0 isFront:(BOOL)a1;
- (void)ignoreDarkFramesOnceAfterSettingConfiguration;
- (void)setEnableZoom:(BOOL)a0;
- (void)setCameraPreviewOrientation:(long long)a0;
- (void)setCustomCameraConfigs:(id)a0;
- (void)startViewCaptureWithView:(id)a0;
- (void)stopViewCapture;
- (void)pauseViewCapture;
- (void)resumeViewCapture;
- (void)refreshViewCaptureConfigurations;
- (void)updateZoomScaleWithGestureScale:(double)a0;
- (void)updateFocusAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)getLiveCaptureVideoFrameWidgetManageLogic;
- (void)startCustomRender;
- (void)stopCustomRender;
- (void)liveManager:(id)a0 didPushVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 shouldReportCaptureMetrics:(BOOL)a2;
- (void)liveManager:(id)a0 didFinishCollectingCaptureMetrics:(id)a1;
- (void)liveManager:(id)a0 didOutputSampleBufferForRender:(struct opaqueCMSampleBuffer { } *)a1 localRenderFlipX:(BOOL)a2;
- (void)liveManager:(id)a0 didOutputSampleBufferForTransmit:(struct opaqueCMSampleBuffer { } *)a1 localRenderFlipX:(BOOL)a2;
- (void)liveManager:(id)a0 didOutputRenderFrame:(id)a1;
- (void)liveManager:(id)a0 didCapturingChanged:(BOOL)a1;
- (void)liveManager:(id)a0 didChangedVirtualCameraCaptureDevice:(BOOL)a1;
- (void)liveManager:(id)a0 didRenderRotateTransitingChanged:(BOOL)a1;
- (void)liveManager:(id)a0 didOutputInitialSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void).cxx_destruct;

@end
