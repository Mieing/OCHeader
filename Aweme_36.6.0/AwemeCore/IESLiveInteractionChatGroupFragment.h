@class NSString, NSMutableDictionary, IESLiveInteractionChatGroupStore, IESLiveGCDTimer, HTSLiveToolbarItem, HTSLiveLinkmicAudienceSetting, IESLiveInteractionChatGroupPanelView;

@interface IESLiveInteractionChatGroupFragment : IESLiveRoomComponent <IESLiveInteractionChatGroupRouter, HTSLiveMessageSubscriber, IESLiveInteractionChatGroupPanelViewDelegate, IESLiveSocialInteractAction, IESLiveKTVActions, IESLiveLinkmicSettingActions>

@property (retain, nonatomic) IESLiveInteractionChatGroupStore *store;
@property (retain, nonatomic) IESLiveInteractionChatGroupPanelView *panelView;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) HTSLiveToolbarItem *ktvChatGroupItem;
@property (retain, nonatomic) NSMutableDictionary *lastInviteTimestamp;
@property (copy, nonatomic) id /* block */ fininshPlayingAction;
@property (retain, nonatomic) HTSLiveLinkmicAudienceSetting *distributionSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)currentServerLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (void)currentFlattenSceneDidChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)currentUserType;
- (BOOL)hasKtvChatGroup;
- (void)createKtvChatGroupFromRequestPage:(id)a0;
- (void)didUpdateAudienceSettings:(id)a0;
- (void)didChangedAudienceSetting:(id)a0;
- (void)endSocialInteractWithScene:(unsigned long long)a0;
- (void)startSocialInteractWithScene:(unsigned long long)a0;
- (void)didStopPlayMusicWithMusicID:(id)a0 finished:(BOOL)a1;
- (void)panelViewDidClickButton:(id)a0;
- (void)inviteToJoinKtvChatGroup:(id)a0;
- (void)updateKtChatGroupToolBarItemIfNeeded:(int)a0;
- (void)p_dismissPanelView;
- (void)p_onReceivedLinkMicGuideMessage:(id)a0;
- (void)showCreateKtvGroupPanelViewFrom:(id)a0 autoCreate:(BOOL)a1;
- (void)removeKtvToolBarItem;
- (void)loadKtvToolBarItem;
- (void)showJoinKtvGroupPanelView:(id)a0;
- (void)trackEvent:(id)a0 bizMaker:(id /* block */)a1;
- (void)showChatGroupManagerViewControllerFrom:(id)a0 groupID:(id)a1;
- (void)showPanelView:(id)a0 type:(long long)a1 showCompletion:(id /* block */)a2 hideCompletion:(id /* block */)a3;
- (BOOL)p_checkShownGuideLimitaion;
- (void)p_showPanelViewWithCreateGroupChatGuideContent:(id)a0;
- (void)p_showPanelViewWithJoinGroupChatGuideContent:(id)a0;
- (void)p_startDismissTimer;
- (void)pr_trackGroupChatInviteToastWithInviteType:(id)a0 actionType:(id)a1 bizMaker:(id /* block */)a2;
- (void)p_stopDismissTimer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
