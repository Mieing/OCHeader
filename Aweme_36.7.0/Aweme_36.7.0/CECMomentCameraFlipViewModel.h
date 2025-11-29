@class CECMomentCameraMultiCameraViewModel, CECMomentCameraPreviewViewModel, CECMomentCameraScaleViewModel, CECMomentCameraSwitchModeViewModel, UIView, NSString;
@protocol AFDMomentCameraPerformanceTrackService, CECMomentCameraSwitchTabService, CECMomentCameraFlowService, CECMomentCameraService;

@interface CECMomentCameraFlipViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraLifeCircleEvent, CECMomentCameraFlowServiceSubscriber, ACCCameraControlEvent>

@property (nonatomic) BOOL shouldShowFlipButton;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL forbidDetectingFace;
@property (nonatomic) BOOL isSwitchingCamera;
@property (readonly, weak, nonatomic) CECMomentCameraScaleViewModel *scaleViewModel;
@property (readonly, weak, nonatomic) CECMomentCameraPreviewViewModel *previewViewModel;
@property (readonly, weak, nonatomic) CECMomentCameraMultiCameraViewModel *multiCameraViewModel;
@property (weak, nonatomic) CECMomentCameraSwitchModeViewModel *switchModeViewModel;
@property (copy, nonatomic) id /* block */ didSwitchDeviceBlock;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (weak, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (nonatomic) UIView *preview;
@property (nonatomic) UIView *secondPreview;
@property (copy, nonatomic) NSString *flipButtonAccessibilityLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)switchCamera;
- (void)onDidSwitchToCameraPosition:(long long)a0;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)p_configSwapButtonAccessiblity;
- (void)trackFlipCamera;
- (void)syncFlipPreviewStateForSingleMode;
- (void).cxx_destruct;

@end
