@class ACCLandscapeRecordServiceImpl, NSString;
@protocol ACCRecorderViewContainer, ACCCameraService, ACCRecordFlowService, ACCRecordPropService, ACCDuetSessionSwtichService;

@interface ACCLandscapeRecordComponent : ACCFeatureComponent <ACCLandscapeRecordServiceSubscriber, ACCDuetSessionSwtichServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCRecordPropServiceSubscriber>

@property (retain, nonatomic) ACCLandscapeRecordServiceImpl *landscapeRecordService;
@property (nonatomic) long long curDeviceOrientation;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCDuetSessionSwtichService> duetSessionSwtichService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordPropService> recordPropService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)recorderDeviceOrientationChanged:(long long)a0;
- (void)flowServiceDidRemoveLastSegment:(BOOL)a0;
- (void)flowServiceDidRemoveAllSegment;
- (void)propServiceDidApplyProp:(id)a0 success:(BOOL)a1;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (id)serviceBinding;
- (void)p_startMotionDetect;
- (void)willSwitchToDuetMode;
- (void)finishSwitchToDuetMode;
- (void)didSwitchToNormalMode;
- (BOOL)shouldStartMotionDetect;
- (id)logTextWithDirection:(long long)a0;
- (void)updateRecorderBarItemsRotate:(long long)a0;
- (void)updateCameraControlOutputDirection:(long long)a0;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)a0;

@end
