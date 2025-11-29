@interface AWEConcernRelationNetwork : NSObject

+ (void)hideMyPostFromUser:(id)a0 completion:(id /* block */)a1;
+ (void)showMyPostToUser:(id)a0 completion:(id /* block */)a1;
+ (void)topFollowingUser:(id)a0 completion:(id /* block */)a1;
+ (void)untopFollowingUser:(id)a0 completion:(id /* block */)a1;
+ (void)approveUser:(id)a0 completion:(id /* block */)a1;
+ (void)rejectUser:(id)a0 completion:(id /* block */)a1;
+ (void)unblockUser:(id)a0 completion:(id /* block */)a1;
+ (void)hidePostFromUser:(id)a0 completion:(id /* block */)a1;
+ (void)unhidePostFromUser:(id)a0 completion:(id /* block */)a1;
+ (void)followType:(long long)a0 context:(id)a1 completion:(id /* block */)a2;
+ (void)topOrUntopFollowingUser:(id)a0 type:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)blockOrHideMyPostUserID:(id)a0 type:(unsigned long long)a1 source:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)blockUser:(id)a0 completion:(id /* block */)a1;

@end
