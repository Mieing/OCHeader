@class AVCaptureVideoPreviewLayer, NSObject;
@protocol OS_dispatch_queue;

@interface LiteAppCameraCapture : GPUImageStillCamera

@property BOOL isActive;
@property (readonly, nonatomic) BOOL isAudioActive;
@property (nonatomic) BOOL activeQRScan;
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (id)initWithPreset:(id)a0;
- (id)initWithSessionPreset:(id)a0 frameRate:(int)a1;
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
- (double)minZoomFactor;
- (void).cxx_destruct;

@end
