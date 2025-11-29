@protocol AFDMomentCameraFlowService;

@interface AWEMCRecordCaptureViewModel : AFDMomentCameraBaseViewModel

@property (nonatomic) BOOL shouldShowCaptureButton;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL shouldShowTipLabel;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;

- (void)setupViewModel;
- (void)p_updateWithState:(long long)a0;
- (void).cxx_destruct;

@end
