@class AWEBinding, NSString, ACCPassThroughView, ACCRecordFloatViewPanHelper, ACCRecordTeleprompterPanelView, NSNumber, UIButton;
@protocol ACCRecorderViewContainer, ACCCameraService, ACCRecordFlowService, ACCSpeedControlService, ACCRecordSidebarService;

@interface ACCRecordTeleprompterComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver, UIGestureRecognizerDelegate, ACCRecordCaptionListDataSource, ACCRecordCaptionListTimeSynchronizer, ACCRecorderEvent, ACCRecordFlowServiceSubscriber, ACCSpeedControlServiceSubscriber>

@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCSpeedControlService> speedControlService;
@property (retain, nonatomic) UIButton *barItemButton;
@property (nonatomic) BOOL barItemSelected;
@property (retain, nonatomic) ACCPassThroughView *panelContainerView;
@property (retain, nonatomic) ACCRecordTeleprompterPanelView *panelView;
@property (retain, nonatomic) ACCRecordFloatViewPanHelper *panHelper;
@property (retain, nonatomic) NSNumber *isCaptionFirstLoadSuccess;
@property (nonatomic) BOOL hasAddHintShowCount;
@property (retain, nonatomic) AWEBinding *musicBinding;
@property (retain, nonatomic) AWEBinding *captionDataStateBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)onChangeMusicStartTimeS:(double)a0 clipDurationS:(double)a1;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)flowServiceDidUpdateDuration:(double)a0;
- (void)flowServiceDidRemoveFragment:(id)a0;
- (void)flowServiceDidRemoveAllSegment;
- (void)viewContainerDidLayout;
- (id)commonTrackParams;
- (BOOL)shouldShowBarItem;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void)removeSubscribers;
- (void)showIfNeeded;
- (void)addSubscribers;
- (void)showSpeedControl:(BOOL)a0;
- (void)realShowSpeedControl:(BOOL)a0;
- (double)currentTimeMS;
- (void)fetchCaptionWithCompletion:(id /* block */)a0;
- (void)configBarItem;
- (void)addPanelView;
- (BOOL)isInRecordingMode;
- (BOOL)shouldShowPanel;
- (void)updatePanelShowStateWithTrackMethod:(id)a0;
- (id)musicIdentifier:(id)a0;
- (id)convertedUrl:(id)a0;
- (id)generateCaptionModelsWithResponseModels:(id)a0;
- (void)updatePanelAndListState;
- (void)barItemClicked;
- (void)closePanelButtonClicked;
- (void).cxx_destruct;
- (void)clear;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setup;

@end
