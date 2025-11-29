@class ACCRecordGestureActionHandler, NSString, AWEStudioRecorderFeatureGestureConfig, ACCGestureModel, NSObject;
@protocol ACCRecorderViewContainer, ACCCameraService, ACCRecordGestureService, ACCFocusService, ACCRecordPropService, ACCRecordSwitchModeService;

@interface ACCRecordGestureManageComponent : ACCFeatureComponent <ACCRecordGestureServiceContextProvider, ACCCameraLifeCircleEvent>

@property (retain, nonatomic) AWEStudioRecorderFeatureGestureConfig *featureConfig;
@property (retain, nonatomic) NSObject<ACCRecordGestureService> *gestureService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCFocusService> focusService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) ACCRecordGestureActionHandler *actionHandler;
@property (retain, nonatomic) ACCGestureModel *brightnessAdjustGestureModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCreateCameraCompleteWithCamera:(id)a0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)setupActionHandler;
- (void)configGestureService;
- (void)configBizGestureEnabled:(BOOL)a0;
- (void)setupBizGesture;
- (void)setupCameraGesture;
- (void)handleCameraGesture:(id)a0 type:(unsigned long long)a1;
- (void)configBizGesture:(id)a0;
- (BOOL)isPinchZoomAvailable;
- (id)gestureContainerView;
- (id)gestureTouchLimitView;
- (void).cxx_destruct;
- (void)setupGestures;

@end
