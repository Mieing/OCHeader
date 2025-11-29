@class ACCEditVideoBeautifulEffectViewModel, ACCBeautifulEffectPanelComponentAlertWorker, NSString, AWEStudioEditBeautyFeatureConfig, ACCEditBeautyEffectCompontentViewModel, ACCEditBeautyEffectDownloadService, ACCBeautifulEffectPanelComponentRepositoryWorker;
@protocol ACCSequencePlayControlServiceProtocol, ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCEditServiceProtocol, ACCStickerGestureComponentProtocol, ACCCTRServiceProtocol, AWEStudioAIMateEditFeaturePublicAPI, ACCStudioAIMemoriesService, ACCEditTransitionServiceProtocol;

@interface ACCEditVideoBeautifulEffectComponent : ACCFeatureComponent <ACCEditTransitionServiceObserver, ACCSequenceEditServicePlayerSubscriber, ACCStudioAIMemoriesServiceSubscriberProtocol, ACCSequencePlayControlServiceSubscriber, ACCDraftResourceRecoverProtocol>

@property (retain, nonatomic) AWEStudioEditBeautyFeatureConfig *featureConfig;
@property (retain, nonatomic) ACCEditBeautyEffectCompontentViewModel *compontentViewModel;
@property (retain, nonatomic) ACCEditVideoBeautifulEffectViewModel *viewModel;
@property (retain, nonatomic) ACCEditBeautyEffectDownloadService *beautyEffectDownloadService;
@property (retain, nonatomic) ACCBeautifulEffectPanelComponentRepositoryWorker *repositoryWorker;
@property (retain, nonatomic) ACCBeautifulEffectPanelComponentAlertWorker *alertWorker;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (weak, nonatomic) id<ACCStickerGestureComponentProtocol> stickerGestureComponent;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;
@property (weak, nonatomic) id<ACCStudioAIMemoriesService> aiMemoriesService;
@property (weak, nonatomic) id<AWEStudioAIMateEditFeaturePublicAPI> aiMateEditFeatureAPI;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (nonatomic) BOOL isNotAbleToDownload;
@property (nonatomic) BOOL isDismissSecondPageStatus;
@property (nonatomic) BOOL projectTransfering;
@property (nonatomic) BOOL isMainTransfering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)sequenceEditService:(id)a0 didTransferToIndex:(long long)a1 editMode:(unsigned long long)a2 isAutoTransfer:(BOOL)a3;
- (void)sequenceEditService:(id)a0 willTransferToIndex:(long long)a1 editMode:(unsigned long long)a2 isAutoTransfer:(BOOL)a3;
- (BOOL)sequencePlayControlService:(id)a0 shouldForbidPauseWhenDisappear:(id)a1;
- (BOOL)sequencePlayControlService:(id)a0 shouldForbidPlayWhenAppear:(id)a1;
- (void)sensorialRenderWithEditService:(id)a0;
- (id)barItem;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void)updateVideoControlStatusIfNeeded;
- (void)bindServices:(id)a0;
- (id)p_generateBaseParamsDictWithPublishModel:(id)a0;
- (BOOL)isEnableRecordAndEidtBeautyConvergenceSwitchStatus;
- (void)hasReceivedAIMemoriesTaskID:(id)a0;
- (BOOL)enableShowBeautyEntranceStatus;
- (void)doBeautyTaskIfNeeded;
- (void)requestBeautifulDataIfNeeded;
- (void)bindObserved;
- (void)enableRespondGestureAction;
- (void)removeEffectIfNeeded;
- (void)openSecondaryPage;
- (BOOL)isDisableBeautyEntranceStatus;
- (id /* block */)updateVideoControlBlock;
- (void)disableRespondGestureAction;
- (BOOL)shouldDoTaskForAIMemoriesScene;
- (void)handlersDoBeautyTaskIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;

@end
