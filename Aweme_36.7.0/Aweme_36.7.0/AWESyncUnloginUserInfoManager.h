@class NSDictionary, NSMutableDictionary;

@interface AWESyncUnloginUserInfoManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *userInfos;
@property (retain, nonatomic) NSDictionary *unloginUserInfos;
@property (nonatomic) BOOL syncUserInfoSuccess;

+ (id)sharedManager;

- (void)mergeUserInfo:(id)a0;
- (void)removeLoginUserInfoWithUserID:(id)a0;
- (void)syncUserInfo:(id)a0 withUserID:(id)a1 retryCount:(long long)a2 completion:(id /* block */)a3;
- (id)storateKeyWithUserID:(id)a0;
- (id)loadLoginUserInfoWithUserID:(id)a0;
- (void)saveLoginUserInfo:(id)a0 userID:(id)a1;
- (void)removeUserInfoForKey:(id)a0;
- (void)syncUserInfoWithUserID:(id)a0 completion:(id /* block */)a1;
- (void)clearAllUserInfo;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isLogin;
- (id)currentLoginUserID;

@end
