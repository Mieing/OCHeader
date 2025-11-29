@class AVCaptureSession, AVCaptureDeviceInput, AVCapturePhotoOutput, NSString, AVCaptureVideoPreviewLayer, NSObject;
@protocol OS_dispatch_queue, IESLiveAnchorContractPhotoRecorderDelegate;

@interface IESLiveAnchorContractPhotoRecorder : NSObject <AVCapturePhotoCaptureDelegate>

@property (retain, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) AVCaptureDeviceInput *backCameraInput;
@property (retain, nonatomic) AVCapturePhotoOutput *photoOutput;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *captureQueue;
@property (nonatomic) unsigned long long flashMode;
@property (weak, nonatomic) id<IESLiveAnchorContractPhotoRecorderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCurrentFlashMode:(unsigned long long)a0;
- (unsigned long long)currentFlashMode;
- (void)addBackCameraInput;
- (id)createAVCaptureDeviceInputWithDevice:(id)a0;
- (void)addPhotoOutput;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasFlash;
- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;
- (void)startPreview;
- (void)stopPreview;
- (void)captureImage;
- (void)setupCaptureSession;
- (id)cameraWithPosition:(long long)a0;

@end
