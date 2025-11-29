@class NSString, NSObject;
@protocol ACCServiceProvideRecipe, VERecorderPublicProtocol, CECMomentCameraService, OS_dispatch_queue;

@interface CECMomentCameraCaptureServiceImpls : NSObject <CECMomentCameraCaptureService>

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceResolver;
@property (retain, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cameraOperationQueue;
@property (copy, nonatomic) id /* block */ startPreviewBlock;
@property (copy, nonatomic) id /* block */ stopPreviewBlock;
@property (copy, nonatomic) id /* block */ startAudioBlock;
@property (copy, nonatomic) id /* block */ stopAudioBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configResolver:(id)a0;
- (BOOL)p_verifyCameraContext;
- (void)startVideoCaptureWithoutAuthCheckWithCompleteHandler:(id /* block */)a0;
- (void)startAudioCaptureWithCompleteHandler:(id /* block */)a0;
- (void)stopVideoCaptureWithoutAuthCheck;
- (void)startVideoCaptureWithCompleteHandler:(id /* block */)a0;
- (void)p_startVideoCapture;
- (void)p_stopVideoCapture;
- (void)p_startAudioCaptureWithCompleteHandler:(id /* block */)a0;
- (void)p_stopAudioCapture;
- (void)p_startVideoCaptureWithoutAuthCheckWithCompleteHandler:(id /* block */)a0;
- (void)p_startVideoCaptureWithCompleteHandler:(id /* block */)a0;
- (void)p_stopVideoCaptureWithoutAuthCheck;
- (void).cxx_destruct;
- (id)init;
- (void)stopAudioCapture;
- (void)startVideoCapture;
- (void)stopVideoCapture;

@end
