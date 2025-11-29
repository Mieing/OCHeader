@class UIButton, NSString, ACCRecorderSidebarFloatingActionsView;
@protocol ACCRecordSwitchModeService, ACCRecordGestureService, ACCRecorderViewContainer, ACCRecordSidebarService, ACCDuetSessionSwtichService, AWERecordBeautyService, ACCFeatureComponent, ACCRecordFlowService, ACCCameraService;

@interface ACCRecorderBeautyComponentSidebarPlugin : ACCFeatureComponent <ACCRecordGestureServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCRecordSwitchModeServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, AWERecordBeautyServiceSubscriberProtocol, ACCServiceBindable, ACCFeatureComponentPlugin>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (weak, nonatomic) id<AWERecordBeautyService> AWERecordBeautyService;
@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (weak, nonatomic) id<ACCDuetSessionSwtichService> duetSessionSwtichService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordGestureService> gestureService;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) ACCRecorderSidebarFloatingActionsView *floatingActionsTouchView;
@property (weak, nonatomic) ACCRecorderSidebarFloatingActionsView *floatingActionsView;
@property (nonatomic) BOOL hasComponentAppearedOnce;
@property (nonatomic) BOOL didShowTips;
@property (retain, nonatomic) UIButton *beautySidebarButton;
@property (retain, nonatomic) UIButton *showPanelButton;
@property (retain, nonatomic) UIButton *turnOffBeautyButton;
@property (retain, nonatomic) UIButton *turnOnBeautyButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)componentDidAppear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)flowServiceWillBeginTakePicture;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)didChangeBeautyOnState:(BOOL)a0;
- (void)gesturesOnReceivedTouch:(id)a0;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)cancelHideFloatingActionsViewWithDelay;
- (void)p_setupBarItem;
- (void)p_addBarItemSubcribers;
- (void)p_handleCliAWERecordBeautyBarItem;
- (void)p_hideFloatingActionsViewAnimated:(BOOL)a0;
- (void)p_updateBarItemIcon;
- (void)p_fillButtonsForFloatingActionsView:(id)a0 shouldBindButton:(BOOL)a1;
- (void)p_showFloatingActionsViewAndHideLater;
- (void)p_handleClickShowPanel;
- (void)p_handleClickTurnOffBeauty;
- (void)p_handleClickTurnOnBeauty;
- (void)p_hideFloatingActionsView;
- (void)hideFloatingActionsViewWithDelay;
- (void)p_updateFloatingActionsButtonsWithBeautyOnState;
- (void)p_updateBarItemIconWithStatus:(BOOL)a0;
- (id)p_beautyBarItemView;
- (id)__imEffectSettings;
- (id)p_configTipsWithTargetView:(id)a0;
- (void).cxx_destruct;

@end
