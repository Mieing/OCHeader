@class UIButton, AFDMomentCameraFlipViewModel;
@protocol AFDMomentCameraFlowService;

@interface AFDMomentCameraFlipComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) AFDMomentCameraFlipViewModel *viewModel;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (retain, nonatomic) UIButton *flipButton;

- (void)bindObserver;
- (void)componentDidLoad;
- (void)didTapFlipButton;
- (void).cxx_destruct;

@end
