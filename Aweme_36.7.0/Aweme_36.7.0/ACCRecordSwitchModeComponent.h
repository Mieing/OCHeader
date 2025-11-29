@class ACCRecordSwitchModeViewModel, NSString, ACCGroupedPredicate, AWESwitchRecordModeView;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCRecordModeFactory, ACCRecordUIHiddenStrategyService, AWEStudioInspirationFollowFeaturePublicAPI, ACCSideslipPropService, ACCRecordDurationService, ACCDuetSessionSwtichService, ACCRecordFlowService, ACCCameraService;

@interface ACCRecordSwitchModeComponent : ACCFeatureComponent <ACCRecordVideoEventHandler, ACCRecordSwitchModeServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCSubviewLayoutProtocol, AWERecordInspirationServiceSubscriber>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordModeFactory> modeFactory;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (retain, nonatomic) id<ACCRecordDurationService> durationService;
@property (retain, nonatomic) id<ACCDuetSessionSwtichService> duetSessionSwtichService;
@property (weak, nonatomic) id<AWEStudioInspirationFollowFeaturePublicAPI> inspirationFollowService;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) ACCRecordSwitchModeViewModel *viewModel;
@property (retain, nonatomic) AWESwitchRecordModeView *switchModeView;
@property (retain, nonatomic) id disposable;
@property (readonly, nonatomic) ACCGroupedPredicate *shouldShowSwitchModeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)onThemeChanged;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)modeArrayDidChanged;
- (void)tabConfigDidUpdatedWithModeId:(long long)a0;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (void)bindServices:(id)a0;
- (void)updateSwitchModeViewHiddenWithFade:(BOOL)a0;
- (void)showSwitchContainerViewIfNeed:(BOOL)a0;
- (id)recordVideoEvent;
- (void)layoutContainer:(id)a0 subview:(id)a1;
- (void)configSwitchModeViewHiddenPredicate;
- (BOOL)shouldLoadingCameraPreview;
- (void)handleExclusiveLiveTabIfNeeded;
- (BOOL)shouldHideSwitchModeViewWithCurrentMode;
- (id)p_getRecordType;
- (id)p_getRecordMode;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)isSplitting;
- (void)setupUI;

@end
