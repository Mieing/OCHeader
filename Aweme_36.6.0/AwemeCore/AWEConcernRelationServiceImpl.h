@class NSString;

@interface AWEConcernRelationServiceImpl : HTSService <AWEConcernRelationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)approve:(id)a0 completion:(id /* block */)a1;
+ (void)reject:(id)a0 completion:(id /* block */)a1;
+ (void)rejectWithNotice:(id)a0 userID:(id)a1 completion:(id /* block */)a2;
+ (BOOL)isApproveRequestOnAir;
+ (void)hideMyPostFromUser:(id)a0 completion:(id /* block */)a1;
+ (void)showMyPostToUser:(id)a0 completion:(id /* block */)a1;
+ (long long)convertBlockStatusToHideMyPostStatus:(long long)a0;
+ (id)convertUserGenderType:(long long)a0 showGenderStrategy:(unsigned long long)a1;
+ (void)hideHerPost:(id)a0 completion:(id /* block */)a1;
+ (void)unhideHerPost:(id)a0 completion:(id /* block */)a1;
+ (long long)convertBlockStatusToHideHerPostStatus:(long long)a0;
+ (void)block:(id)a0 completion:(id /* block */)a1;
+ (void)unblock:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isFollowRequestOnAir;
+ (void)removeFans:(id)a0 completion:(id /* block */)a1;
+ (void)topFollowingUser:(id)a0 completion:(id /* block */)a1;
+ (void)untopFollowingUser:(id)a0 completion:(id /* block */)a1;
+ (void)followParamsRegulation:(id)a0;
+ (void)unfollow:(id)a0 completion:(id /* block */)a1;
+ (void)follow:(id)a0 completion:(id /* block */)a1;
+ (long long)prePageTypeWithContext:(id)a0;
+ (void)dislike:(id)a0 completion:(id /* block */)a1;
+ (void)closeFriends:(id)a0 completion:(id /* block */)a1;
+ (void)unCloseFriends:(id)a0 completion:(id /* block */)a1;
+ (long long)prePageTypeWithEnterFrom:(id)a0;
+ (void)blockUser:(id)a0 completion:(id /* block */)a1;


@end
