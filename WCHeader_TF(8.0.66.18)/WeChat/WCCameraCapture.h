@class AVCaptureVideoPreviewLayer, NSObject;
@protocol OS_dispatch_queue;

@interface WCCameraCapture : GPUImageStillCamera

@property BOOL currentOpenAutoSwitchCamera;
@property (nonatomic) float cameraDefaultZoomFactor;
@property (nonatomic) BOOL currentDeviceIsUltraWideAngleCamera;
@property (nonatomic) BOOL autoSwitchingScanCameraLensPosition;
@property (nonatomic) BOOL enableScanAutoSwitchCameraWhenFocusing;
@property BOOL isActive;
@property (readonly, nonatomic) BOOL isAudioActive;
@property (nonatomic) BOOL activeQRScan;
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (id)initWithSessionPreset:(id)a0 frameRate:(int)a1 enableAutoSwitchCamera:(BOOL)a2;
- (id)adjustImage:(id)a0;
- (void)takePictureWithFinalFilter:(id)a0 withCompletion:(id /* block */)a1;
- (void)capturePreviewImageWithFinalFilter:(id)a0 withCompletion:(id /* block */)a1;
- (void)startRunning;
- (void)startCameraCapture;
- (BOOL)stopCameraCapture;
- (void)focusAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isSupportZoomWithFactor:(double)a0;
- (double)zoomFactor;
- (void)setZoomFactor:(double)a0;
- (void)setZoomFactor:(double)a0 ignoreLimit:(BOOL)a1 animated:(BOOL)a2;
- (BOOL)canZoom;
- (double)maxZoomFactor;
- (void)zoom;
- (BOOL)hasMultipleCameras;
- (BOOL)switchCamera;
- (void)setCaptureSessionPreset:(id)a0;
- (BOOL)setFlash:(long long)a0 AndTorchMode:(long long)a1;
- (BOOL)supportFlashlightMode;
- (long long)flashMode;
- (void)setFlashlightMode:(long long)a0;
- (BOOL)supportTorchMode;
- (long long)torchMode;
- (void)setTorchMode:(long long)a0;
- (void)resetExposureISO;
- (void)checkAutoSwitchCamera;
- (void)setDefaultZoomFactor;
- (double)defaultZoomFactor;
- (void)checkInitDefaultZoomFactor;
- (id)customGetCaptureDevice:(long long)a0;
- (BOOL)enableScanAutoSwitchCameraWhenFocusing:(long long)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (double)minZoomFactor;
- (void).cxx_destruct;

@end
