@class AVCaptureSession, AVCaptureVideoPreviewLayer, AVCaptureStillImageOutput, NSString, NSObject, AVCaptureDevice, AVCaptureVideoDataOutput;
@protocol DTFCameraServiceDelegate, OS_dispatch_queue;

@interface DTFCameraService : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {
    NSObject<OS_dispatch_queue> *cameraProcessingQueue;
}

@property (weak, nonatomic) id<DTFCameraServiceDelegate> delegate;
@property (retain, nonatomic) AVCaptureDevice *device;
@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput;
@property (nonatomic) struct camera_configuration_t { struct CGPoint { double x; double y; } focusPointOfInterest; } configuration;
@property (retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput;
@property (nonatomic) double cameraoOriginalZoom;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } videoOutputSize;
@property (nonatomic) BOOL isCameraStop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setupSessionWithPreset:(id)a0 error:(id *)a1 withOrientation:(long long)a2;
- (id)getCaptureDeviceWithPosition:(long long)a0 error:(id *)a1;
- (BOOL)addCaptureDeviceAsInput:(id)a0 toSession:(id)a1 error:(id *)a2;
- (id)addVideoDataOutputToSession:(id)a0 withOrientation:(long long)a1 error:(id *)a2;
- (id)addStillImageOutputToSession:(id)a0 withOrientation:(long long)a1 error:(id *)a2;
- (BOOL)changeConfiguration:(id)a0 desiredValue:(id)a1;
- (BOOL)setFocusPOI:(struct CGPoint { double x0; double x1; })a0;
- (void)startCameraCompletion:(id /* block */)a0;
- (void)takePicture:(id /* block */)a0;
- (void)setWhiteBalanceParam:(id)a0 completionHandler:(id /* block */)a1;
- (void)flashOn;
- (void)flashOff;
- (void)resetVideoZoom;
- (void)stopCamera;
- (void).cxx_destruct;
- (BOOL)setWhiteBalanceMode:(long long)a0;
- (BOOL)setExposureMode:(long long)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (id)initWithConfig:(id)a0 error:(id *)a1;

@end
