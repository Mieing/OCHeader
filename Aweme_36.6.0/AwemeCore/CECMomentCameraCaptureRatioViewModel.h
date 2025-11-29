@class CECMomentCameraPreviewViewModel, NSString, UIImage, CECMomentCameraSubModeViewModel;
@protocol CECMomentCameraSwitchTabService, CECMomentCameraFlowService, CECMomentCameraSubModeService, CECMomentCameraService;

@interface CECMomentCameraCaptureRatioViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraFlowServiceSubscriber, CECMomentCameraSubModeSwitchServiceSubscriber, CECMomentCameraCaptureRatioInterface>

@property (nonatomic) BOOL isLargerCaptureRatio;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL isDisabled;
@property (retain, nonatomic) UIImage *captureRatioIcon;
@property (nonatomic) BOOL animateChanges;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (readonly, weak, nonatomic) CECMomentCameraPreviewViewModel *previewViewModel;
@property (readonly, weak, nonatomic) CECMomentCameraSubModeViewModel *subModeViewModel;
@property (copy, nonatomic) id /* block */ didSwitchDeviceBlock;
@property (copy, nonatomic) NSString *ratioButtonAccessibilityLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)didTapCaptureRatioButton;
- (void)subModeServiceWillChangeToMode:(id)a0 fromMode:(id)a1;
- (void)injectService;
- (id)initWithViewModelFactory:(id)a0;
- (void)updateCaptureRationWithResetScale:(BOOL)a0;
- (void)p_configRatioButtonAccessibility;
- (void)p_switchRatioBlock;
- (void)trackSelectCaptureRatioSwitch;
- (void)p_changeRatioWhenModeSwitch;
- (void).cxx_destruct;

@end
