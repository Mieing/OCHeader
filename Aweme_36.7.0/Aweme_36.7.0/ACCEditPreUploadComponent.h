@class NSString, ACCEditPreUploadViewModel, AWEResourceUploadParametersResponseModel, NSMutableArray;
@protocol ACCEditCutMusicServiceProtocol, ACCEditViewContainer, ACCVideoEditFlowControlService, ACCEditServiceProtocol;

@interface ACCEditPreUploadComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCVideoEditFlowControlSubscriber, ACCPublishServiceMessage, ACCPanelViewDelegate, ACCPerfStrategyStateLifeCycleProtocol>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (nonatomic) BOOL hasTriggerPreUploadOnce;
@property (nonatomic) BOOL hasTriggerMusicPreUploadOnce;
@property (nonatomic) BOOL isSensorialRender;
@property (copy, nonatomic) NSString *lastAudioDataHash;
@property (copy, nonatomic) NSString *pendingAudioDataHash;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParams;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditCutMusicServiceProtocol> cutMusicService;
@property (retain, nonatomic) ACCEditPreUploadViewModel *viewModel;
@property (retain, nonatomic) NSMutableArray *VMS;
@property (nonatomic) BOOL enableHDModeUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willGoBackToRecordPageWithEditFlowService:(id)a0;
- (void)didFetchUploadParams:(id)a0;
- (void)willExitEditModeWithService:(id)a0;
- (void)sensorialRenderWithEditService:(id)a0;
- (void)panelViewController:(id)a0 didDismissPanelView:(id)a1;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (id)preloadStrategy;
- (void)bindServices:(id)a0;
- (id)stickerService;
- (void)didReceiveMemoryWarningWithType:(unsigned long long)a0;
- (void)consumptionStateDidChanged:(unsigned long long)a0;
- (void)publishServiceWillStart;
- (BOOL)enablePreloadMusic;
- (BOOL)enablePreloadStrategyRetry;
- (void)startEntrancePreuploadIfNeeded;
- (BOOL)enablePreloadMusicMuti;
- (unsigned long long)checkPreUploadable:(id *)a0;
- (void)recordAudioDataHash;
- (id)checkEditUploadPreCondition;
- (BOOL)checkEditUploadVideoEnable;
- (BOOL)checkEditUploadAudioEnable;
- (BOOL)shouldSkipUploadWhenOfflineVideo;
- (BOOL)disablePreUploadWithNetWorkCondition;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
