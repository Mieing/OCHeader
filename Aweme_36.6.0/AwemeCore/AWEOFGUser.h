@class NSString;

@interface AWEOFGUser : HTSService <AWEOFGUser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requestSecurityPhoneNumber:(long long)a0 enterMethod:(id)a1 completion:(id /* block */)a2 ofgClientKey:(id)a3 ofgAppID:(id)a4 ofgError:(id *)a5;
+ (BOOL)requestTokenWithCarrier:(long long)a0 completion:(id /* block */)a1 ofgClientKey:(id)a2 ofgAppID:(id)a3 ofgError:(id *)a4;
+ (BOOL)getUserProfileWithID:(id)a0 completion:(id /* block */)a1 ofgClientKey:(id)a2 ofgAppID:(id)a3 ofgError:(id *)a4;
+ (BOOL)getUserProfileWithID:(id)a0 detailCompletion:(id /* block */)a1 ofgClientKey:(id)a2 ofgAppID:(id)a3 ofgError:(id *)a4;
+ (id)sessionIDWithOfgClientKey:(id)a0 ofgAppID:(id)a1 ofgError:(id *)a2;
+ (id)currentLoginUserWithOfgClientKey:(id)a0 ofgAppID:(id)a1 ofgError:(id *)a2;
+ (BOOL)isLoginWithOfgClientKey:(id)a0 ofgAppID:(id)a1 ofgError:(id *)a2;
+ (id)userIDWithOfgClientKey:(id)a0 ofgAppID:(id)a1 ofgError:(id *)a2;
+ (id)getSecUidWithUid:(id)a0 ofgClientKey:(id)a1 ofgAppID:(id)a2 ofgError:(id *)a3;
+ (BOOL)recordSecUidWithUid:(id)a0 withSecUid:(id)a1 ofgClientKey:(id)a2 ofgAppID:(id)a3 ofgError:(id *)a4;
+ (id)deviceIDWithOfgClientKey:(id)a0 ofgAppID:(id)a1 ofgError:(id *)a2;
+ (id)installIDWithOfgClientKey:(id)a0 ofgAppID:(id)a1 ofgError:(id *)a2;
+ (id)commonURLParametersWithOfgClientKey:(id)a0 ofgAppID:(id)a1 ofgError:(id *)a2;
+ (BOOL)follow:(id)a0 completion:(id /* block */)a1 ofgClientKey:(id)a2 ofgAppID:(id)a3 ofgError:(id *)a4;
+ (BOOL)unfollow:(id)a0 completion:(id /* block */)a1 ofgClientKey:(id)a2 ofgAppID:(id)a3 ofgError:(id *)a4;
+ (BOOL)followWithUid:(id)a0 secUid:(id)a1 completion:(id /* block */)a2 ofgClientKey:(id)a3 ofgAppID:(id)a4 ofgError:(id *)a5;
+ (BOOL)unfollowWithUid:(id)a0 secUid:(id)a1 completion:(id /* block */)a2 ofgClientKey:(id)a3 ofgAppID:(id)a4 ofgError:(id *)a5;
+ (BOOL)requireLogin:(id /* block */)a0 ofgClientKey:(id)a1 ofgAppID:(id)a2 ofgError:(id *)a3;
+ (BOOL)requireLoginWithContext:(id)a0 completion:(id /* block */)a1 ofgClientKey:(id)a2 ofgAppID:(id)a3 ofgError:(id *)a4;
+ (void)commitFollowWithUid:(id)a0 secUid:(id)a1 type:(long long)a2 ofgClientKey:(id)a3 completion:(id /* block */)a4;


@end
