@class NSString;

@interface AWELiveInteractiveInviteServiceImpl : NSObject <IESLiveInteractiveInviteService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackParams;
- (void)createGroupManagementVCWithConversationID:(id)a0 extension:(id)a1 completion:(id /* block */)a2;
- (void)joinConversation:(id)a0 shortId:(long long)a1 bizExtension:(id)a2 completion:(id /* block */)a3;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)showInviteFriendsPanelEnterFrom:(id)a0 enterMethod:(id)a1 scene:(id)a2 openSchema:(id)a3 confirmBtnTitle:(id)a4 notSelectableUids:(id)a5 defaultSelectUids:(id)a6 extra:(id)a7 selectCompletion:(id /* block */)a8;
- (void)p_inviteFriends:(id)a0 seatIndex:(long long)a1;
- (BOOL)isInChorusRoom;
- (void)inviteFriends:(id)a0 type:(unsigned long long)a1 inviteeType:(long long)a2 recommendReason:(id)a3 completion:(id /* block */)a4;
- (void)p_inviteFriendsForChorusRoom:(id)a0 seatIndex:(long long)a1;
- (id)createPrivateMessage:(unsigned long long)a0 inviteeType:(long long)a1 recommendReason:(id)a2;
- (void)sendPrivateMessage:(id)a0 toFriends:(id)a1;
- (void)fixFriendState:(id)a0 successUids:(id)a1 error:(id)a2;
- (void)inviteFriends:(id)a0 type:(unsigned long long)a1 inviteeType:(long long)a2 recommendReason:(id)a3 seatIndex:(long long)a4 extraParam:(id)a5 completion:(id /* block */)a6;
- (void)trackFriendConnectionInvite:(id)a0;
- (void)switchChorusUserState:(id)a0 completion:(id /* block */)a1;
- (id)createPrivateMessage:(unsigned long long)a0 inviteeType:(long long)a1 recommendReason:(id)a2 action:(id)a3;
- (void)sendPrivateMessage:(id)a0 toUser:(id)a1;
- (void)sendInviteFriendRequest:(id)a0 type:(unsigned long long)a1 inviteeType:(long long)a2 recommendReason:(id)a3 seatIndex:(long long)a4 extraParam:(id)a5 withCompletion:(id /* block */)a6;
- (id)createPrivateMessage:(unsigned long long)a0 inviteeType:(long long)a1 recommendReason:(id)a2 action:(id)a3 applySource:(id)a4;
- (id)currentUserType;
- (BOOL)adminModeEnable;
- (BOOL)isUserLinked:(id)a0;
- (void)showInviteFriendsPanelForSeatIndex:(long long)a0;
- (void)showInviteMoreFriendsPanelForSeatIndex:(long long)a0;
- (void)inviteFriends:(id)a0 type:(unsigned long long)a1;
- (void)createGroupWithParticipants:(id)a0 bizExtension:(id)a1 completion:(id /* block */)a2;
- (void)showMessageChannelInvitePanel:(id /* block */)a0 withHeight:(double)a1 cornerRadii:(double)a2 showRecommond:(BOOL)a3 userShare:(id /* block */)a4 close:(id /* block */)a5 show:(id /* block */)a6 diContext:(id)a7;
- (void)sendPrivateMessageWithInviteType:(unsigned long long)a0 inviteeType:(long long)a1 recommendReason:(id)a2 toUser:(id)a3 action:(id)a4;
- (void)sendPrivateMessageWithInviteType:(unsigned long long)a0 inviteeType:(long long)a1 recommendReason:(id)a2 toUser:(id)a3 action:(id)a4 applySource:(id)a5;
- (id)_mapRoomModel:(id)a0 currentScene:(unsigned long long)a1;

@end
