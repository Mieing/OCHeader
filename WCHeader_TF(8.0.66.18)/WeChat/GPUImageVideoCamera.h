@class NSDate, NSString, GLProgram, AVCaptureSession, NSObject, AVCaptureAudioDataOutput, AVCaptureDeviceInput, AVCaptureDevice, AVCaptureVideoDataOutput;
@protocol GPUImageVideoCameraDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface GPUImageVideoCamera : GPUImageOutput <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate> {
    unsigned long long numberOfFramesCaptured;
    double totalFrameTimeDuringCapture;
    AVCaptureDevice *_microphone;
    AVCaptureDeviceInput *videoInput;
    AVCaptureVideoDataOutput *videoOutput;
    BOOL capturePaused;
    unsigned long long outputRotation;
    unsigned long long internalRotation;
    NSObject<OS_dispatch_semaphore> *frameRenderingSemaphore;
    BOOL captureAsYUV;
    unsigned int luminanceTexture;
    unsigned int chrominanceTexture;
    AVCaptureDeviceInput *audioInput;
    AVCaptureAudioDataOutput *audioOutput;
    NSDate *startingCaptureTime;
    NSObject<OS_dispatch_queue> *cameraProcessingQueue;
    NSObject<OS_dispatch_queue> *audioProcessingQueue;
    NSObject<OS_dispatch_queue> *delegateProcessingQueue;
    GLProgram *yuvConversionProgram;
    int yuvConversionPositionAttribute;
    int yuvConversionTextureCoordinateAttribute;
    int yuvConversionLuminanceTextureUniform;
    int yuvConversionChrominanceTextureUniform;
    int yuvConversionMatrixUniform;
    const float *_preferredConversion;
    BOOL isFullYUVRange;
    int imageBufferWidth;
    int imageBufferHeight;
    BOOL addedAudioInputsDueToEncodingTarget;
    BOOL _useCustomCaptureDevice;
}

@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, retain, nonatomic) AVCaptureSession *captureSession;
@property (copy, nonatomic) NSString *captureSessionPreset;
@property int frameRate;
@property (readonly, getter=isFrontFacingCameraPresent) BOOL frontFacingCameraPresent;
@property (readonly, getter=isBackFacingCameraPresent) BOOL backFacingCameraPresent;
@property (nonatomic) BOOL runBenchmark;
@property (readonly) AVCaptureDevice *inputCamera;
@property (nonatomic) long long outputImageOrientation;
@property (nonatomic) BOOL horizontallyMirrorFrontFacingCamera;
@property (nonatomic) BOOL horizontallyMirrorRearFacingCamera;
@property (nonatomic) id<GPUImageVideoCameraDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isBackFacingCameraPresent;
+ (BOOL)isFrontFacingCameraPresent;

- (id)init;
- (id)initWithSessionPreset:(id)a0 cameraPosition:(long long)a1;
- (id)initWithSessionPreset:(id)a0 cameraPosition:(long long)a1 useCustomCaptureDevice:(BOOL)a2;
- (id)getCaptureDevice:(long long)a0;
- (id)defaultGetCaptureDevice:(long long)a0;
- (id)customGetCaptureDevice:(long long)a0;
- (id)framebufferForOutput;
- (void)dealloc;
- (BOOL)addAudioInputsAndOutputs;
- (BOOL)removeAudioInputsAndOutputs;
- (void)removeInputsAndOutputs;
- (void)addTarget:(id)a0 atTextureLocation:(long long)a1;
- (void)startCameraCapture;
- (void)stopCameraCapture;
- (void)stopCameraCaptureWaitUntilDone;
- (void)pauseCameraCapture;
- (void)resumeCameraCapture;
- (void)rotateCamera;
- (long long)cameraPosition;
- (id)videoCaptureConnection;
- (void)updateTargetsForVideoCameraUsingCacheTextureAtWidth:(int)a0 height:(int)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)processAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)convertYUVToRGBOutput;
- (double)averageFrameDurationDuringCapture;
- (void)resetBenchmarkAverage;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)setAudioEncodingTarget:(id)a0;
- (void)updateOrientationSendToTargets;
- (void).cxx_destruct;

@end
