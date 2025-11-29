@class AWEIMExchangeCameraTraceViewModel;
@protocol AFDMomentCameraFlowService, AFDMomentCameraPerformanceTrackService;

@interface AWEIMExchangeCameraTraceComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (weak, nonatomic) AWEIMExchangeCameraTraceViewModel *viewModel;
@property (nonatomic) BOOL isRandomBefore;

- (void)componentDidLoad;
- (void)componentDidAppear:(BOOL)a0;
- (void).cxx_destruct;

@end
