@class UILabel, NSString;
@protocol AFDMomentCameraFlowService, AFDMomentCameraService;

@interface AWEMCRecordDurationComponent : AFDMomentCameraBaseComponent <AFDMomentCameraLifeCircleEvent, AFDMomentCameraFlowServiceSubscriber>

@property (retain, nonatomic) UILabel *durationLabel;
@property (nonatomic) long long currentDuration;
@property (weak, nonatomic) id<AFDMomentCameraService> cameraService;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cameraService:(id)a0 startRecordWithError:(id)a1;
- (void)cameraService:(id)a0 stopVideoCaptureWithError:(id)a1;
- (void)cameraService:(id)a0 didChangeDuration:(double)a1 totalDuration:(double)a2;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)componentDidLoad;
- (void)p_updateWithDuration:(double)a0;
- (void).cxx_destruct;

@end
