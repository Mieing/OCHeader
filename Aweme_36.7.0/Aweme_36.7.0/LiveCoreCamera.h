@class NSDate, NSString, AVCaptureSession, AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureVideoDataOutput, NSObject;
@protocol LCCameraOutputDelegate, LCCameraStateDelegate, OS_dispatch_queue;

@interface LiveCoreCamera : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate> {
    AVCaptureDevice *_microphone;
    AVCaptureDeviceInput *videoInput;
    AVCaptureVideoDataOutput *videoOutput;
    AVCaptureDeviceInput *audioInput;
    AVCaptureAudioDataOutput *audioOutput;
    NSDate *startingCaptureTime;
    NSObject<OS_dispatch_queue> *cameraProcessingQueue;
    NSObject<OS_dispatch_queue> *audioProcessingQueue;
    NSObject<OS_dispatch_queue> *captureSessionQueue;
    BOOL isFullYUVRange;
    BOOL addedAudioInputsDueToEncodingTarget;
    BOOL _capturePaused;
    BOOL _bRotatingCam;
    long long _torchMode;
    BOOL _bCapturing;
    void *LCCaptureSessionQueueKey;
    BOOL _interrupt;
}

@property (nonatomic) long long didDropSampleBufferCount;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, retain, nonatomic) AVCaptureSession *captureSession;
@property (copy, nonatomic) NSString *captureSessionPreset;
@property int frameRate;
@property unsigned int outputPixelFmt;
@property (readonly, getter=isFrontFacingCameraPresent) BOOL frontFacingCameraPresent;
@property (readonly, getter=isBackFacingCameraPresent) BOOL backFacingCameraPresent;
@property (readonly) AVCaptureDevice *inputCamera;
@property (nonatomic) long long outputImageOrientation;
@property (nonatomic) BOOL bMirrorFrontCamera;
@property (nonatomic) BOOL bMirrorRearCamera;
@property (weak, nonatomic) id<LCCameraOutputDelegate> outputDelegate;
@property (weak, nonatomic) id<LCCameraStateDelegate> stateDelegate;
@property (nonatomic) long long startErrorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isBackFacingCameraPresent;
+ (BOOL)isFrontFacingCameraPresent;
+ (long long)uiOrientationToAVOrientation:(long long)a0;

- (void)switchCamera;
- (void)startCameraCaptureIfNeeded;
- (BOOL)isTorchSupported;
- (struct CGSize { double x0; double x1; })captureDimension;
- (id)initWithSessionPreset:(id)a0 cameraPosition:(long long)a1;
- (void)reconfigCamera;
- (void)stopCameraCapture;
- (void)removeInputsAndOutputs;
- (void)runSyncOnSessionQueue:(id /* block */)a0;
- (void)runASyncOnSessionQueue:(id /* block */)a0;
- (id)getCameraActiveFormat;
- (int)getMaxFrameRate;
- (int)getMinFrameRate;
- (id)videoCaptureConnection;
- (void)onCaptureSessionDidStartRunningNotification:(id)a0;
- (void)onCaptureSessionDidStopRunningNotification:(id)a0;
- (void)onCaptureSessionWasInterruptedNotification:(id)a0;
- (void)onCaptureSessionInterruptionEndedNotification:(id)a0;
- (void)onCaptureSessionRuntimeErrorNotification:(id)a0;
- (BOOL)addAudioInputsAndOutputs;
- (BOOL)removeAudioInputsAndOutputs;
- (void)startCameraCapture;
- (float)cameraISO;
- (void)setCaptureFocusMode:(long long)a0;
- (void)pauseCameraCapture;
- (void)resumeCameraCapture;
- (long long)cameraPosition;
- (void)setTorchMode:(long long)a0;
- (void).cxx_destruct;
- (void)toggleTorch;
- (id)init;
- (void)setWhiteBalanceMode:(long long)a0;
- (void)addObserver;
- (void)setExposureMode:(long long)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)captureOutput:(id)a0 didDropSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)dealloc;
- (void)removeObserver;
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)processAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
