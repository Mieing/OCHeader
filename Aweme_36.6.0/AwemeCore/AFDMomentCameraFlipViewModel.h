@class AFDMomentCameraPreviewViewModel, AFDMomentCameraScaleViewModel, NSString;
@protocol AFDMomentCameraFlowService, AFDMomentCameraService;

@interface AFDMomentCameraFlipViewModel : AFDMomentCameraBaseViewModel <AFDMomentCameraLifeCircleEvent, AFDMomentCameraFlowServiceSubscriber>

@property (nonatomic) BOOL shouldShowFlipButton;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL userInteractionEnabled;
@property (readonly, weak, nonatomic) AFDMomentCameraScaleViewModel *scaleViewModel;
@property (readonly, weak, nonatomic) AFDMomentCameraPreviewViewModel *previewViewModel;
@property (copy, nonatomic) id /* block */ didSwitchDeviceBlock;
@property (weak, nonatomic) id<AFDMomentCameraService> cameraService;
@property (weak, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)switchCamera;
- (void)cameraService:(id)a0 didTakeAction:(long long)a1 error:(id)a2 data:(id)a3;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void).cxx_destruct;

@end
