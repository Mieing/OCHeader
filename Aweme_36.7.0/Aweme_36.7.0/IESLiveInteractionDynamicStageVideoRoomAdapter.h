@class NSString;
@protocol IESLiveRoomService, IESLiveInteractionLinkerService, IESLiveBigPartyStageAdapter;

@interface IESLiveInteractionDynamicStageVideoRoomAdapter : IESLiveInteractionDynamicStage <IESLiveGuestBattleUIAdaptor, IESLiveInteractionDynamicStageDataSource, IESLiveInteractionStage, IESLiveBigPartyStage, IESLiveBigPartyGuestsListView>

@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveBigPartyStageAdapter> adapter;

- (void)didSetAttachingDIContext;
- (id)allSeatProviderViews;
- (id)interactAllUsersList;
- (id)emojiContainerForUserID:(id)a0 isInteractiveEmoji:(BOOL)a1;
- (void)updateGuestListWithAppData:(id)a0;
- (void)willLoad;
- (id)guestBattleUIAdaptor;
- (id)bgContainer;
- (void)updateWithList:(id)a0;
- (id)emojiContainerForUserID:(id)a0;
- (void)onGuestBattleFinish;
- (id)guestBattleScoreViewMap;
- (id)guestBattleInfoViewMap;
- (void)onGuestBattleStart;
- (void)onGuestBattleSettle;
- (void)willUnLoad;
- (id)guestsListView;
- (void)updateSeat;
- (BOOL)checkHasEmptySeat;
- (void)updateWithActiveList:(id)a0;
- (long long)hiddenSeatCount;
- (id)viewWithIndex:(unsigned long long)a0;
- (id)viewWithLinkMicID:(id)a0;
- (id)currentGuestListView;
- (void)onAudioClick:(long long)a0 clickType:(unsigned long long)a1;
- (void)addLayoutSlotsToSuperView;
- (id)roomThemeUpdater;
- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (id)layout;

@end
