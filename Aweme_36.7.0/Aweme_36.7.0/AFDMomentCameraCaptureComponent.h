@class AFDMomentCameraCaptureViewModel, UIButton, UIView;

@interface AFDMomentCameraCaptureComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) AFDMomentCameraCaptureViewModel *viewModel;
@property (retain, nonatomic) UIView *captureContainerView;
@property (retain, nonatomic) UIView *captureRingView;
@property (retain, nonatomic) UIButton *captureButtonView;

- (void)bindObserver;
- (void)componentDidLoad;
- (void)setupConstraints;
- (void).cxx_destruct;

@end
