@class UIView, NSString, CECMomentCameraPreviewCropView, CECMomentCameraSubModeViewModel, CECMomentCameraTextViewModel, UIButton, CECMomentCameraPreviewViewModel, UIImageView, CECMomentCameraEditRatioViewModel, CECMCEditViewPlayer;
@protocol AFDMomentCameraPerformanceTrackService, CECMomentCameraSwitchTabService, CECMomentCameraFlowService, AFDMCEditService, CECMomentCameraService;

@interface CECMomentCameraPreviewComponent : AFDMomentCameraBaseComponent <CECMomentCameraFlowServiceSubscriber, CECMomentCameraPreviewCropViewDelegate>

@property (retain, nonatomic) CECMomentCameraPreviewViewModel *viewModel;
@property (retain, nonatomic) CECMomentCameraTextViewModel *textViewModel;
@property (retain, nonatomic) CECMomentCameraEditRatioViewModel *editRatioViewModel;
@property (weak, nonatomic) UIView *preview;
@property (weak, nonatomic) UIView *secondPreview;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) CECMomentCameraPreviewCropView *previewCropView;
@property (retain, nonatomic) UIImageView *previewBlurView;
@property (retain, nonatomic) UIButton *cameraAuthorizeButton;
@property (retain, nonatomic) UIButton *micAuthorizeButton;
@property (retain, nonatomic) UIView *videoPreviewView;
@property (retain, nonatomic) UIView *disabledView;
@property (retain, nonatomic) UIView *disableContainerView;
@property (retain, nonatomic) UIImageView *livePhotoTagView;
@property (nonatomic) BOOL isLivePhotoOn;
@property (nonatomic) BOOL isLivePhotoPlaying;
@property (nonatomic) BOOL isLivePhotoMoving;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastDisplayRect;
@property (nonatomic) BOOL isAppeared;
@property (retain, nonatomic) CECMCEditViewPlayer *player;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (weak, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<AFDMCEditService> editService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (retain, nonatomic) CECMomentCameraSubModeViewModel *subModeViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (void)handleApplicationDidBecomeActive;
- (void)handleApplicationWillResignActive;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)componentDidLoad;
- (void)componentWillAppear:(BOOL)a0;
- (void)componentWillDisappear:(BOOL)a0;
- (void)componentDidLayoutSubviews;
- (void)componentDidDisappear:(BOOL)a0;
- (void)remakeDisableContainerViewConstraints;
- (BOOL)needCamera;
- (void)p_hiddenLivePhotoTagView;
- (void)p_showLivePhotoTagViewIfNeeded;
- (void)trackZoomPhoto:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)livePhotoTagClicked;
- (void)p_createPlayerIfNeeded;
- (void)p_releasePlayerIfNeeded;
- (void)trackLivePhotoTagClicked;
- (void)cameraPreviewCropViewWillBeginDragging:(id)a0;
- (void)cameraPreviewCropViewBeginZooming:(id)a0;
- (void)cameraPreviewCropViewDidChangeDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cameraPreviewCropViewDidEndChangeWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)livePhotoWillBeginPlayBack;
- (void)livePhotoDidEndPlayBack;
- (void).cxx_destruct;

@end
