@class AVCaptureSession, AWEXPlayCameraCaptureParams, NSString, AVCaptureConnection;
@protocol BDPrivacyCertProtocol, AWEXPlayCameraCaptureOutput;

@interface AWEXPlayCameraCaptureService : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>

@property (retain, nonatomic) id<BDPrivacyCertProtocol> cert;
@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureConnection *connection;
@property (retain, nonatomic) AWEXPlayCameraCaptureParams *captureParams;
@property (weak, nonatomic) id<AWEXPlayCameraCaptureOutput> output;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cameraPermissionStatus;

- (id)initWithCertToken:(id)a0;
- (void)startCameraCaptureWithParams:(id)a0 output:(id)a1 completion:(id /* block */)a2;
- (void)onDeviceOrientationChanged:(id)a0;
- (id)createCameraCaptureSessionWithParams:(id)a0 error:(id *)a1;
- (id)bestSessionPresetForSession:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateVideoOrientation;
- (struct CGSize { double x0; double x1; })normalizeSize:(struct CGSize { double x0; double x1; })a0;
- (long long)xplayFrameRotationFromOrientation:(long long)a0;
- (void)requestCameraPermissionWithCompletion:(id /* block */)a0;
- (void)stopCameraCapture:(id /* block */)a0;
- (void)switchCameraPosition:(id /* block */)a0;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (BOOL)isCapturing;
- (void)dealloc;
- (long long)interfaceOrientation;
- (id)cameraWithPosition:(long long)a0;

@end
