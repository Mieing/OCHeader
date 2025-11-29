@class AFDMomentCameraPreviewViewModel;
@protocol AFDMomentCameraFlowService, AFDMomentCameraPerformanceTrackService, AFDMomentContextService;

@interface AWEIMExchangeCameraDeleteViewModel : AFDMomentCameraBaseViewModel

@property (nonatomic) BOOL shouldShowDeleteButton;
@property (readonly, weak, nonatomic) AFDMomentCameraPreviewViewModel *previewViewModel;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (nonatomic) BOOL isRandonResult;
@property (nonatomic) BOOL closeCameraVC;

- (void)setupViewModel;
- (void)didTapDeleteButton;
- (void)p_updateWithState:(long long)a0;
- (void)trackDeletePost;
- (void).cxx_destruct;

@end
