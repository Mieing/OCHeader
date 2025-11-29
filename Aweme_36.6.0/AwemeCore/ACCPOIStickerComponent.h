@class NSString, AWEInfoStickerManager;
@protocol ACCEditTransitionServiceProtocol, ACCStickerServiceProtocol, ACCEditViewContainer, ACCStickerPanelServiceProtocol, ACCEditServiceProtocol;

@interface ACCPOIStickerComponent : ACCFeatureComponent <ACCPOIStickerDataProvider, ACCEditSessionLifeCircleEvent, ACCStickerPannelObserver, ACCDraftResourceRecoverProtocol, ACCStickerMigrationProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEInfoStickerManager *stickerManager;
@property (nonatomic) BOOL showingPOIPicker;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (retain, nonatomic) NSString *poiStickerID;
@property (nonatomic) BOOL didPreloadPOISticker;
@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCStickerPanelServiceProtocol> stickerPanelService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateUserInfo:(id *)a0 repoModel:(id)a1 byCrossPlatformSlot:(id)a2;
+ (BOOL)fillCrossPlatformStickerByUserInfo:(id)a0 repository:(id)a1 context:(id)a2 sticker:(id *)a3;
+ (id)draftResourceIDsToDownloadForPublishViewModel:(id)a0;
+ (void)updateWithDownloadedEffects:(id)a0 publishViewModel:(id)a1 completion:(id /* block */)a2;

- (void)firstRenderWithEditService:(id)a0;
- (id)interactionStickers;
- (id)publishModel;
- (id)publishModel;
- (void)componentDidMount;
- (id)gestureInvalidFrameValue;
- (id)editService;
- (void)addPOISticker:(id)a0;
- (id)currentTaskId;
- (void)bindServices:(id)a0;
- (id)stickerService;
- (BOOL)isClipVideoReedit;
- (BOOL)handleSelectSticker:(id)a0 fromTab:(id)a1 willSelectHandle:(id /* block */)a2 dismissPanelHandle:(id /* block */)a3;
- (unsigned long long)stickerPriority;
- (void)syncSequenceStickerStatus:(unsigned long long)a0;
- (void)showEditView:(BOOL)a0 animation:(BOOL)a1;
- (void)registService;
- (BOOL)hasInfoStickerAddEdgeData;
- (id)baseTrackData;
- (id)poiStickerHandler;
- (void)preloadPOIStickerIfNeed;
- (void)showSearchLocationVCForPOIStickerWithSelectCompletion:(id /* block */)a0 addPOIStickerCompletion:(id /* block */)a1;
- (void)addPOIStickerWithPOIModel:(id)a0 recoverModel:(id)a1;
- (id)poiStickerFolderForDraft;
- (id)poiStickerImagePathForDraft;
- (void)p_showLocationPickerWithSelectCompletion:(id /* block */)a0 addPOIStickerCompletion:(id /* block */)a1;
- (void)p_trackChoosePOI:(id)a0 baseTrackerParams:(id)a1 withSearchKey:(id)a2 isRecommend:(BOOL)a3 isOversea:(BOOL)a4 index:(long long)a5 logPassback:(id)a6;
- (BOOL)hasPOIStickerInOtherSlides;
- (void).cxx_destruct;
- (id)mediaContainer;

@end
