@class NSString;

@interface AFDInviteFriendHelper : NSObject <AFDInviteFriendHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)transferToAllFriendsListWithInviteBlock:(id /* block */)a0 disableToast:(BOOL)a1;
+ (void)transferToAllFriendsListWithInviteBlock:(id /* block */)a0 disableToast:(BOOL)a1 maxSelectedNumber:(id)a2;
+ (void)sendInviteFriendMessageWithUserID:(id)a0 contentModel:(id)a1 dismiss:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)sendInviteFriendMessageWithSessionID:(id)a0 contentModel:(id)a1 dismiss:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)showInviteFriendTogetherViewWithViewModel:(id)a0 filter:(id /* block */)a1 showPanelBlock:(id /* block */)a2;
+ (void)sendInviteMessageToFriends:(id)a0 contentModel:(id)a1 dismiss:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)showInviteFriendTogetherViewWithViewModel:(id)a0 filter:(id /* block */)a1 invitedFriends:(id)a2 showPanelBlock:(id /* block */)a3;
+ (void)showInviteFriendTogetherViewWithViewModel:(id)a0 filter:(id /* block */)a1 dataManager:(id)a2 invitedFriends:(id)a3 showPanelBlock:(id /* block */)a4;
+ (void)sendInviteFriendInnerPushWithParams:(id)a0 completion:(id /* block */)a1;


@end
