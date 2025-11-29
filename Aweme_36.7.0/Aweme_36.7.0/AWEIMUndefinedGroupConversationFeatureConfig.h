@interface AWEIMUndefinedGroupConversationFeatureConfig : AWEIMNormalGroupConversationFeatureConfig

- (BOOL)enableMuteSettingOptionFoldWithConversation:(id)a0;
- (BOOL)enableGroupInviteWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableGroupShareWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)__isMatrixGroupWithConversationSharedSyncedExt:(id)a0;

@end
