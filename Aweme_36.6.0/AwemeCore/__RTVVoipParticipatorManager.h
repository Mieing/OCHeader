@class RTVVoipTracker, RTVInviteWeChatController, NSString;
@protocol RTVUserProfileManagerInterface, RTVSettingsManager, RTVXRInteractionController, RxInjector, RTVXRControllerInjector, RTVIMConversationServiceInterface, RTVXRRoomSessionControllerInterface;

@interface __RTVVoipParticipatorManager : NSObject <RTVXRControllerInterface, RTVVoipParticipatorManagerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) RTVVoipTracker *voipTracker;
@property (readonly, weak, nonatomic) id<RTVXRInteractionController> interactionController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, weak, nonatomic) RTVInviteWeChatController *inviteWeChatController;
@property (readonly, weak, nonatomic) id<RTVIMConversationServiceInterface> imManager;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (BOOL)__supportWeChatPluginAndGroupInvitation:(id)a0;
- (id)__inVoipParticipatorIMIDsWithParticipators:(id)a0;
- (id)__onTheCallParticipatorIMIDsWithParticipators:(id)a0;
- (id)__maxSelectCountWithSession:(id)a0;
- (id)__createPluginsIfNeeded:(id)a0;
- (void)__setTrackParamsForParticipatorInviteContext:(id)a0 withSession:(id)a1;
- (id)showInvitePanelOfSession:(id)a0 autoSelectOnlineUsers:(BOOL)a1 preferInvitedUsers:(id)a2;
- (id)__showFriendsPanelOfSession:(id)a0 autoSelectOnlineUsers:(BOOL)a1 preferInvitedUsers:(id)a2;
- (id)__inviteParticipatorJoinRoom:(id)a0 autoSelectOnlineUsers:(BOOL)a1 preferInvitedUsers:(id)a2;
- (id)showInvitePanelOfSession:(id)a0 autoSelectOnlineUsers:(BOOL)a1;
- (void).cxx_destruct;

@end
