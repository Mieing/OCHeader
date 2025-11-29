@class UIView, AWEIMExchangeCameraPreviewViewModel, NSString, UIImageView, UIButton, AWEMCEditViewPlayer, NSObject, AFDMomentCameraPreviewCropView;
@protocol AFDMomentCameraFlowService, AFDMomentCameraPerformanceTrackService, AFDMomentCameraService, AFDMCEditService, OS_dispatch_queue;

@interface AWEIMExchangeCameraPreviewComponent : AFDMomentCameraBaseComponent <AFDMomentCameraFlowServiceSubscriber, AFDMomentCameraPreviewCropViewDelegate>

@property (retain, nonatomic) AWEIMExchangeCameraPreviewViewModel *viewModel;
@property (weak, nonatomic) UIView *preview;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) AFDMomentCameraPreviewCropView *previewCropView;
@property (retain, nonatomic) UIImageView *previewBlurView;
@property (retain, nonatomic) UIButton *cameraAuthorizeButton;
@property (retain, nonatomic) UIView *videoPreviewView;
@property (retain, nonatomic) UIView *disabledView;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cameraOperationQueue;
@property (nonatomic) BOOL isAppeared;
@property (copy, nonatomic) id /* block */ startPreviewBlock;
@property (copy, nonatomic) id /* block */ stopPreviewBlock;
@property (retain, nonatomic) AWEMCEditViewPlayer *player;
@property (weak, nonatomic) id<AFDMomentCameraService> cameraService;
@property (weak, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<AFDMCEditService> editService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
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
- (void)componentDidDisappear:(BOOL)a0;
- (void)p_createPlayerIfNeeded;
- (void)p_releasePlayerIfNeeded;
- (void)cameraPreviewCropViewWillBeginDragging:(id)a0;
- (void)cameraPreviewCropViewBeginZooming:(id)a0;
- (void)cameraPreviewCropViewDidChangeDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
