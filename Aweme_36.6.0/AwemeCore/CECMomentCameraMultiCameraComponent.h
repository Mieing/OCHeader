@class NSString, CECMomentCameraPreviewViewModel, CECMomentCameraMultiCameraViewModel, CECMomentCameraSwitchModeViewModel, UIView, UIImageView, NSObject;
@protocol AFDMomentCameraPerformanceTrackService, CECMomentCameraSwitchTabService, CECMomentCameraFlowService, CECMomentCameraService, OS_dispatch_queue;

@interface CECMomentCameraMultiCameraComponent : AFDMomentCameraBaseComponent <CECMomentCameraFlowServiceSubscriber, CECMomentCameraLifeCircleEvent, ACCCameraControlEvent>

@property (retain, nonatomic) CECMomentCameraMultiCameraViewModel *viewModel;
@property (retain, nonatomic) CECMomentCameraPreviewViewModel *previewViewModel;
@property (weak, nonatomic) CECMomentCameraSwitchModeViewModel *switchModeViewModel;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraService> cameraService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (weak, nonatomic) UIView *preview;
@property (weak, nonatomic) UIView *secondPreview;
@property (retain, nonatomic) UIImageView *secondPreviewImageView;
@property (retain, nonatomic) UIImageView *secondPreviewBlurView;
@property (retain, nonatomic) UIView *secondFlashView;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cameraOperationQueue;
@property (copy, nonatomic) id /* block */ stopPreviewBlock;
@property (nonatomic) BOOL isSwitchingCameraPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cameraService:(id)a0 didTakeAction:(long long)a1 error:(id)a2 data:(id)a3;
- (void)onDidSwitchToCameraPosition:(long long)a0;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)componentDidLoad;
- (void)componentWillAppear:(BOOL)a0;
- (void)componentWillDisappear:(BOOL)a0;
- (void)p_setInitialFrameRateForCamera;
- (void)bindObserve;
- (void)p_responseToCaptureSystemPressureStateLevelChanged:(id)a0 lowPowerModeEnabled:(BOOL)a1;
- (void)componentDidDisappear:(BOOL)a0;
- (void)addPowerStateChangeNotificationObserve;
- (void).cxx_destruct;

@end
