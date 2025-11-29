@class UIButton, CECMomentCameraCaptureRatioViewModel;

@interface CECMomentCameraCaptureRatioComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) UIButton *captureRatioButton;
@property (retain, nonatomic) CECMomentCameraCaptureRatioViewModel *viewModel;

- (void)bindObserver;
- (void)componentDidLoad;
- (void)didTapRatioButton:(id)a0;
- (void).cxx_destruct;

@end
