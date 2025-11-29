@interface AWERelationFollowMemberSelectionBaseDataController : AWEBaseDataController

+ (void)userActionWithUserList:(id)a0 secUidList:(id)a1 groupID:(id)a2 actionType:(long long)a3 completion:(id /* block */)a4;

- (id)filterContactArray:(id)a0 withContainerUIDList:(id)a1;
- (void)__sortedSectionsTitlesWithContacts:(id)a0 completeBlock:(id /* block */)a1;
- (void)fetchAllSystemGroupsWithCompletion:(id /* block */)a0;
- (void)fetchAllUidsWithGroupID:(id)a0 completion:(id /* block */)a1;
- (void)fetchDataSourceWithContainerUIDList:(id)a0 completion:(id /* block */)a1;

@end
