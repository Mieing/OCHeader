@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCCameraService;

@interface ACCRecordAppStateComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (nonatomic) BOOL isDisappear;

- (void)componentWillAppear;
- (void)componentDidDisappear;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void)handleApplicationDidBecomeActive;
- (void)handleApplicationWillResignActive;
- (BOOL)p_currentSwitchModeNeedStartVideo;
- (BOOL)shouldHandleAVCaptureForAppLifeEvent;
- (void).cxx_destruct;
- (void)handleApplicationDidEnterBackground;

@end
