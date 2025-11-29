@class NSString, ACCRecordSelectMusicPanel, AWEVideoPublishViewModel, ACCRecordSelectMusicServiceImpl;
@protocol ACCRecorderViewContainer, IESServiceProvider, ACCRecordUIHiddenStrategyService, ACCCameraService, ACCRecordDurationService, ACCRecordFlowService, AWERedPackThemeService, ACCRecordPropService, ACCMusicModelProtocol, ACCRecordConfigService, ACCVideoConfigProtocol, ACCRecordSwitchModeService, ACCRecordScanModelFlowService, ACCRecordSidebarService;

@interface ACCRecorSelectMusicSubscriber : NSObject <ACCCameraLifeCircleEvent, ACCRecordFlowServiceSubscriber, ACCRecordSwitchModeServiceSubscriber, ACCRecordPropServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCRecordScanModelFlowSubscriber, ACCRecordFlowServiceSubscriber, ACCRecordDurationServiceSubscriber, AWERedPackThemeServiceSubscriber>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) ACCRecordSelectMusicServiceImpl *selectMusicViewModel;
@property (weak, nonatomic) ACCRecordSelectMusicPanel *musicPanelService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (retain, nonatomic) id<ACCRecordDurationService> durationService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStragyService;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanToScanService;
@property (retain, nonatomic) id<ACCRecordConfigService> recordConfigService;
@property (retain, nonatomic) id<ACCVideoConfigProtocol> config;
@property (retain, nonatomic) id<AWERedPackThemeService> redPackThemeService;
@property (retain, nonatomic) id<ACCMusicModelProtocol> scanToScanRecordMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)onCreateCameraCompleteWithCamera:(id)a0;
- (void)cameraService:(id)a0 startRecordWithError:(id)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)flowServiceDidMarkDuration:(double)a0;
- (void)flowServiceDidRemoveLastSegment:(BOOL)a0;
- (void)flowServiceDidRemoveAllSegment;
- (void)flowServiceDidTakePicture:(id)a0 error:(id)a1;
- (void)flowServiceWillEnterNextPageWithMode:(id)a0;
- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1;
- (void)propServiceDidSelectForceBindingMusic:(id)a0 oldMusic:(id)a1;
- (void)propServiceDidSelectEternalForceBindingMusic:(id)a0;
- (void)propServiceDidFinishFetchRecommendMusicListForPropID:(id)a0;
- (id)initWithRepository:(id)a0 serviceProvider:(id)a1;
- (void)flowServiceWillEnterScanMode;
- (void)flowServiceDidExitScanMode;
- (void)redPackThemeServiceApplySticker:(id)a0;
- (void)recordDurationServiceDurationDidChange;
- (void)addAllSubscriber;
- (void)bindSelectMusicViewModel:(id)a0 musicPanelService:(id)a1;
- (void)p_updateAudioRange;
- (void).cxx_destruct;

@end
