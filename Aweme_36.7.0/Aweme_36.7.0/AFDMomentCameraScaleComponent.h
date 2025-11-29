@class UIButton, AFDMomentCameraScaleViewModel;

@interface AFDMomentCameraScaleComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) UIButton *scaleButton;
@property (retain, nonatomic) AFDMomentCameraScaleViewModel *viewModel;

- (void)bindObserver;
- (void)componentDidLoad;
- (void).cxx_destruct;

@end
