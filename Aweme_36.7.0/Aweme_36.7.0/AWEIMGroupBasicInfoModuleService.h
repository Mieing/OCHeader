@interface AWEIMGroupBasicInfoModuleService : HTSService <AWEIMGroupBasicInfoModuleService>

- (BOOL)canCreatePublicGroup;
- (void)getGroupNameWithConversationId:(id)a0 completion:(id /* block */)a1;
- (id)getCurrentUserGroupAliasWithConversationId:(id)a0;
- (BOOL)checkIsPublicGroupWithConversation:(id)a0;
- (id)init;

@end
