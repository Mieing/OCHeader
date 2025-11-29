@class UIImage, NSString, CECMomentCameraSwitchModeViewModel;
@protocol AFDMomentCameraPerformanceTrackService, CECMomentCameraSwitchTabService, CECMomentCameraFlowService, CECMomentCameraService;

@interface CECMomentCameraFlashViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraFlowServiceSubscriber, CECMomentCameraLifeCircleEvent, CECMomentCameraFlashInterface>

@property (nonatomic) BOOL isFlashOn;
@property (nonatomic) BOOL shouldShowFlashButton;
@property (nonatomic) BOOL shouldShowGray;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL hidden;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (weak, nonatomic) CECMomentCameraSwitchModeViewModel *switchModeViewModel;
@property (copy, nonatomic) NSString *flashButtonAccessibilityLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)onCreateCameraCompleteWithCamera:(id)a0;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)toggleFlashMode;
- (void)injectService;
- (void)resetFlashMode;
- (void)p_configFlashButtonAccessiblity;
- (void)observeSwitchMode;
- (void)updateFlashDisableState;
- (BOOL)computeFlashDisableState;
- (void).cxx_destruct;

@end
