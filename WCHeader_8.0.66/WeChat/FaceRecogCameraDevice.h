@class AVCaptureVideoPreviewLayer, NSString, NSArray, AVCaptureDepthDataOutput, AVCaptureSession, AVCaptureDevice, NSObject, AVCaptureDeviceInput, AVCaptureVideoDataOutput, AVCaptureDataOutputSynchronizer;
@protocol OS_dispatch_queue, CameraVideoDeviceDelegate;

@interface FaceRecogCameraDevice : NSObject <AVCaptureDataOutputSynchronizerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    NSObject<OS_dispatch_queue> *deviceOperationQueue;
    NSObject<OS_dispatch_queue> *videoProcessingQueue;
    NSArray *observers;
    BOOL focusListening;
}

@property (retain, nonatomic) AVCaptureDepthDataOutput *depthDataOutput;
@property (retain, nonatomic) AVCaptureDataOutputSynchronizer *outputSynchronizer;
@property (weak, nonatomic) NSObject<CameraVideoDeviceDelegate> *delegate;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (nonatomic) long long focusMode;
@property (nonatomic) struct CGPoint { double x; double y; } focusPoint;
@property (nonatomic) long long exposureMode;
@property (nonatomic) struct CGPoint { double x; double y; } exposurePoint;
@property (nonatomic) int flashMode;
@property (nonatomic) long long whiteBalanceMode;
@property (nonatomic) int frameRate;
@property (nonatomic) BOOL isAdjustingWhiteBalance;
@property (nonatomic) double DeviceISO;
@property (nonatomic) double Device_minISO;
@property (nonatomic) double Device_maxISO;
@property (nonatomic) double DeviceAperture;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } DeviceExposureDuration;
@property (nonatomic) BOOL isCustomExposureSupported;
@property (nonatomic) BOOL lowLightBoost;
@property (readonly, nonatomic) BOOL hasFlash;
@property (readonly, nonatomic) BOOL hasFront;
@property (retain, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) AVCaptureDevice *inputCamera;
@property (retain, nonatomic) AVCaptureDeviceInput *videoInput;
@property (retain, nonatomic) AVCaptureVideoDataOutput *videoOutput;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) BOOL isDepthEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 isDepthEnabled:(BOOL)a1;
- (void)dealloc;
- (void)setupCaptureSession;
- (BOOL)frameRateSupported:(int)a0;
- (void)setCameraSettings:(long long)a0 iso:(int)a1;
- (BOOL)isRunning;
- (void)startDevice;
- (void)stopDevice;
- (id)deviceWithType:(id)a0 position:(long long)a1;
- (void)addFocusChangeListener;
- (void)removeFocusChangeListener;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)dataOutputSynchronizer:(id)a0 didOutputSynchronizedDataCollection:(id)a1;
- (void).cxx_destruct;

@end
