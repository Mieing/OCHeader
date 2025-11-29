@class NSString, AFDMomentCameraFlipViewModel;
@protocol AFDMomentCameraFlowService, AFDMomentCameraService;

@interface AFDMomentCameraCaptureViewModel : AFDMomentCameraBaseViewModel <AFDMomentCameraLifeCircleEvent>

@property (nonatomic) BOOL shouldShowCaptureButton;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL userInteractionEnabled;
@property (weak, nonatomic) AFDMomentCameraFlipViewModel *flipViewModel;
@property (nonatomic) BOOL canStartCapture;
@property (weak, nonatomic) id<AFDMomentCameraService> cameraService;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
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
