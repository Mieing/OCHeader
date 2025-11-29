@class AVCaptureVideoPreviewLayer, NSString, AVCaptureMovieFileOutput, AVCaptureStillImageOutput, AVCaptureDepthDataOutput, AVCaptureDevice, NSObject, AVCaptureDeviceInput, AVCaptureVideoDataOutput, AVCaptureDataOutputSynchronizer;
@protocol OS_dispatch_queue;

@interface CameraRecordDevice : CameraDevice <AVCaptureFileOutputRecordingDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureDataOutputSynchronizerDelegate> {
    AVCaptureMovieFileOutput *movieFileOutput;
    NSObject<OS_dispatch_queue> *videoProcessingQueue;
    BOOL _isDepthEnabled;
}

@property (retain, nonatomic) AVCaptureDevice *captureDevice;
@property (retain, nonatomic) AVCaptureDeviceInput *captureDeviceInput;
@property (retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput;
@property (retain, nonatomic) AVCaptureVideoDataOutput *videoOutput;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bufferQueue;
@property (retain, nonatomic) AVCaptureDepthDataOutput *depthDataOutput;
@property (retain, nonatomic) AVCaptureDataOutputSynchronizer *outputSynchronizer;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (copy, nonatomic) id /* block */ onGetGrightness;
@property (copy, nonatomic) id /* block */ onGetGrightness_showLux;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPosition:(long long)a0 deep:(BOOL)a1;
- (id)getCaptureDevice;
- (void)setupCaptureSession;
- (void)startRecord;
- (void)stopRecord;
- (void)captureOutput:(id)a0 didStartRecordingToOutputFileAtURL:(id)a1 fromConnections:(id)a2;
- (void)startDetectBrightness:(id /* block */)a0;
- (void)stopDetectBrightness;
- (void)startDetectBrightness_showLux:(id /* block */)a0;
- (void)stopDetectBrightness_showLux;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)captureOutput:(id)a0 didFinishRecordingToOutputFileAtURL:(id)a1 fromConnections:(id)a2 error:(id)a3;
- (void)dataOutputSynchronizer:(id)a0 didOutputSynchronizedDataCollection:(id)a1;
- (void).cxx_destruct;

@end
