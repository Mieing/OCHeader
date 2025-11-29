@class ACCAnimatedButton, NSString;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCRecorderViewContainer, AWEStudioBusinessCameraFlowControlProtocol, ACCShootSourceService, AWERecordFlowSourceService, ACCRecordFlowService, ACCCameraService;

@interface ACCRecordDeleteComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver>

@property (retain, nonatomic) ACCAnimatedButton *deleteButton;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<AWERecordFlowSourceService> flowSourceService;
@property (retain, nonatomic) id<AWEStudioBusinessCameraFlowControlProtocol> cameraServiceFlowContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (void)clickDeleteBtn:(id)a0;
- (void)updateDeleteButtonHidden:(BOOL)a0;
- (BOOL)blockBackupPopupIfNeed;
- (void).cxx_destruct;

@end
