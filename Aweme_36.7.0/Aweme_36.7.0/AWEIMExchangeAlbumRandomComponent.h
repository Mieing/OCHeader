@class UIView, AWEIMExchangeCameraPreviewViewModel, NSArray, NSTimer, NSString, UIImageView, UIButton, AWEIMExchangeAlbumRandomViewModel, PHAsset, AWEIMSectorProgressView, AWEIMExchangeCameraTraceViewModel, UIImpactFeedbackGenerator;
@protocol AFDMomentCameraFlowService, IESIMPopoverProtocol, AFDMomentCameraService;

@interface AWEIMExchangeAlbumRandomComponent : AFDMomentCameraBaseComponent <AFDMomentCameraLifeCircleEvent>

@property (weak, nonatomic) UIView *preview;
@property (weak, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<AFDMomentCameraService> cameraService;
@property (retain, nonatomic) UIView<IESIMPopoverProtocol> *popover;
@property (retain, nonatomic) AWEIMExchangeAlbumRandomViewModel *viewModel;
@property (retain, nonatomic) AWEIMExchangeCameraTraceViewModel *traceViewModel;
@property (retain, nonatomic) AWEIMExchangeCameraPreviewViewModel *previewViewModel;
@property (retain, nonatomic) NSArray *imageArray;
@property (retain, nonatomic) UIImageView *animationImageView;
@property (retain, nonatomic) AWEIMSectorProgressView *loadingView;
@property (retain, nonatomic) UIButton *randomButton;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSString *iCloudLoadIdentifier;
@property (retain, nonatomic) PHAsset *preloadTempAsset;
@property (nonatomic) BOOL firstPreload;
@property (nonatomic) BOOL iCloudLoading;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactLight;
@property (nonatomic) int animateImageIndex;
@property (nonatomic) double animationPictureCount;
@property (nonatomic) float randomTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)bindObserver;
- (void)componentDidLoad;
- (void)albumRequestForAuditingWithCallback:(id /* block */)a0;
- (void)componentWillAppear:(BOOL)a0;
- (void)componentWillDisappear:(BOOL)a0;
- (void)albumRequestAuthority:(id /* block */)a0;
- (void)showRequestAlert;
- (void)showGoToSettingsAlertWithTitle:(id)a0 content:(id)a1 confirmText:(id)a2 cancelText:(id)a3 confirmBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (void)beginRandomAction;
- (void)p_tryShowTips;
- (void)p_removePopover;
- (void)p_preloadAnimationImageArray;
- (void)p_resetImage;
- (void)p_resetLoading;
- (void)p_endVibrate;
- (void)p_updateCapturedImage:(id)a0;
- (void)p_handleAnimatinView:(id)a0 complete:(id /* block */)a1;
- (void)startPictureRandomAnimation:(id)a0 complete:(id /* block */)a1;
- (void)p_doChangeImageAnimation:(id)a0;
- (void)p_doVibrateWithTimer;
- (void)p_doVibrate;
- (void).cxx_destruct;

@end
