@class CECMomentCameraBeautyViewModel, UIButton;
@protocol CECMomentCameraFlowService, CECMomentCameraSwitchTabService;

@interface CECMomentCameraBeautyComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) CECMomentCameraBeautyViewModel *viewModel;
@property (retain, nonatomic) UIButton *beautyButton;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;

- (void)bindObserver;
- (void)componentDidLoad;
- (void).cxx_destruct;

@end
