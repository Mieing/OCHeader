@class NSString, NSMutableArray, NSHashTable;
@protocol IESLiveInteractGameAvatarRouter, IESLiveCompoundSubscription, IESLiveInteractionModule, IESLiveMultiUserScenarioMonitor;

@interface IESLiveInteractionGiftFragment : IESLiveRoomComponent <IESLiveInteractGiftRouter, IESLiveSocialInteractAction, IESLiveMultiAudioAction, IESLiveInteractDynamicContainerActions, HTSLiveCleanScreenActions, IESLiveInteractXplayGameAction>

@property (retain, nonatomic) NSHashTable *seatViewCache;
@property (nonatomic) BOOL isInteractGiftPlaying;
@property (copy, nonatomic) id /* block */ afterSeatAnimateAction;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL isSeatAnimating;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> didFinshedDispose;
@property (retain, nonatomic) id<IESLiveMultiUserScenarioMonitor> fullLinkMonitor;
@property (weak, nonatomic) id<IESLiveInteractionModule> interactionModule;
@property (weak, nonatomic) id<IESLiveInteractGameAvatarRouter> gameAvatarRouter;
@property (retain, nonatomic) NSMutableArray *curSeatInfoArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentMount;
- (void)currentServerLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (void)currentLayoutUIDidReload;
- (void)didUpdatedGuestListWithActiveList:(id)a0;
- (void)changeCleanScreenMode:(long long)a0;
- (void)multiAudioDidChangeTeamFightLayout:(BOOL)a0;
- (void)handleClearNotify:(id)a0;
- (void)interactGiftAnimationWillStart;
- (BOOL)enableInteractGiftEmoji:(id)a0;
- (void)sendInteractEmojiGift:(id)a0 baseDir:(id)a1 receivers:(id)a2 effect:(id)a3 from:(struct CGPoint { double x0; double x1; })a4;
- (BOOL)dealWithInteractGiftJSBEvent:(id)a0 completion:(id /* block */)a1;
- (void)notifyUpdateClearScreenState:(BOOL)a0;
- (BOOL)isPlayingInteractGift;
- (void)observeFinishedPlayingInteractGift:(id /* block */)a0;
- (BOOL)isPlaying2DInteractGift;
- (void)cancel2DInteractGift;
- (BOOL)isPlaying3DInteractGift;
- (void)observeFinishedPlaying3DInteractGift:(id /* block */)a0;
- (void)canInteractionLynxGiftStart:(BOOL)a0 toUserIDs:(id)a1 completion:(id /* block */)a2;
- (id)interactSarGiftPlayerHierarchy:(BOOL)a0;
- (id)getInteractGiftSchemaParamsDict:(id)a0;
- (void)interactGiftAnimationDidFinish:(id)a0 trackerParams:(id)a1;
- (void)monitorWithName:(id)a0 extra:(id)a1;
- (id)findSeatViewForUser:(id)a0;
- (void)dynamicContainerWillStartSeatAnimate:(id)a0;
- (void)dynamicContainerDidFinishedSeatAnimate:(id)a0;
- (void)updateTakeOverSeatAvatarHidden:(BOOL)a0;
- (void)sendCurrentMicSeatInfoToLynxWithForce:(BOOL)a0;
- (id)getMicSeatInfoArrayForUsers:(id)a0;
- (struct CGPoint { double x0; double x1; })getCenterPointForInteractEmojiGift:(id)a0;
- (void)refreshCurrentSeatViewCache;
- (id)getStrFromInteractionGiftErrorCode:(long long)a0;
- (id)getAllMicSeatInfoArray;
- (id)getLinkMicIdForUserID:(id)a0;
- (BOOL)hasMicSeatInfoChangedFromOldInfo:(id)a0 toNewInfo:(id)a1;
- (id)findAllSeatViews;
- (id)getInfoDictFor:(id)a0 isMultiAudioKTV:(BOOL)a1;
- (BOOL)isAudioLeft1V8;
- (void)monitorWithName:(id)a0 extra:(id)a1 metric:(id)a2;
- (void).cxx_destruct;

@end
