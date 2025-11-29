@interface IESIMGroupSpeakPermissionService : NSObject <IESIMGroupSpeakPermissionService>

- (long long)conversationSpeakModeWithConversation:(id)a0;
- (BOOL)conversationIsBanned:(id)a0;
- (long long)currentUserSpeakStateWithConversation:(id)a0;
- (long long)speakStateWithConversation:(id)a0 participant:(id)a1;
- (void)setConversationAssignSpeakMode:(id)a0 addAssignUserList:(id)a1 removeAssignUserList:(id)a2 completion:(id /* block */)a3;
- (long long)maxAssignSpeakMemberCount;
- (id)init;

@end
