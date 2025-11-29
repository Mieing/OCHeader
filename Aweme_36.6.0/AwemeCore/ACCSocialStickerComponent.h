@class NSString, ACCSocialStickerHandler, ACCEditStickerSelectTimeManager, NSMutableArray;
@protocol ACCEditScanServiceProtocol, ACCEditViewContainer, ACCStickerServiceProtocol, ACCGrootStickerServiceProtocol, ACCStickerPanelServiceProtocol, ACCEditServiceProtocol, ACCSequenceEditServiceProtocol, ACCEditTransitionServiceProtocol;

@interface ACCSocialStickerComponent : ACCFeatureComponent <ACCStickerPannelObserver>

@property (retain, nonatomic) ACCSocialStickerHandler *socialStickerHandler;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) NSMutableArray *autoAddedHashtagArray;
@property (retain, nonatomic) NSMutableArray *autoAddedMentionUserArray;
@property (nonatomic) double autoAddedStickerLastY;
@property (copy, nonatomic) NSString *tabName;
@property (weak, nonatomic) id<ACCStickerPanelServiceProtocol> stickerPanelService;
@property (retain, nonatomic) ACCEditStickerSelectTimeManager *selectTimeManager;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (weak, nonatomic) id<ACCGrootStickerServiceProtocol> grootService;
@property (weak, nonatomic) id<ACCEditScanServiceProtocol> scanService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)regenerateTheNecessaryResourcesForPublishViewModel:(id)a0 completion:(id /* block */)a1;

- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (BOOL)handleSelectSticker:(id)a0 fromTab:(id)a1 willSelectHandle:(id /* block */)a2 dismissPanelHandle:(id /* block */)a3;
- (unsigned long long)stickerPriority;
- (void)syncSequenceStickerStatus:(unsigned long long)a0;
- (BOOL)shouldHandleAutoAddSocialInfoForRepository:(id)a0;
- (void)p_autoAddHashTagAndMentionStickers;
- (void)addSocialStickerWithStickerID:(id)a0 stickerType:(unsigned long long)a1 effectModelInfo:(id)a2;
- (BOOL)enableAddSocialStickerType:(unsigned long long)a0;
- (id)p_setupAutoAddHashtagSticker:(id)a0 isManual:(BOOL)a1;
- (long long)p_totalAutoAddedStickerCount;
- (id)p_setupAutoAddMentionSticker:(id)a0;
- (BOOL)p_shouldAutoAddedHashTagStickers;
- (id)p_convertUserFromTextExtra;
- (BOOL)p_shouldAddDuetHashTagStickers;
- (id)p_autoAddHashtagStickers;
- (id)p_autoAddMentionStickers;
- (id)p_autoAddedStickerLocationWithManual:(BOOL)a0;
- (void)selectTimeWithSocialStickerView:(id)a0;
- (void)showEditView:(BOOL)a0 animation:(BOOL)a1 type:(unsigned long long)a2;
- (void).cxx_destruct;

@end
