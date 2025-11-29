@class UIImage, NSString;
@protocol AFDMomentCameraFlowService, AFDMomentCameraService;

@interface AFDMomentCameraFlashViewModel : AFDMomentCameraBaseViewModel <AFDMomentCameraFlowServiceSubscriber>

@property (nonatomic) BOOL isFlashOn;
@property (nonatomic) BOOL shouldShowFlashButton;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL hidden;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<AFDMomentCameraService> cameraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)onCreateCameraCompleteWithCamera:(id)a0;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)toggleFlashMode;
- (void)resetFlashMode;
- (void).cxx_destruct;

@end
