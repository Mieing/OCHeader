@class HTSLiveStickerInfo, NSString, IESEffectModel, IESLiveFaceStickerApi;

@interface IESLiveAudienceFaceStickerFragment : IESLiveRoomComponent <IESLiveEffectModuleAudienceFaceStickerInterface, IESLiveDataSyncDelegate, IESLiveAudienceEffectPanelService, IESLiveAudienceFaceEffectService>

@property (retain, nonatomic) IESEffectModel *currentEffect;
@property (retain, nonatomic) IESEffectModel *guestBattleEffect;
@property (nonatomic) BOOL flag;
@property (retain, nonatomic) HTSLiveStickerInfo *anchorEffectInfo;
@property (retain, nonatomic) IESLiveFaceStickerApi *stickerApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)downloadEffectModel:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)downloadEffectResource:(id)a0 completion:(id /* block */)a1;
- (void)performGuestBattleStickerWithModel:(id)a0;
- (void)cleanGuestBattleStickerIfNeeded;
- (BOOL)checkEffectInUsed:(id)a0;
- (void)updateLivePanelEffect:(id)a0 isApplied:(BOOL)a1 completion:(id /* block */)a2;
- (void)applyAudienceFaceEffect:(id)a0;
- (void)removeAudienceFaceEffect;
- (BOOL)checkIfAnchorEffectInUsed:(id)a0;
- (id)currentEffecId;
- (void)loadAllPanelFaceEffects:(id)a0 completion:(id /* block */)a1;
- (void)downloadGuestActivityEffects:(id /* block */)a0;
- (void)handleEffectSyncData:(id)a0;
- (void).cxx_destruct;

@end
