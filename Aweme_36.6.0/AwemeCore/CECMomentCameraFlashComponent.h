@class UIButton, NSString, CECMomentCameraFlashViewModel;
@protocol CECMomentCameraFlowService, CECMomentCameraService, CECMomentCameraSwitchTabService;

@interface CECMomentCameraFlashComponent : AFDMomentCameraBaseComponent <ACCRecorderEvent, CECMomentCameraLifeCircleEvent>

@property (retain, nonatomic) CECMomentCameraFlashViewModel *viewModel;
@property (retain, nonatomic) UIButton *flashButton;
@property (retain, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onWillStartVideoRecordWithRate:(double)a0;
- (void)cameraService:(id)a0 didTakeAction:(long long)a1 error:(id)a2 data:(id)a3;
- (void)bindObserver;
- (void)componentDidLoad;
- (void)p_syncFlashButtonNormalState;
- (void).cxx_destruct;

@end
