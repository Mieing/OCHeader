@class NSArray, AFDMomentCameraFlipViewModel;
@protocol AFDMomentCameraFlowService, AFDMomentCameraService;

@interface AFDMomentCameraScaleViewModel : AFDMomentCameraBaseViewModel

@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL scaleFactorHidden;
@property (nonatomic) BOOL userInteractionEnabled;
@property (readonly, weak, nonatomic) AFDMomentCameraFlipViewModel *flipViewModel;
@property (copy, nonatomic) NSArray *scaleFactorArray;
@property (nonatomic) long long defaultScaleIndex;
@property (nonatomic) long long currentScaleIndex;
@property (nonatomic) BOOL isEqualToOrOlderThanIphone11;
@property (retain, nonatomic) id<AFDMomentCameraService> cameraService;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;

- (void)setupViewModel;
- (void)onCreateCameraCompleteWithCamera:(id)a0;
- (void)p_updateWithState:(long long)a0;
- (void)resetScale;
- (void)showScaleButtonIfCould;
- (void)hideScaleButton;
- (void)switchScaleFactor;
- (void).cxx_destruct;

@end
