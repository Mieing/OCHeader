@class ACCRecordViewControllerInputData, NSString;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCRecordGestureService, ACCRecordScanModeService, ACCRecognitionService;

@interface ACCRecognitionComponent : ACCFeatureComponent <ACCCameraLifeCircleEvent, ACCRecordGestureServiceSubscriber, ACCRecordSwitchModeServiceSubscriber>

@property (retain, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordGestureService> gestureService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecognitionService> recognitionService;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) id<ACCRecordScanModeService> scanModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (id)trackingParams;
- (void)bindServices:(id)a0;
- (void)longPressGestureDidRecognized:(id)a0;
- (BOOL)shouldShowRecognitionBubble;
- (void).cxx_destruct;

@end
