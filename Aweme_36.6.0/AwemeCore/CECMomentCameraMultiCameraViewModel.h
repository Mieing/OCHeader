@class CECMomentCameraPreviewViewModel, NSString, UIImage, CECMomentCameraSwitchModeViewModel;
@protocol CECMomentCameraFlowService, CECMomentCameraService, CECMomentCameraCaptureService;

@interface CECMomentCameraMultiCameraViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraLifeCircleEvent, CECMomentCameraFlowServiceSubscriber>

@property (nonatomic) BOOL shouldShowResultImageSecondPreview;
@property (nonatomic) BOOL shouldShowSecondBlurView;
@property (nonatomic) BOOL shouldShowSecondBlurViewWithoutAnimation;
@property (retain, nonatomic) UIImage *secondBlurredImage;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (weak, nonatomic) id<CECMomentCameraCaptureService> captureService;
@property (weak, nonatomic) CECMomentCameraPreviewViewModel *previewViewModel;
@property (weak, nonatomic) CECMomentCameraSwitchModeViewModel *switchModeViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)onMultiCameraFirstFrameDidRender:(id)a0;
- (id)applyGaussianBlur:(id)a0 radius:(long long)a1;
- (void)showBlurViewAnimated:(BOOL)a0;
- (void)hideBlurViewAnimated:(BOOL)a0;
- (void)stopVideoCaptureWithStateCheck;
- (void)secondPrevieSaveBlurImage:(id)a0;
- (void).cxx_destruct;
- (void)stopVideoCapture;

@end
