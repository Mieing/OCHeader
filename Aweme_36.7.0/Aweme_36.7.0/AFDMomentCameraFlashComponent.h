@class UIButton, NSString, AFDMomentCameraFlashViewModel;
@protocol AFDMomentCameraFlowService, AFDMomentCameraService;

@interface AFDMomentCameraFlashComponent : AFDMomentCameraBaseComponent <CMCRecorderEvent, AFDMomentCameraLifeCircleEvent>

@property (retain, nonatomic) AFDMomentCameraFlashViewModel *viewModel;
@property (retain, nonatomic) UIButton *flashButton;
@property (retain, nonatomic) id<AFDMomentCameraService> cameraService;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onWillStartVideoRecordWithRate:(double)a0;
- (void)cameraService:(id)a0 didTakeAction:(long long)a1 error:(id)a2 data:(id)a3;
- (void)bindObserver;
- (void)componentDidLoad;
- (void).cxx_destruct;

@end
