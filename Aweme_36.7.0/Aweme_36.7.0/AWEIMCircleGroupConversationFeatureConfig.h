@interface AWEIMCircleGroupConversationFeatureConfig : AWEIMBigGroupConversationFeatureConfig

- (id)groupDescPlaceholderWithConversation:(id)a0;
- (BOOL)enableGroupAvatarWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableAutoSyncLiveWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableAutoSyncWorkWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableGroupWelcomeWithConversation:(id)a0 permissionType:(unsigned long long)a1;

@end
