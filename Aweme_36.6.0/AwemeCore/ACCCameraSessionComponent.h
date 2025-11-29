@class NSString;
@protocol AWERecordFlowSourceService, ACCRecordSwitchModeService, ACCCameraService, ACCRecordAuthService, ACCCameraKitService, ACCModeCameraSessionService, ACCRecordFrameRatioService;

@interface ACCCameraSessionComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber>

@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) id<ACCCameraKitService> cameraKitService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCModeCameraSessionService> modeSessionService;
@property (retain, nonatomic) id<ACCRecordFrameRatioService> frameRatioService;
@property (retain, nonatomic) id<AWERecordFlowSourceService> flowSourceService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)buildCameraIfNeeded;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)onAppWillEnterForeground:(id)a0;
- (void)bindServices:(id)a0;
- (void)createInitialCameraSessionIfNeeded;
- (void)switchStreamConfigIfNeed;
- (void).cxx_destruct;

@end
