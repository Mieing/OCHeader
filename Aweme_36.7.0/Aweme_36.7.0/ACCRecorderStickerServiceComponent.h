@class NSString, ACCStickerContainerView, ACCRecorderStickerServiceImpl;
@protocol ACCRecorderViewContainer, ACCRecordFlowService, ACCCameraService, ACCRecordSwitchModeService, ACCRecordUIHiddenStrategyService;

@interface ACCRecorderStickerServiceComponent : ACCFeatureComponent <ACCRecorderEvent, ACCCameraLifeCircleEvent, ACCRecordFlowServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCRecordSwitchModeServiceSubscriber, ACCStickerContainerDelegate>

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) ACCRecorderStickerServiceImpl *stickerService;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainerView;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentWillDisappear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)prepareDataForSwitchModeToMode:(id)a0 oldMode:(id)a1;
- (void)onStartExportVideoDataWithData:(id)a0;
- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)flowServiceWillEnterNextPageWithMode:(id)a0;
- (void)componentDidMount;
- (void)componentDidChangeStatusBarOrientation;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)stickerContainer:(id)a0 gestureStarted:(id)a1 onView:(id)a2;
- (void)stickerContainer:(id)a0 gestureEnded:(id)a1 onView:(id)a2;
- (BOOL)stickerContainerTapBlank:(id)a0 gesture:(id)a1;
- (double)mediaContainerScaleFactor;
- (void)p_addRecorderInteractionStickers;
- (void)p_recoverStickersIfNeeded;
- (void)p_buildHandler;
- (void)p_createStickerContainerViewIfNeeded;
- (void)updateStickerContainerVisible;
- (BOOL)p_couldHandle;
- (void).cxx_destruct;

@end
