@class ACCRecordSwitchModeGestureServiceImpl, AWEStudioRecorderFeatureRecordModesConfig, NSString, ACCGestureModel;
@protocol ACCFilterService, ACCRecorderViewContainer, ACCRecordFlowService, ACCRecordGestureService, ACCCameraService;

@interface ACCRecordSwitchModeGestureComponent : ACCFeatureComponent <ACCRecordGestureServiceSubscriber>

@property (retain, nonatomic) AWEStudioRecorderFeatureRecordModesConfig *featureConfig;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (retain, nonatomic) id<ACCRecordGestureService> gestureService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (nonatomic) BOOL swipeGestureEnabled;
@property (retain, nonatomic) ACCRecordSwitchModeGestureServiceImpl *modeGestureService;
@property (retain, nonatomic) ACCGestureModel *leftSwipeGesture;
@property (retain, nonatomic) ACCGestureModel *rightSwipeGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)gesturesWillDisabled;
- (void)gesturesWillEnable;
- (void)addSwitchSubmodeGesture;
- (void)configGestureEnable;
- (id)createGestureModeWithGesture:(id)a0;
- (void).cxx_destruct;

@end
