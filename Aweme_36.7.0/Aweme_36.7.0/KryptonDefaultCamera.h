@class AVCaptureDeviceInput, KryptonCameraConfig, AVCaptureSession, AVCaptureVideoPreviewLayer, NSString, AVCaptureDevice, AVCaptureVideoDataOutput;
@protocol KryptonCaptureSessionInvoker, KryptonCameraDelegate;

@interface KryptonDefaultCamera : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, KryptonCamera>

@property (retain, nonatomic) KryptonCameraConfig *config;
@property (weak, nonatomic) id<KryptonCameraDelegate> delegate;
@property (nonatomic) unsigned int texture;
@property (retain, nonatomic) AVCaptureDevice *device;
@property (retain, nonatomic) AVCaptureDeviceInput *videoInput;
@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureVideoDataOutput *videoOutput;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *captureLayer;
@property (retain, nonatomic) id<KryptonCaptureSessionInvoker> invoker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCameraConfig;
- (id)requestWithConfig:(id)a0;
- (void)stopSessionRunning;
- (BOOL)checkNoDefault:(id)a0;
- (id)findDevice:(id)a0;
- (unsigned int)getPixelBufferFormat;
- (BOOL)setZoom:(double)a0;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (double)height;
- (double)width;
- (BOOL)dispose;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)dealloc;
- (id)setupCaptureSession:(id)a0;

@end
