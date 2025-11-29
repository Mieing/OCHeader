@class DUXPopover, ACCRecordDurationSettingButton, UIImageView, ACCBarItem, ACCGroupedPredicate, NSString;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCRecordUIHiddenStrategyService, ACCRecordConfigService, ACCRecordSidebarService, ACCRecordTemplateVideoPreviewService, ACCRecordDurationService, ACCVideoConfigProtocol, ACCRecordFlowService, ACCCameraService;

@interface ACCRecordDurationSettingComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCSubviewLayoutProtocol, ACCRecorderViewContainerItemsHideShowObserver>

@property (retain, nonatomic) ACCBarItem *barItem;
@property (retain, nonatomic) ACCRecordDurationSettingButton *durationButton;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) DUXPopover *durationTipBubbleView;
@property (nonatomic) BOOL didAppear;
@property (retain, nonatomic) ACCGroupedPredicate *hideDurationButtonPredicate;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordDurationService> durationService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSidebarService> toolbarService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (retain, nonatomic) id<ACCRecordConfigService> recordConfigService;
@property (weak, nonatomic) id<ACCRecordTemplateVideoPreviewService> templateVideoPreviewService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)flowServiceDidRemoveFragment:(id)a0;
- (void)flowServiceDidRemoveAllSegment;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)configDurationBarItem;
- (void)hideBarItemLabel;
- (void)hideBarItemLabelViewIfNeed;
- (long long)durationStateWithIndex:(unsigned long long)a0;
- (long long)segmentDurationABType;
- (id)segmentTrackIdentifier:(unsigned long long)a0;
- (long long)durationWithIndex:(unsigned long long)a0;
- (void)durationButtonDidClick;
- (long long)defaultDurationState;
- (void)updateDurationButtonStateForModeId:(long long)a0;
- (void)layoutContainer:(id)a0 subview:(id)a1;
- (void)showBarItemLabel;
- (void).cxx_destruct;

@end
