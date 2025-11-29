@interface AWEIMBigGroupConversationFeatureConfig : AWEIMNormalGroupConversationFeatureConfig

- (id)groupDescTemplateWithConversation:(id)a0;
- (id)groupDescPlaceholderWithConversation:(id)a0;
- (BOOL)enableInviteSyncingChangedBackgroundWithCon:(id)a0 peerUser:(id)a1;
- (BOOL)shouldUseBigGroupStrategyForStickOnTopMessagesPromptNotice;
- (BOOL)enableGroupNameWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableGroupAvatarWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableGroupInviteWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableGroupShareWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableGroupNumberWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableGroupManagementEntryWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableGroupDescWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableGroupAdminWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableEntryLimitWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableAuditWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableAutoSyncLiveWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableAutoSyncWorkWithConversation:(id)a0 permissionType:(unsigned long long)a1;

@end
