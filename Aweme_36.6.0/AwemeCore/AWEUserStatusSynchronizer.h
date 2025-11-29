@class NSString, NSMutableDictionary;

@interface AWEUserStatusSynchronizer : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSMutableDictionary *usersMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishApproveUserFollowRequest:(id)a0 error:(id)a1;
- (void)didFinishTapTAIsFriendWithUser:(id)a0 isFriend:(BOOL)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)didSpecialFollowWithUser:(id)a0 error:(id)a1;
- (void)didCancelSpecialFollowWithUser:(id)a0 error:(id)a1;
- (void)p_syncUserID:(id)a0 operation:(id /* block */)a1;
- (void).cxx_destruct;
- (void)removeUser:(id)a0;
- (void)clear;
- (id)init;
- (void)dealloc;
- (void)addUser:(id)a0;

@end
