@class NSString;

@interface BDPUserInfoService : NSObject <BDPUserInfoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)fetchUserInfoWithCredentials:(BOOL)a0 identityAuth:(BOOL)a1 needIDs:(BOOL)a2 infoType:(id)a3 uniqueID:(id)a4 completion:(id /* block */)a5;
- (void)checkUserIdentityAuthenticationStatusWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldUseAnonymousUserInfo:(id)a0;
- (void)preCheckUserInfoWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)parseResponse:(id)a0 error:(id)a1 shouldAddIdVerifyResult:(BOOL)a2 isIdVerified:(BOOL)a3 callback:(id /* block */)a4 uniqueID:(id)a5 monitor:(id)a6;

@end
