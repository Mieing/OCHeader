@class ACCStickerHandler, NSString, UIView;
@protocol ACCRecorderViewContainer, ACCQuickFlashStickerHandlerProtocol, ACCRecordUIHiddenStrategyService, ACCCameraService, ACCRecorderStickerServiceProtocol, ACCRecordAuthService, ACCRecordFlowService, ACCRecordPropService, ACCElementBindService, ACCRecordSwitchModeService, ACCRecordScanModelFlowService, ACCPropPickerService, ACCRecordSidebarService, ACCRecorderElementBindService;

@interface ACCRecorderQuickFlashStickerComponent : ACCFeatureComponent <ACCRecordScanModelFlowSubscriber, ACCRecordPropServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCElementBindServiceSubscriber, ACCRepoStickerFlashMobManager>

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecorderStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCRecordAuthService> authService;
@property (weak, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanToScanService;
@property (retain, nonatomic) ACCStickerHandler<ACCQuickFlashStickerHandlerProtocol> *stickerHandler;
@property (retain, nonatomic) UIView *bubbleView;
@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCPropPickerService> propPickerService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCElementBindService> elementBindService;
@property (weak, nonatomic) id<ACCRecorderElementBindService> recordElementBindService;
@property (nonatomic) BOOL isEditing;
@property (nonatomic) BOOL autoAdded;
@property (nonatomic) BOOL isNonFirstPropApply;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)flowServiceDidAddFragment:(id)a0;
- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (BOOL)shouldFetchTargetType:(long long)a0 requestParams:(id)a1;
- (void)applyBindDataIfNeeded:(id)a0 requestParams:(id)a1;
- (void)removeBindDataIfNeeded:(id)a0;
- (void)updateFlashMobStickerWithConfig:(id)a0;
- (void)updateFlashMobStickerWithQuickFlashModel:(id)a0 extraDic:(id)a1;
- (void)updateFlashMobStickerWithQuickFlashModel:(id)a0;
- (id)elementBindTypeArray;
- (id)setupNewStyleBubbleView;
- (BOOL)enableElementBindQuickFlash;
- (BOOL)shouldApplyElementBind:(id)a0 requestFrom:(long long)a1;
- (void)flowServiceWillEnterScanMode;
- (void)flowServiceDidExitScanMode;
- (void)configBatItem;
- (BOOL)enablePropBindFlashMob;
- (BOOL)hasBothFlashMobAndPropInFollowShoot;
- (void)fetchQuickFlashInfoWithID:(id)a0 title:(id)a1 needFetchBindPropModel:(BOOL)a2 autoAddQuickFlash:(BOOL)a3;
- (void)fetchQuickFlashBindPropIfNeeded;
- (void)autoAddQuickFlashModel;
- (void)applyQuickFlashBindProp:(id)a0;
- (void)addQuickFlashModelIfNeeded;
- (BOOL)enableSwitchFlashMobByPropApply;
- (void)replaceCurrentQuickFlashStickerModel:(id)a0;
- (void).cxx_destruct;

@end
