@class UIButton, AFDMomentCameraDownloadViewModel;
@protocol AFDMomentCameraFlowService;

@interface AFDMomentCameraDownloadComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) UIButton *downloadButton;
@property (retain, nonatomic) AFDMomentCameraDownloadViewModel *viewModel;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;

- (void)bindObserver;
- (void)componentDidLoad;
- (void).cxx_destruct;

@end
