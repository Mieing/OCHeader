@interface BDPFollowManager_HG : NSObject

+ (void)requestWithURL:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
+ (id)_errMsgFromErrCode:(long long)a0;
+ (void)prefetchUserInfoWithUniqueID:(id)a0 callback:(id /* block */)a1;
+ (void)prefetchFollowStateWithUniqueID:(id)a0 callback:(id /* block */)a1;
+ (id)parseCheckFollowStateResponse:(id)a0 andJsonObj:(id)a1 response:(id)a2;
+ (id)parseFollowUserResponse:(id)a0 andJsonObj:(id)a1 response:(id)a2;

@end
