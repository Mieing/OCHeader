@class NSString, AWESocialRelationObserver;

@interface AWECloseFriendsStateDataProvider : AWESocialRelationDataProvider <AWEUserMessage, AWECloseFriendsStateDataProvider>

@property (retain, nonatomic) AWESocialRelationObserver *mateStatusObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interceptor_write:(id)a0 completion:(id /* block */)a1;
- (id)interceptor_readFromMemory:(id)a0;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishTapTAIsFriendWithUser:(id)a0 isFriend:(BOOL)a1;
- (id)readFromMemory:(id)a0;
- (long long)fakeGenerateButtonStatusAfterClick:(long long)a0;
- (BOOL)userIsCloseFriendsType:(long long)a0;
- (BOOL)userIsForwardCloseFriendsType:(long long)a0;
- (BOOL)userIsReverseCloseFriendsType:(long long)a0;
- (BOOL)userIsCloseFriends:(id)a0 scene:(id)a1;
- (long long)getCloseFriendsStatusWithUserID:(id)a0 scene:(id)a1;
- (void)updateCloseFriendsUserWithProfileUser:(id)a0;
- (void)updateCloseFriendsUserForIMWithUserID:(id)a0 closeFriendsType:(long long)a1;
- (long long)closeFriendStatusWithType:(long long)a0;
- (void)p_removeCloseFriendsWithUserID:(id)a0 action:(id)a1;
- (void)p_addCloseFriends:(id)a0 completion:(id /* block */)a1;
- (void)p_removeCloseFriends:(id)a0 completion:(id /* block */)a1;
- (void)p_batchUpdateCloseFriends:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkReachedCloseFriendsCountLimit:(id)a0;
- (void)p_handleNetworkError:(id)a0 completion:(id /* block */)a1;
- (void)p_handleAddCloseFriendsWithResponseModel:(id)a0 userID:(id)a1 completion:(id /* block */)a2;
- (void)p_showToastWithResponseModel:(id)a0 shouldShow:(BOOL)a1;
- (void)p_requestRemoveCloseFriends:(id)a0 completion:(id /* block */)a1;
- (void)p_handleRemoveCloseFriendsWithResponseModel:(id)a0 userID:(id)a1 completion:(id /* block */)a2;
- (void)p_handleBatchUpdateCloseFriendsWithResponseModel:(id)a0 userIDList:(id)a1 completion:(id /* block */)a2;
- (void)p_updateCloseFriendsUserWithUserID:(id)a0 closeFriendType:(long long)a1 action:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)identifier;
- (void)dealloc;
- (void)write:(id)a0 completion:(id /* block */)a1;

@end
