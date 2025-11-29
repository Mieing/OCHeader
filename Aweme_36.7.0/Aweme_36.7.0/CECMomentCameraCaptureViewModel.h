@class CECMomentCameraSwitchModeViewModel, NSString, CECMomentCameraFlipViewModel;
@protocol AFDMomentCameraPerformanceTrackService, CECMomentCameraSwitchTabService, CECMomentCameraFlowService, CECMomentCameraService;

@interface CECMomentCameraCaptureViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraLifeCircleEvent>

@property (nonatomic) BOOL shouldShowCaptureButton;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL userInteractionEnabled;
@property (weak, nonatomic) CECMomentCameraFlipViewModel *flipViewModel;
@property (weak, nonatomic) CECMomentCameraSwitchModeViewModel *switchModeViewModel;
@property (nonatomic) BOOL canStartCapture;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)cameraService:(id)a0 didTakeAction:(long long)a1 error:(id)a2 data:(id)a3;
- (void)didTapCaptureButton;
- (void)p_updateWithState:(long long)a0;
- (void).cxx_destruct;

@end
