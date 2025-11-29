@class NSString, IESLiveLinkmicRoomEnterTracker, IESLiveInteractVoiceWaveManager;
@protocol IESLiveInteractionAsyncResourceLoader, IESLiveInteractionPreStreamCore, IESLiveBigPartyPreStreamStageDataSource;

@interface IESLiveInteractionDynamicStageVideoPrestreamAdapter : IESLiveInteractionDynamicStage <IESLiveInteractionDynamicStageDataSource, IESLiveBigPartyPreStreamStage>

@property (retain, nonatomic) IESLiveInteractVoiceWaveManager *voiceWaveManager;
@property (weak, nonatomic) id<IESLiveInteractionPreStreamCore> prestreamCore;
@property (weak, nonatomic) id<IESLiveBigPartyPreStreamStageDataSource> prestreamDataSource;
@property (weak, nonatomic) id<IESLiveInteractionAsyncResourceLoader> asyncResourceLoader;
@property (weak, nonatomic) IESLiveLinkmicRoomEnterTracker *roomEnterTracker;
@property (copy, nonatomic) id /* block */ firstRenderBgBlock;
@property (copy, nonatomic) id /* block */ firstClippedBgBlock;
@property (copy, nonatomic) id /* block */ layoutPlayerBlock;
@property (copy, nonatomic) id /* block */ reloadLayoutBlock;
@property (copy, nonatomic) id /* block */ feedViewLoadBlock;
@property (copy, nonatomic) id /* block */ firstLoadSeatsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)allSeatProviderViews;
- (id)interactAllUsersList;
- (id)emojiContainerForUserID:(id)a0 isInteractiveEmoji:(BOOL)a1;
- (void)updateGuestListWithAppData:(id)a0;
- (void)willLoad;
- (id)bgContainer;
- (void)updateWithList:(id)a0;
- (id)guestListView;
- (void)willUnLoad;
- (void)updateBackgroundViewWithCurrentLayout;
- (void)updateSinger:(id)a0;
- (void)updateWithmicPostionItem:(id)a0;
- (void)onAudioClick:(long long)a0 clickType:(unsigned long long)a1;
- (void)addLayoutSlotsToSuperView;
- (id)roomThemeUpdater;
- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (id)room;
- (struct CGSize { double x0; double x1; })placeholderSize;

@end
