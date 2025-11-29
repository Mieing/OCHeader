@interface IESIMGroupImpl.GroupBasicInfoUtil : HTSService <IESIMGroupBasicInfoUtil>

- (BOOL)isFoldWithConversation:(id)a0;
- (id)groupTypeWithConversation:(id)a0;
- (long long)groupCategoryWithBaseConversation:(id)a0;
- (long long)migrateGroupCategoryWithConversation:(id)a0;
- (long long)migrategroupCategoryWithBaseConversation:(id)a0;
- (BOOL)isFansGroupWithCovnersation:(id)a0;
- (BOOL)reachMaxMemberCountWithConversation:(id)a0;
- (long long)maxMemberCountWithConversation:(id)a0;
- (id)groupSourceWithConversation:(id)a0;
- (id)shlMatchUidsWithConversation:(id)a0;
- (BOOL)isEnableGroupManagerOptimizeTypeWithConversation:(id)a0;
- (id)getGroupNumberWithConversation:(id)a0;
- (BOOL)allowGroupShareWithConversation:(id)a0;
- (long long)allowInviteTypeWithConversation:(id)a0;
- (BOOL)allowInviteWithConversation:(id)a0;
- (long long)getGroupNameStatusWithConversation:(id)a0;
- (long long)groupMigrateTypeWithConversation:(id)a0;
- (BOOL)checkGroupValidAndToast:(id)a0;
- (BOOL)checkGroupValidByIdAndToast:(id)a0;
- (BOOL)groupIsBannedWithConversation:(id)a0;
- (BOOL)hasNewDefineGroupCategory:(id)a0;
- (void)getGroupNameWithConversationId:(id)a0 completion:(id /* block */)a1;
- (long long)groupCategoryWithConversation:(id)a0;
- (BOOL)isShlTmpGroupWithConversation:(id)a0;
- (id)init;

@end
