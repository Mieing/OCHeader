@class UIImage, NSString, HTSVideoData;
@protocol AFDMomentCameraFlowService, AFDMomentCameraPerformanceTrackService, AFDMomentContextService, AFDMomentCameraService;

@interface AWEIMExchangeCameraPreviewViewModel : AFDMomentCameraBaseViewModel <AFDMomentCameraLifeCircleEvent, AFDMomentCameraFlowServiceSubscriber>

@property (retain, nonatomic) UIImage *blurredImage;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (nonatomic) BOOL shouldShowBlurView;
@property (nonatomic) BOOL shouldShowResultImagePreview;
@property (nonatomic) BOOL shouldShowResultVideoPreview;
@property (nonatomic) BOOL isPreviewing;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL haveCameraAuth;
@property (weak, nonatomic) id<AFDMomentCameraService> cameraService;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) UIImage *resultPreviewImageForUpload;
@property (nonatomic) BOOL shouldShowUploadResultPreview;
@property (nonatomic) BOOL shouldShowUploadResultPreviewGuide;
@property (nonatomic) struct CGSize { double width; double height; } uploadImageVisibileSize;
@property (nonatomic) BOOL shouldDelayDismissUploadResultPreview;
@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (readonly, nonatomic) BOOL haveMicAuth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)cameraService:(id)a0 didTakeAction:(long long)a1 error:(id)a2 data:(id)a3;
- (void)triggerDelayEnableUserInteraction;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (id)applyGaussianBlur:(id)a0 radius:(long long)a1;
- (void)stopVideoCaptureWithStateCheck;
- (void)didTapCameraAuthorizeButton;
- (void)startVideoCaptureWithStateCheck;
- (void)hiddenUploadResultPreviewGuide;
- (void)updateUploadPreviewDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_showCropViewGuideIfNeed;
- (void)showBlurViewIfCould;
- (void)hideBlurView;
- (void)updateUploadImageVisibileSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_saveBlurImage:(id)a0;
- (void)needRequestMicAuthorize;
- (void).cxx_destruct;
- (void)stopAudioCapture;
- (void)startVideoCapture;
- (void)stopVideoCapture;

@end
