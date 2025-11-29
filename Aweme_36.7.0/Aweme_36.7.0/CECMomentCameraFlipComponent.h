@class UIButton, CECMomentCameraFlipViewModel;
@protocol CECMomentCameraFlowService, CECMomentCameraSwitchTabService;

@interface CECMomentCameraFlipComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) CECMomentCameraFlipViewModel *viewModel;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (nonatomic) BOOL flipFlag;
@property (retain, nonatomic) UIButton *flipButton;

- (void)bindObserver;
- (void)componentDidLoad;
- (void)didTapFlipButton;
- (void).cxx_destruct;

@end
