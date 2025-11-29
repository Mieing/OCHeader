@class ACCQuickStoryRecordViewModel, AWEStudioRecorderFeatureRecordModesConfig, NSString, NSNumber, BDImageView;
@protocol ACCRecordFlowConfigProtocol, ACCRecorderViewContainer, ACCRecordFlowService, ACCCameraService, ACCRecordSwitchModeService, ACCRecordPropService, ACCQuickStoryRecorderTipsService;

@interface ACCQuickStoryRecordComponent : ACCFeatureComponent <ACCRecordFlowServiceSubscriber, ACCRecordSwitchModeServiceSubscriber>

@property (retain, nonatomic) AWEStudioRecorderFeatureRecordModesConfig *featureConfig;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) ACCQuickStoryRecordViewModel *viewModel;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCQuickStoryRecorderTipsService> quickStoryTipsService;
@property (retain, nonatomic) id<ACCRecordFlowConfigProtocol> flowConfig;
@property (retain, nonatomic) BDImageView *lightningView;
@property (nonatomic) BOOL isFirstAppear;
@property (copy, nonatomic) NSNumber *showingTipsToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)showAnimatedLightning;
- (BOOL)shouldShowHintLabelFromComposer;
- (BOOL)shouldShowRecordHintLabel;
- (BOOL)shouldShowHintLabelFromOpenCreative;
- (BOOL)shouldRemoveFlashIcon;
- (void).cxx_destruct;

@end
