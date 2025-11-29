@class UIButton, AFDMomentCameraBeautyViewModel;
@protocol AFDMomentCameraFlowService;

@interface AFDMomentCameraBeautyComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) AFDMomentCameraBeautyViewModel *viewModel;
@property (retain, nonatomic) UIButton *beautyButton;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;

- (void)bindObserver;
- (void)componentDidLoad;
- (void).cxx_destruct;

@end
