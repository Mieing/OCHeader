@class UIButton, CECMomentCameraScaleViewModel;
@protocol CECMomentCameraService, CECMomentCameraSwitchTabService;

@interface CECMomentCameraScaleComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) UIButton *scaleButton;
@property (retain, nonatomic) CECMomentCameraScaleViewModel *viewModel;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;

- (void)bindObserver;
- (void)componentDidLoad;
- (void)p_resetScaleButtonTitle:(double)a0;
- (void).cxx_destruct;

@end
