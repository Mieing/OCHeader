@class NSString;

@interface AWEFollowGroupFunctionManager : NSObject <AWEFollowGroupFunctionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createNewGroupWithName:(id)a0 completion:(id /* block */)a1;
+ (void)updateGroupWithNewName:(id)a0 groupID:(id)a1 completion:(id /* block */)a2;
+ (void)deleteGroupWithGroupID:(id)a0 completion:(id /* block */)a1;
+ (void)getAllGroupListWithGroupType:(long long)a0 sourceType:(long long)a1 completion:(id /* block */)a2;
+ (void)getAllGroupListInPanelWithUserID:(id)a0 completion:(id /* block */)a1;
+ (void)getAllGroupListInAddPageWithCompletion:(id /* block */)a0;
+ (void)getGroupListWithCursor:(long long)a0 perPageCount:(long long)a1 maxMemberCount:(long long)a2 groupType:(long long)a3 sourceType:(long long)a4 completion:(id /* block */)a5;
+ (void)getGroupTotalCountInFollowListWithCompletion:(id /* block */)a0;
+ (void)updateUserBelongGroups:(id)a0 oldBelongGroupIDs:(id)a1 newBelongGroupIDs:(id)a2 completion:(id /* block */)a3;
+ (void)getGroupUserListWithGroupID:(id)a0 perPageCount:(long long)a1 completion:(id /* block */)a2;
+ (BOOL)isCommerceGroup:(id)a0;
+ (BOOL)isSpecialGroup:(id)a0;


@end
