@class IESLiveGuestBattleStore, IESLiveGuestBattleModel, NSString, NSNumber;

@interface IESLiveGuestBattleComponent : IESLiveInteractComponentBase <IESLiveGuestBattleRouter, IESLiveGuestBattleReaction, IESLiveGuestBattleActions, IESLiveSocialInteractAction>

@property (retain, nonatomic) IESLiveGuestBattleStore *store;
@property (retain, nonatomic) IESLiveGuestBattleModel *battleModel;
@property (nonatomic) BOOL isValidDynamicLynxVersion;
@property (retain, nonatomic) NSNumber *startLinkTimestamp;
@property (nonatomic) BOOL isChestUiShowing;
@property (nonatomic) double treasureChestViewHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (id)dressID;
- (BOOL)isInGuestBattle;
- (id)guestBattleTrackDic;
- (double)currentTreasureChestViewHeight;
- (BOOL)needPressPublicScreenForTreasureChest;
- (void)onGuestBattleStartFromNone;
- (void)onGuestBattleStartFromSettle;
- (void)onGuestBattleSettleFromNone;
- (void)onGuestBattleSettleFromBattle;
- (void)onGuestBattlePause;
- (void)onGuestBattleResume;
- (void)onGuestBattleFinish;
- (BOOL)enableGuestBattleEntrance:(unsigned long long)a0;
- (void)showGuestBattleControlPanel:(id)a0;
- (void)trackLynxOpenGuestBattleSuccessWithScoreType:(id)a0 duration:(id)a1 loserNum:(id)a2 isAnchorInvolved:(id)a3 uiType:(id)a4;
- (void)finishGuestBattleManually;
- (void)pauseGuestBattle;
- (void)resumeGuestBattle;
- (id)guestBattleDefaultBackGround;
- (void)dealWithGuestBattleJSBEvent:(id)a0;
- (id)guestBattleTypeForTrack;
- (id)guestBattleScoreMap;
- (id)guestBattleScoreViewMap;
- (id)guestBattleInfoViewMap;
- (id)guestBattleID;
- (long long)guestBattleType;
- (int)guestBattleUiType;
- (void)showGuestBattleSceneChangeConfirmModalDialogWithSceneName:(id)a0 actionName:(unsigned long long)a1 confirmBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (void)componentBindContext;
- (void)componentDidUpdatedGuestList:(id)a0;
- (void)loadMessageHandlers;
- (void)componentEnterRoom;
- (void)trackPlayModeLinkDuration;
- (void)componentDidChangedFromLayout:(id)a0 toLayout:(id)a1;
- (void)trackPlayModeLink;
- (BOOL)shouldUseRealScore:(id)a0;
- (id)getCurrentUIAdaptor;
- (void)doVictoryAnimation:(id)a0;
- (void)doAvatarAnimation:(id)a0 url:(id)a1 type:(long long)a2 completion:(id /* block */)a3;
- (void)componentDidJoinChannel;
- (void)componentDidLeaveChannel;
- (void)showGuestBattleRankPanel;
- (void)startGuestBattleWithScoreType:(id)a0 duration:(id)a1 loserNum:(id)a2 isAnchorInvolved:(id)a3 uiType:(id)a4;
- (void).cxx_destruct;
- (id)resource;
- (BOOL)isAnchor;

@end
