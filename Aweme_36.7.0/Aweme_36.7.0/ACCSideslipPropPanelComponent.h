@class AWEStudioRecorderFeaturePropConfig, ACCSideslipPropPanelViewController, NSString;
@protocol ACCRecorderViewContainer, IESServiceProvider, ACCRecordUIHiddenStrategyService, ACCCameraService, ACCSideslipPropPanelPluginLifeCycleService, ACCRecognitionPropPanelService, ACCSideslipPropInternalService, ACCRecordPropService, ACCSideslipPropService, ACCSideslipPropPanelRecordTransition, ACCRecordPropRankService, ACCSideslipPropPanelService, ACCRecordSwitchModeService, ACCPropPickerService, AWEStickerViewLayoutManagerProtocol, ACCSideslipPropPanelPrefetchService, ACCSideslipPropPanelFocusHandleService, ACCSideslipPropPanelTrackerService;

@interface ACCSideslipPropPanelComponent : ACCFeatureComponent <ACCSideslipPropServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCRecordPropServiceSubscriber, ACCSideslipPropPanelServiceSubscriber, ACCRecordSwitchModeServiceSubscriber, ACCCameraLifeCircleEvent, ACCRecordSideslipContextProviderProtocol>

@property (retain, nonatomic) AWEStudioRecorderFeaturePropConfig *featureConfig;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<IESServiceProvider> sideslipServiceProvider;
@property (retain, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (retain, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (retain, nonatomic) id<ACCSideslipPropPanelFocusHandleService> sideslipFocusHandleService;
@property (retain, nonatomic) id<ACCSideslipPropInternalService> sideslipPropInternalService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCPropPickerService> propPickService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecognitionPropPanelService> recognitionPropPanelService;
@property (retain, nonatomic) ACCSideslipPropPanelViewController *sideslipPropVC;
@property (weak, nonatomic) id<AWEStickerViewLayoutManagerProtocol> lastLayoutManager;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCSideslipPropPanelRecordTransition> sideslipTransition;
@property (retain, nonatomic) id<ACCSideslipPropPanelPluginLifeCycleService> sideslipPluginLifeCycleService;
@property (retain, nonatomic) id<ACCRecordPropRankService> newPropRankerService;
@property (retain, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipPropPanelTrackerService;
@property (weak, nonatomic) id<ACCSideslipPropPanelPrefetchService> sideslipPrefetchService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)onCameraDidStartRender:(id)a0;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)propServiceDidApplyProp:(id)a0 success:(BOOL)a1;
- (void)propServiceDidDismissPanel:(id)a0;
- (void)sideslipPropPanelService:(id)a0 willShowTrayView:(id)a1;
- (void)sideslipPropPanelService:(id)a0 willDismissTrayView:(id)a1;
- (void)sideslipPropService:(id)a0 willChangeShowState:(unsigned long long)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBindingArray;
- (void)bindServices:(id)a0;
- (void)p_bindService;
- (BOOL)p_isSupportSideslipWithRecordMode:(long long)a0;
- (void)autoOpenPanelIfNeeded;
- (void)p_changeLayoutManager:(id)a0;
- (void)p_updatePanelShowIfNeed:(BOOL)a0;
- (void)p_showPanelView:(unsigned long long)a0 animated:(BOOL)a1;
- (void)p_updatePropType:(unsigned long long)a0;
- (void)p_createSideslipVCIfNeed;
- (id)p_pluginClasses;
- (id)layoutManager;
- (void).cxx_destruct;

@end
