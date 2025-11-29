@class NSString, NSMutableDictionary, HTSEventContext, IESLiveComponentContext, IESLiveInteractionLayout, IESEffectModel;

@interface IESLiveInteractiveVirtualAvatarStore : NSObject <IESLiveUserLinkTypeActions, IESLiveSocialInteractAction, IESLiveBigPartyActions, IESLiveLinkmicSettingActions>

@property (retain, nonatomic) NSMutableDictionary *stageImageFilePathCache;
@property (retain, nonatomic) IESLiveInteractionLayout *prevLayout;
@property (copy, nonatomic) NSString *preLargeUid;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESEffectModel *activeAvatarModel;
@property (nonatomic) BOOL usedAvatarOnceLink;
@property (nonatomic) BOOL linkmicSettingDisabled;
@property (nonatomic) unsigned long long currentScene;
@property (nonatomic) int currentUserLinkType;
@property (nonatomic) int currentUserLinkTypeWillChangeTo;
@property (nonatomic) int linkTypeManuallyFlag;
@property (nonatomic) int lastUsedLinkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)currentServerLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (void)currentFlattenSceneDidChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)addListener;
- (void)bigPartyAllMembersListDidChange:(id)a0;
- (void)didUpdateAnchorSettings:(id)a0;
- (void)updateUserLinkType:(int)a0;
- (void)updateUserLinkTypeByForce:(int)a0;
- (void)autoStartAvatarMode;
- (void)tryingSwitch2LinkType:(int)a0;
- (void)forceSwitchToAudioType;
- (void)p_didUpdateAnchorSettings:(id)a0;
- (void)loadStageImageWithIdentifier:(id)a0 cacheMissed:(id /* block */)a1 completion:(id /* block */)a2;
- (void)changeAvatarCamerPosition:(BOOL)a0 isLarge:(BOOL)a1;
- (void)switch2LinkType:(int)a0;
- (void)p_showKTVModeChangedToastIfNeeded:(int)a0;
- (BOOL)p_isLoginUserInAnonyLinkmic;
- (void)preloadModelWithScene:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
