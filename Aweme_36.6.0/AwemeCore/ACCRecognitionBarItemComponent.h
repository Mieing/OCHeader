@class AWERecognitionModeSwitchButton, NSString;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCRecordScanModelFlowService, ACCRecordTrackService, ACCRecordSidebarService, ACCRecordScanModeService, ACCCameraService, ACCRecognitionService;

@interface ACCRecognitionBarItemComponent : ACCFeatureComponent <ACCCameraLifeCircleEvent>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordTrackService> trackService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecognitionService> recognitionService;
@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanToScanService;
@property (retain, nonatomic) id<ACCRecordScanModeService> scanModeService;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) AWERecognitionModeSwitchButton *recogitionButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)configRecognitionBarItem;
- (void)clickRecognitionButton:(id)a0;
- (void).cxx_destruct;

@end
