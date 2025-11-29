@protocol ACCCameraService;

@interface AWEIMCustomPerformanceTrackComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (nonatomic) BOOL viewDidFirstAppear;
@property (nonatomic) BOOL cameraFirstFrameDidRendered;
@property (nonatomic) double didClickToViewDidAppear;
@property (nonatomic) double didClickToViewFirstFrame;
@property (nonatomic) double didClickEntranceTimeStamp;

- (void)componentDidAppear;
- (void)onCameraFirstFrameDidRender:(id)a0;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)trackFirstFrameInUserExperienceIfNeed;
- (void).cxx_destruct;

@end
