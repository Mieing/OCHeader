@class CECMomentCameraMultiCameraViewModel, CECMomentCameraPreviewViewModel, CECMomentCameraDeleteViewModel, UIButton;
@protocol CECMomentCameraFlowService;

@interface CECMomentCameraDeleteComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) CECMomentCameraDeleteViewModel *viewModel;
@property (retain, nonatomic) CECMomentCameraMultiCameraViewModel *secondPreviewViewModel;
@property (retain, nonatomic) CECMomentCameraPreviewViewModel *previewViewModel;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;

- (void)bindObserver;
- (void)didTapDeleteButton;
- (void)componentDidLoad;
- (void).cxx_destruct;

@end
