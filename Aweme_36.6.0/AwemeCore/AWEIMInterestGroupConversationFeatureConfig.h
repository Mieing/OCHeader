@interface AWEIMInterestGroupConversationFeatureConfig : AWEIMBigGroupConversationFeatureConfig

- (id)groupDescTemplateWithConversation:(id)a0;
- (id)groupDescPlaceholderWithConversation:(id)a0;
- (BOOL)enableChatDetailHistoryMediaWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableUsingFansGroupMuteStrategyWithConversation:(id)a0;
- (BOOL)enableGroupOpenNoticeMessageWithConversation:(id)a0;
- (BOOL)enableEditShowGroupEntranceOnUserProfileWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableMutingFilterWithConversation:(id)a0;
- (BOOL)enableMuteSettingOptionFoldWithConversation:(id)a0;
- (BOOL)enableMutingFilterWithBaseConversation:(id)a0;
- (BOOL)enableGroupAvatarWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableMuteSettingWithConversation:(id)a0;
- (BOOL)enableGroupNumberWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableEntryLimitWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableAuditWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableGroupWelcomeWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)useFansGroupStyleForGroupMemberListPage;

@end
