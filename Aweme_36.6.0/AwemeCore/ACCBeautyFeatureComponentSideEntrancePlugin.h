@class NSString, ACCBeautySideEntranceView, ACCBeautyFeatureComponent;
@protocol ACCFeatureComponent, ACCCameraService, ACCRecordFlowService, ACCRecordGestureService, ACCRecordSwitchModeService, ACCBeautyService, ACCRecorderViewContainer;

@interface ACCBeautyFeatureComponentSideEntrancePlugin : ACCFeatureComponent <ACCRecordGestureServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCCameraLifeCircleEvent, ACCRecordSwitchModeServiceSubscriber, ACCFeatureComponentPlugin>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCBeautyFeatureComponent *hostComponent;
@property (weak, nonatomic) id<ACCBeautyService> beautyService;
@property (weak, nonatomic) id<ACCRecordGestureService> gestureService;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (nonatomic) BOOL isSidePanelShow;
@property (nonatomic) BOOL hasBindModel;
@property (retain, nonatomic) ACCBeautySideEntranceView *sidePanelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)flowServiceWillBeginTakePicture;
- (void)gesturesOnReceivedTouch:(id)a0;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)p_bindViewModel;
- (void)bindServices:(id)a0;
- (void)hideSidePanelWithAnimate;
- (void)showSidePanel;
- (void)hideSidePanelWithAnimateStatus:(BOOL)a0;
- (double)beautySideEntranceHeight;
- (double)beautySideEntranceWidth;
- (void)trackSidePanelButtonClicked:(id)a0;
- (void)resetBeautySidePanelDisappearTime;
- (void)adjustBeautyButtonClicked;
- (void)closeBeautyButtonClicked;
- (void)openBeautyButtonClicked;
- (void).cxx_destruct;

@end
