@interface BDPUserInfoManager_HG : NSObject

+ (id)sharedManager;

- (void)checkUserIdentityAuthenticationStatusWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)fetchUserInfoWithCredentials:(BOOL)a0 identityAuth:(BOOL)a1 uniqueID:(id)a2 completion:(id /* block */)a3;
- (void)parseResponse:(id)a0 error:(id)a1 needAddIdVerifyResult:(BOOL)a2 isIdVerified:(BOOL)a3 callback:(id /* block */)a4 uniqueID:(id)a5 monitor:(id)a6;
- (id)errorForErrorCode:(long long)a0 serverCode:(long long)a1;
- (id)tryGetUserInfoFromLocalWithUniqueID:(id)a0;
- (void)saveUserInfoToLocalWithUniqueID:(id)a0 value:(id)a1;
- (id)getKeyOfUserInfoCacheWithUniqueID:(id)a0;
- (id)initPrivate;

@end
