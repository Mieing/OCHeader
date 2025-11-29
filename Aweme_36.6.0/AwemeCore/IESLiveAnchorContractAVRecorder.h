@class AVCaptureMovieFileOutput, AVCaptureSession, AVCaptureDeviceInput, NSString, AVCaptureVideoPreviewLayer, NSObject;
@protocol OS_dispatch_queue, IESLiveAnchorContractAVRecorderDelegate;

@interface IESLiveAnchorContractAVRecorder : NSObject <AVCaptureFileOutputRecordingDelegate>

@property (retain, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) AVCaptureDeviceInput *backCameraInput;
@property (retain, nonatomic) AVCaptureDeviceInput *frontCameraInput;
@property (retain, nonatomic) AVCaptureDeviceInput *audioMicInput;
@property (retain, nonatomic) AVCaptureMovieFileOutput *movieOutput;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (nonatomic) BOOL currentIsFront;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *captureQueue;
@property (weak, nonatomic) id<IESLiveAnchorContractAVRecorderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addFrontCameraInput;
- (void)addAudioMicInput;
- (void)addVideoOutput;
- (id)generateOutputUrl;
- (void)addBackCameraInput;
- (id)createAVCaptureDeviceInputWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stopCapture;
- (void)captureOutput:(id)a0 didFinishRecordingToOutputFileAtURL:(id)a1 fromConnections:(id)a2 error:(id)a3;
- (void)stopRecording;
- (void)startRecording;
- (void)startCapture;
- (void)flipCamera;
- (void)setupCaptureSession;
- (id)cameraWithPosition:(long long)a0;

@end
