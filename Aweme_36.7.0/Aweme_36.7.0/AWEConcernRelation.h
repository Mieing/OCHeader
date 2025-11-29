@interface AWEConcernRelation : NSObject

+ (void)approve:(id)a0 completion:(id /* block */)a1;
+ (void)reject:(id)a0 completion:(id /* block */)a1;
+ (void)rejectWithNotice:(id)a0 userID:(id)a1 completion:(id /* block */)a2;
+ (BOOL)isApproveRequestOnAir;
+ (void)hideMyPostFromUser:(id)a0 completion:(id /* block */)a1;
+ (void)showMyPostToUser:(id)a0 completion:(id /* block */)a1;
+ (void)hideHerPost:(id)a0 completion:(id /* block */)a1;
+ (void)unhideHerPost:(id)a0 completion:(id /* block */)a1;
+ (void)block:(id)a0 completion:(id /* block */)a1;
+ (void)unblock:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isFollowRequestOnAir;
+ (void)removeFans:(id)a0 completion:(id /* block */)a1;
+ (void)topFollowingUser:(id)a0 completion:(id /* block */)a1;
+ (void)untopFollowingUser:(id)a0 completion:(id /* block */)a1;
+ (void)unfollow:(id)a0 completion:(id /* block */)a1;
+ (void)follow:(id)a0 completion:(id /* block */)a1;
+ (void)dislike:(id)a0 completion:(id /* block */)a1;
+ (void)closeFriends:(id)a0 completion:(id /* block */)a1;
+ (void)unCloseFriends:(id)a0 completion:(id /* block */)a1;
+ (id)requireLogin;
+ (id)approveWithUserID:(id)a0;
+ (id)rejectWithUserID:(id)a0;
+ (id)handleFollowRequestWithNotice:(id)a0;
+ (id)blockWithUserID:(id)a0;
+ (void)taskSource:(id)a0 completion:(id /* block */)a1;
+ (void)taskSource:(id)a0 completion:(id /* block */)a1;
+ (id)blockWithUser:(id)a0;
+ (id)unblockWithUserID:(id)a0;
+ (id)hideMyPostWithUserID:(id)a0;
+ (id)showMyPostToUserID:(id)a0;
+ (id)hideHerPostWithUserID:(id)a0;
+ (id)unhideHerPostWithUserID:(id)a0;
+ (void)follow:(id)a0 completionWithErrorToastControl:(id /* block */)a1;
+ (id)getLoginContextWithUserID:(id)a0 fromPageType:(long long)a1;
+ (id)checkFollowRequestOnAir:(id)a0;
+ (id)requireLoginWithLoginContext:(id)a0;
+ (id)commitFollowWithContext:(id)a0 followType:(long long)a1;
+ (BOOL)shouldOptimizeNetResponse;
+ (id)configErrorDescription:(id)a0;
+ (void)tryRevertFollowStatus:(id)a0 task:(id)a1 error:(id)a2;
+ (void)tryRevertUnfollowStatus:(id)a0 task:(id)a1;
+ (Class)aAWERelationDOUYINHTSAdapterClass;
+ (void)uploadfollowParams:(id)a0 isDebug:(BOOL)a1;
+ (id)awe_enterFromMapDictionary;
+ (long long)awe_prePageTypeForRecommendCardWithContext:(id)a0;
+ (BOOL)awe_isFromFamiliarItem:(id)a0;
+ (long long)awe_prePageTypeWithEnterFrom:(id)a0;
+ (id)awe_enterFromRecommendMapDictionary;
+ (long long)awe_prePageTypeWithContext:(id)a0;
+ (id)topWithUserID:(id)a0;
+ (id)untopWithUserID:(id)a0;
+ (void)blockUser:(id)a0 completion:(id /* block */)a1;

- (id)aAWERelationDOUYINHTSAdapter;

@end
