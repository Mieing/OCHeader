@class TIMXSDKInstance;

@interface TIMXFriendService : NSObject {
    TIMXSDKInstance *_r;
}

- (id)userProfileWithPBModel:(id)a0;
- (void)fetchProfileInfoWithInbox:(int)a0 userId:(long long)a1 fromSource:(BOOL)a2 completion:(id /* block */)a3;
- (void)batchFetchProfileInfoWithInbox:(int)a0 userIds:(id)a1 completion:(id /* block */)a2;
- (void)searchUserWithInbox:(int)a0 searchKey:(id)a1 completion:(id /* block */)a2;
- (void)deleteFriendsWithInbox:(int)a0 uidArray:(id)a1 completion:(id /* block */)a2;
- (void)fetchFriendListWithInbox:(int)a0 cursor:(long long)a1 limit:(long long)a2 getTotalCount:(BOOL)a3 completion:(id /* block */)a4;
- (void)sendFriendApplyWithInbox:(int)a0 uid:(long long)a1 ext:(id)a2 completion:(id /* block */)a3;
- (void)fetchSentFriendApplyListWithInbox:(int)a0 cursor:(long long)a1 limit:(long long)a2 getTotalCount:(BOOL)a3 status:(long long)a4 completion:(id /* block */)a5;
- (void)fetchReceivedFriendApplyListForStatus:(long long)a0 cursor:(long long)a1 limit:(long long)a2 completion:(id /* block */)a3;
- (void)fetchReceivedFriendApplyListWithInbox:(int)a0 cursor:(long long)a1 limit:(long long)a2 getTotalCount:(BOOL)a3 status:(long long)a4 completion:(id /* block */)a5;
- (void)replyFriendApplyWithApplyModel:(id)a0 attitude:(long long)a1 completion:(id /* block */)a2;
- (void)replyFriendApplyWithInbox:(int)a0 uidArray:(id)a1 attitude:(long long)a2 ext:(id)a3 completion:(id /* block */)a4;
- (void)fetchProfileInfoWithUserId:(long long)a0 completion:(id /* block */)a1;
- (void)batchFetchProfileInfoWithUserIds:(id)a0 completion:(id /* block */)a1;
- (void)searchUserWithSearchKey:(id)a0 completion:(id /* block */)a1;
- (void)deleteFriendWithUid:(long long)a0 completion:(id /* block */)a1;
- (void)fetchFriendListWithCursor:(long long)a0 completion:(id /* block */)a1;
- (void)sendFriendApplyToUserId:(long long)a0 completion:(id /* block */)a1;
- (void)fetchSentFriendApplyListWithCursor:(long long)a0 completion:(id /* block */)a1;
- (void)fetchReceivedFriendApplyListForStatus:(long long)a0 cursor:(long long)a1 completion:(id /* block */)a2;
- (void)approveApply:(id)a0 completion:(id /* block */)a1;
- (void)rejectApply:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
