@interface AWEIMGroupUtils : NSObject

+ (BOOL)shouldDisplayNoticeHintAtChat:(id)a0;
+ (void)sendInviteGroupMessageWithInfo:(id)a0 completion:(id /* block */)a1;
+ (void)showSendInviteCardWithInvalidMembers:(id)a0 toConversation:(id)a1 statusCode:(long long)a2 statusMsg:(id)a3 isCreateChat:(BOOL)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
+ (void)showSendInviteCardWithUserIDs:(id)a0 toConversation:(id)a1 actionBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
+ (void)showSendInviteCardWithUserIDs:(id)a0 toConversation:(id)a1 needToast:(BOOL)a2 actionBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
+ (void)showSendInviteCardWithInvalidMembers:(id)a0 toConversation:(id)a1 statusCode:(long long)a2 statusMsg:(id)a3 isCreateChat:(BOOL)a4 needToast:(BOOL)a5 actionBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;
+ (id)userArrayWithParticipant:(id)a0;
+ (void)sendInviteGroupBubbleMessageWithInfo:(id)a0 completion:(id /* block */)a1;
+ (id)userArrayWithParticipant:(id)a0 count:(long long)a1 ownerID:(id)a2;
+ (void)sendInviteGroupMessageWithConversationID:(id)a0 toUsers:(id)a1 needToast:(BOOL)a2;
+ (void)trackEventWithEnterMethod:(id)a0 type:(id)a1 userIDArray:(id)a2 action:(id)a3 conversation:(id)a4;
+ (void)sendInviteGroupMessageWithConversationID:(id)a0 toUsers:(id)a1;
+ (BOOL)shouldShowInviteMemberEntranceOfConversation:(id)a0;
+ (BOOL)shouldShowDeleteMemberEntranceWithParticipants:(id)a0 currentUserRole:(long long)a1;

@end
