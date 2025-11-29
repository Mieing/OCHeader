@class NSString, IESLiveRevenueInteractModule;

@interface IESLiveRevenueInteractModuleServiceImpl : IESLiveGeneralBaseService <IESLiveRevenueInteractModule>

@property (retain, nonatomic) IESLiveRevenueInteractModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)serviceDidLaunch;
- (id)coreTrackParams;
- (BOOL)isInPlaying;
- (unsigned long long)currentInteractiveScene;
- (BOOL)isSwitchInteractiveScene;
- (BOOL)isDoublePKing;
- (BOOL)isDoubleOrMultiPKing;
- (BOOL)isInRevenueInteractScene;
- (BOOL)isInRevenueInteractScreenshot;
- (BOOL)isInRevenueInteractMultiGame;
- (BOOL)needGiftEffectDegrade;
- (BOOL)isInRevenueInteractSceneGiftPK;
- (BOOL)isRevenueInteractSceneGiftPK:(unsigned long long)a0;
- (BOOL)isInSceneWithoutGuestFeature;
- (BOOL)enableSendGiftToGuest;
- (id)linkedUsers;
- (id)linkerUserWithUserID:(id)a0;
- (id)linkedUsersOnlyAnchor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamRectWithBackUp;
- (BOOL)enableSendGiftToOthers;
- (id)connectionTypeForTrack;
- (id)roomStatusForTrack;
- (BOOL)isTransformingScene;
- (void)showFeedbackViewFromSource:(long long)a0;
- (void)trackWithEvent:(id)a0 extra:(id)a1;
- (void)sendEffectRenderInfo;
- (id)baseTrackParams;
- (unsigned long long)anchorListCount;
- (id)currentBusinessInfo;
- (id)smallGiftViews;
- (id)anchorViewFrames;
- (id)uidToRenderKeys;
- (unsigned long long)currentRoleType;
- (id)currentLayoutTypeStr;
- (unsigned long long)clientMixStreamType;
- (BOOL)sendRtcEffectMsg:(long long)a0 arg1:(long long)a1 arg2:(long long)a2 arg3:(id)a3;
- (id)pkInterface;
- (id)multiLinkInterface;
- (id)entranceInterface;
- (void)showExplainCard:(BOOL)a0 preferredHeight:(double)a1 completeBlock:(id /* block */)a2;
- (void)notifyExplainCardHeightChanged:(double)a0;
- (void)startSwitchScene;
- (void).cxx_destruct;
- (id)connectionType;
- (id)anchorCount;

@end
