@class CECMomentCameraSettings, CECMomentCameraPreviewViewModel, CECMomentCameraFlipViewModel, CECMomentCameraSwitchModeViewModel, CECMomentCameraMultiCameraViewModel, NSString, UIButton;
@protocol CECMomentCameraSwitchTabService, CECMomentCameraFlowService, ACCUIAlertViewProtocol, CECMomentCameraService, CECMomentCameraCaptureService;

@interface CECMomentCameraSwitchModeComponent : AFDMomentCameraBaseComponent <CECMomentCameraLifeCircleEvent>

@property (retain, nonatomic) UIButton *switchButton;
@property (nonatomic) BOOL hasShowSwichAlert;
@property (nonatomic) BOOL hasShowFaceToast;
@property (nonatomic) BOOL toastTimeLimitPassed;
@property (weak, nonatomic) CECMomentCameraSettings *cameraSettings;
@property (retain, nonatomic) id<ACCUIAlertViewProtocol> alertView;
@property (retain, nonatomic) CECMomentCameraSwitchModeViewModel *viewModel;
@property (weak, nonatomic) CECMomentCameraPreviewViewModel *previewViewModel;
@property (weak, nonatomic) CECMomentCameraFlipViewModel *flipViewModel;
@property (retain, nonatomic) CECMomentCameraMultiCameraViewModel *multiCameraViewModel;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (retain, nonatomic) id<CECMomentCameraCaptureService> captureService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCreateCameraCompleteWithCamera:(id)a0;
- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)p_bindObserver;
- (void)componentDidLoad;
- (void)onMultiCameraFirstFrameDidRender:(id)a0;
- (void)updateSwitchBar;
- (void)switchToMultiCameraMode;
- (void)switchToSingleCameraMode;
- (void)p_showSecondPreview;
- (void)p_hiddenSecondPreview;
- (id)createAlertView;
- (void)registerFaceResult;
- (void)p_liftedTimelimit;
- (void)switchButtonClick;
- (void)addBlurViewForSwitch:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
