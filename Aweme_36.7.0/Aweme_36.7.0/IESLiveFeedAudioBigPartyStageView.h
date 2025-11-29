@class NSString, IESLiveFeedAudioStageViewExtraModel, IESLiveInteractVoiceWaveManager, IESLiveBigPartyPreStreamStage, IESLiveBigPartyPreStreamController, HTSLiveUser, IESLiveInteractionLayout, IESLiveInteractionDynamicStageAudioPrestreamAdapter;
@protocol IESLiveRoomService;

@interface IESLiveFeedAudioBigPartyStageView : UIView <IESLiveBigPartyPreStreamDataSource, IESLiveFeedAudioStageViewProtocol>

@property (retain, nonatomic) IESLiveBigPartyPreStreamController *bigPartyController;
@property (retain, nonatomic) IESLiveBigPartyPreStreamStage *stage;
@property (retain, nonatomic) IESLiveInteractionLayout *currentLayout;
@property (retain, nonatomic) IESLiveInteractVoiceWaveManager *voiceWaveManager;
@property (retain, nonatomic) IESLiveBigPartyPreStreamController *outterBigPartyControler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSLiveUser *roomOwner;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) IESLiveFeedAudioStageViewExtraModel *extraModel;
@property (nonatomic) BOOL smallMode;
@property (nonatomic) BOOL enableLayoutConfig;
@property (nonatomic) BOOL userLynxSeat;
@property (weak, nonatomic) IESLiveInteractionDynamicStageAudioPrestreamAdapter *audioPreSteamDynamicView;
@property (copy, nonatomic) id /* block */ firstBgRenderBlock;

- (id)anchorID;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })guestListViewFrame;
- (BOOL)isAudioLive;
- (id)allSeatProviderViews;
- (void)configWithListModel:(id)a0;
- (id)emojiContainerForUserID:(id)a0 isInteractiveEmoji:(BOOL)a1;
- (BOOL)isFullScreenPreStreamView;
- (id)playerForBigParty;
- (id)seiReceiverForBigParty;
- (id)containerForBigParty;
- (id)playerContainerForBigParty;
- (struct CGSize { double x0; double x1; })mediaSizeForBigParty;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerFrameForBigParty;
- (long long)bigPartyContentModeForEqual;
- (long long)bigPartyContentModeForNonOverlapping;
- (id)enterFromForBigParty;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })stageInsetsForAdapterSize:(struct CGSize { double x0; double x1; })a0;
- (void)willLoad;
- (BOOL)isCustomizeAudioRoom;
- (void)willUnLoad;
- (BOOL)useLynxStage:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roomOwner:(id)a1 roomModel:(id)a2 layout:(id)a3 extra:(id)a4;
- (void)handleSEIParseResult:(id)a0 metaDict:(id)a1;
- (void)updateAnchorUser:(id)a0;
- (void)relayoutPlayer;
- (void)showEnterFollowAnimateViewIfNeed:(id /* block */)a0;
- (void).cxx_destruct;
- (id)layout;
- (id)roomID;

@end
