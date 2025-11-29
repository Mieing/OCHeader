@class NSString;
@protocol ACCRecordSidebarService, ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService, AWEStudioInspirationFollowFeaturePublicAPI, ACCRecordPropService, ACCRecordUIHiddenStrategyService;

@interface ACCRecordSidebarComponent : ACCFeatureComponent <ACCRecordPropServiceSubscriber, ACCRecordSwitchModeServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (weak, nonatomic) id<AWEStudioInspirationFollowFeaturePublicAPI> inspirationService;
@property (nonatomic) BOOL hasAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)viewContainerDidLayout;
- (void)propServiceWillDismissPanel:(id)a0;
- (void)propServiceDidShowPanel:(id)a0;
- (void)propServiceDidDismissPanel:(id)a0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)updateToolBarContainerVisibility;
- (void)p_bindRACSignals;
- (BOOL)shouldHideToolBarContainer;
- (void)p_hidebar;
- (void)p_showbar;
- (void).cxx_destruct;

@end
