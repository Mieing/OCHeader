@interface IESAccountSwitchLogin : NSObject

+ (void)switchAccountRemoveAccountWithUserId:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
+ (void)switchToUserWithID:(id)a0 secUserID:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
+ (void)getSwitchToUserWithID:(id)a0 secUserID:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
+ (void)switchToRelationUserWithSecUserID:(id)a0 relationUserToken:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
+ (void)getAuthAccountListWithExtraParams:(id)a0 completion:(id /* block */)a1;
+ (void)switchVCDAccountWithSwitchUserAid:(long long)a0 extraParams:(id)a1 completion:(id /* block */)a2;
+ (void)commonPostRequestPath:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)getPassportAccountListWithSecUidList:(id)a0 scene:(long long)a1 extraParams:(id)a2 completion:(id /* block */)a3;
+ (id)buildParamsWithExtra:(id)a0;
+ (void)commonPostRequestPath:(id)a0 params:(id)a1 headers:(id)a2 completion:(id /* block */)a3;
+ (void)commonGetRequestPath:(id)a0 params:(id)a1 completion:(id /* block */)a2;

@end
