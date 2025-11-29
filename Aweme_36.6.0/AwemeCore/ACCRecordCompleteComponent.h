@class NSString, ACCButton, ACCGroupedPredicate;
@protocol ACCRecordFlowControlService, ACCRecordSwitchModeService, ACCRecordPropService, ACCRecorderViewContainer, AWEStudioBusinessCameraFlowControlProtocol, ACCRecordTrackService, ACCShootSourceService, AWERecordFlowSourceService, ACCRecordFlowService, ACCCameraService, ACCRecordButtonService;

@interface ACCRecordCompleteComponent : ACCFeatureComponent <ACCRecordFlowServiceSubscriber, ACCRecordConfigDurationHandler, ACCRecorderViewContainerItemsHideShowObserver>

@property (retain, nonatomic) ACCButton *completeButton;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordTrackService> recordTrackService;
@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCRecordButtonService> buttonService;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) id<AWERecordFlowSourceService> flowSourceService;
@property (retain, nonatomic) id<AWEStudioBusinessCameraFlowControlProtocol> cameraServiceFlowContext;
@property (retain, nonatomic) ACCGroupedPredicate *shouldShow;
@property (nonatomic) BOOL isFirstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)flowServiceDidUpdateDuration:(double)a0;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (id)p_redColor;
- (void)bindServices:(id)a0;
- (void)didSetMaxDuration:(double)a0;
- (void)clickCompleteBtn:(id)a0;
- (void)updateCompleteButtonHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
