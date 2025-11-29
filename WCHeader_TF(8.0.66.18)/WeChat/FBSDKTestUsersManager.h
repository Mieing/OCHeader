@class NSString, NSMutableDictionary;

@interface FBSDKTestUsersManager : NSObject {
    NSString *_appID;
    NSString *_appSecret;
    NSMutableDictionary *_accounts;
}

+ (id)sharedInstanceForAppID:(id)a0 appSecret:(id)a1;

- (id)initWithAppID:(id)a0 appSecret:(id)a1;
- (void)requestTestAccountTokensWithArraysOfPermissions:(id)a0 createIfNotFound:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)addTestAccountWithPermissions:(id)a0 completionHandler:(id /* block */)a1;
- (void)makeFriendsWithFirst:(id)a0 second:(id)a1 callback:(id /* block */)a2;
- (void)removeTestAccount:(id)a0 completionHandler:(id /* block */)a1;
- (id)tokenDataForTokenString:(id)a0 permissions:(id)a1 userId:(id)a2;
- (id)userIdAndTokenOfExistingAccountWithPermissions:(id)a0 skip:(id)a1;
- (id)appAccessToken;
- (void)fetchExistingTestAccountsWithAfterCursor:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;

@end
