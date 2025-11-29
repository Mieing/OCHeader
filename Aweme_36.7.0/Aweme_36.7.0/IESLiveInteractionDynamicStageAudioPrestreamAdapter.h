@class NSString, UIView;
@protocol IESLiveInteractUserModel, IESLiveInteractionPreStreamCore, IESLiveBigPartyPreStreamStageRoomThemeUpdater, IESLiveRoomService;

@interface IESLiveInteractionDynamicStageAudioPrestreamAdapter : IESLiveInteractionDynamicStage <IESLiveInteractionDynamicStageDataSource, IESLiveInteractionStage>

@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL isPcStreaming;
@property (nonatomic) BOOL isGuestEnlarge;
@property (nonatomic) BOOL orderSingStageIsReady;
@property (nonatomic) BOOL is2DAvatarForCurrentEnlarge;
@property (retain, nonatomic) NSString *avatarStr;
@property (retain, nonatomic) id<IESLiveInteractUserModel> enlargeUser;
@property (weak, nonatomic) id<IESLiveInteractionPreStreamCore> prestreamCore;
@property (weak, nonatomic) UIView *audioPrestreamSlotContainer;
@property (weak, nonatomic) id<IESLiveBigPartyPreStreamStageRoomThemeUpdater> audioRoomThemeUpdater;
@property (copy, nonatomic) id /* block */ resizePlayerBlock;
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
- (BOOL)enableRadiusBgCut;
- (void)updateWithList:(id)a0;
- (void)notifyOrderSingStageReadyStatus:(BOOL)a0;
- (id)supportedLayouts;
- (void)willUnLoad;
- (void)updateWithmicPostionItem:(id)a0;
- (void)updateBackgroundHiddenStatus:(BOOL)a0;
- (void)updateBackgroundCutWithCurrentLayout;
- (void)checkIfOrderSingPcIsStreaming;
- (void)removeMVBackgroundView;
- (BOOL)currentPcIsSreaming;
- (BOOL)isInPlayMode:(long long)a0;
- (BOOL)isValidWithLayout:(id)a0;
- (void)loadMVBackgroundViewWithMVBackground:(id)a0 mvBackgroundType:(unsigned long long)a1;
- (BOOL)enableAudioChatRoomCustomizeStreaming;
- (void)loadTextContainerIfNeed:(id)a0;
- (id)initWithLayout:(id)a0 room:(id)a1;
- (void)insertBgWithView:(id)a0;
- (void)updateBgInsertViewDict:(id)a0;
- (void)onAudioClick:(long long)a0 clickType:(unsigned long long)a1;
- (void)addLayoutSlotsToSuperView;
- (id)roomThemeUpdater;
- (void)sendOrderSingVisualEvent;
- (BOOL)customizeStreamingLayoutReady;
- (id)visualType;
- (BOOL)currentLayoutEnableAvatarOrPCStreaming;
- (void).cxx_destruct;
- (id)isVisual;

@end
