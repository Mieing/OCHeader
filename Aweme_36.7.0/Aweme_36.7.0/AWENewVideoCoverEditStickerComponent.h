@class ACCImageAlbumStickerServiceImpl, NSString, ACCImageAlbumEditStickerHandler;
@protocol ACCEditViewContainer, ACCVideoEditFlowControlService, ACCStickerPanelServiceProtocol, ACCImageAlbumStickerFeatureServiceProtocol;

@interface AWENewVideoCoverEditStickerComponent : ACCFeatureComponent <ACCStickerServiceSubscriber, ACCVideoEditFlowControlSubscriber, ACCPublishServiceMessage>

@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) ACCImageAlbumStickerServiceImpl *stickerService;
@property (retain, nonatomic) ACCImageAlbumEditStickerHandler *stickerHandler;
@property (weak, nonatomic) id<ACCStickerPanelServiceProtocol> stickerPanelService;
@property (retain, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (retain, nonatomic) id<ACCImageAlbumStickerFeatureServiceProtocol> featureService;
@property (nonatomic) BOOL isDraftFirstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)newCoverEditPageDidSave:(id)a0;
- (void)willSwitchImageAlbumEditModeWithEditFlowService:(id)a0;
- (void)synchronizeRepositoryWithEditFlowService:(id)a0;
- (void)willExitEditModeWithService:(id)a0;
- (void)firstRenderWithEditService:(id)a0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (id)serviceBindingArray;
- (void)bindServices:(id)a0;
- (void)publishServiceWillStart;
- (void)publishServiceWillSaveDraft;
- (void)configLogger;
- (BOOL)userVideoCoverRenderOptimize;
- (void).cxx_destruct;
- (void)addObserver;
- (void)dealloc;

@end
