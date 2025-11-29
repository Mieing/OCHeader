@interface BDPFollowManager : NSObject

+ (id)parseFollowResponse:(id)a0 isUser:(BOOL)a1;
+ (void)requestWithURL:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
+ (id)_errMsgFromErrCode:(long long)a0;
+ (id)getMobStrWithUniqueID:(id)a0;
+ (void)prefetchUserInfoWithUniqueID:(id)a0 callback:(id /* block */)a1;
+ (void)prefetchFollowStateWithUniqueID:(id)a0 callback:(id /* block */)a1;
+ (void)businessClientAuthorizeChechWithAwemeID:(id)a0 capacityName:(id)a1 uniqueID:(id)a2 completion:(id /* block */)a3;
+ (BOOL)executeExpandAction:(id)a0 uniqueID:(id)a1 openId:(id)a2 aweID:(id)a3 error:(id)a4;

@end
