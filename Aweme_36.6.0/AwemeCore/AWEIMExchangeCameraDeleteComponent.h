@class UIButton, AWEIMExchangeCameraDeleteViewModel;
@protocol AFDMomentCameraFlowService;

@interface AWEIMExchangeCameraDeleteComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) AWEIMExchangeCameraDeleteViewModel *viewModel;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;

- (void)bindObserver;
- (void)didTapDeleteButton;
- (void)componentDidLoad;
- (void).cxx_destruct;

@end
