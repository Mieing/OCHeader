@class AWEStudioRecorderFeatureRecordModesConfig, NSString, ACCQuickStoryRecorderTipsViewModel, UILabel;
@protocol ACCRecordSwitchModeService, ACCRecordFlowConfigProtocol, ACCRecorderViewContainer, ACCRecordAuthService, ACCAdvancedRecordSettingService, ACCRecordFlowService, ACCCameraService, ACCSpeedControlService;

@interface ACCQuickStoryRecorderTipsComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver, ACCRecordSwitchModeServiceSubscriber>

@property (retain, nonatomic) AWEStudioRecorderFeatureRecordModesConfig *featureConfig;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) ACCQuickStoryRecorderTipsViewModel *viewModel;
@property (retain, nonatomic) UILabel *recordHintLabel;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCSpeedControlService> speedControlService;
@property (retain, nonatomic) id<ACCAdvancedRecordSettingService> advancedService;
@property (retain, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) id<ACCRecordFlowConfigProtocol> flowConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)componentDidMount;
- (void)bindViewModel;
- (id)serviceBinding;
- (BOOL)isFromIM;
- (void)bindServices:(id)a0;
- (void)showRecordHintLabel:(BOOL)a0;
- (BOOL)isInCustomLikeMainRecord;
- (void).cxx_destruct;
- (void)updateWithText:(id)a0;

@end
