@interface DYAVCDService : NSObject

+ (void)authorizeWithScope:(id)a0 complete:(id /* block */)a1;
+ (void)authorizeWithScope:(id)a0 secondaryUid:(id)a1 shouldUnbind:(BOOL)a2 complete:(id /* block */)a3;
+ (void)getAuthAccountList:(id /* block */)a0;
+ (void)switchFromAccount:(id)a0 toAccount:(id)a1 completion:(id /* block */)a2;
+ (void)handleSwitchVCDResultFromAccount:(id)a0 toAccount:(id)a1 switchError:(id)a2 passportModel:(id)a3 completion:(id /* block */)a4;
+ (Class)aAWEUserDOUYINHTSAdapterClass;
+ (void)authorizeWithParams:(id)a0 complete:(id /* block */)a1;
+ (void)authorizeOppositeWithCompletion:(id /* block */)a0;
+ (void)getAllAccountListParams:(id)a0 completion:(id /* block */)a1;
+ (void)handleSwitchVCDResultFromUserId:(id)a0 toUserId:(id)a1 toUserAppID:(long long)a2 switchError:(id)a3 passportModel:(id)a4 completion:(id /* block */)a5;
+ (void)verifyWithPhone:(id)a0 code:(id)a1 userID:(id)a2 completion:(id /* block */)a3;
+ (void)verifyWithPhone:(id)a0 password:(id)a1 userID:(id)a2 completion:(id /* block */)a3;
+ (void)verifyWithOAuth:(id)a0 userID:(id)a1 completion:(id /* block */)a2;

- (id)aAWEUserDOUYINHTSAdapter;

@end
