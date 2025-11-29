@class NSArray, YYCache, NHAccountUser, NHAccountUserExtraValueConfig;

@interface NHAccountUserManager : NSObject

@property (retain, nonatomic) YYCache *storage;
@property (retain, nonatomic) NHAccountUserExtraValueConfig *config;
@property (retain, nonatomic) NHAccountUser *user;
@property (retain, nonatomic) NSArray *users;
@property (retain, nonatomic) id customCurrentUser;
@property (retain, nonatomic) id customCurrentUsers;

+ (BOOL)persistUser:(id)a0 withAuthorizeResponse:(id)a1;
+ (id)retrieveUserConnects:(id)a0;
+ (BOOL)persistUserConnect:(id)a0 forUser:(id)a1;
+ (id)sharedInstance;

- (id)currentLoginUser;
- (BOOL)persistenceAccountUser:(id)a0;
- (id)currentLoginUsers;
- (void)clearAccountUser:(id)a0;
- (void)clearAccountUsers:(id)a0;
- (void)clearAllAccountUsers;
- (id)customCurrentUsersFromExtraValue;
- (void)setExtraValueConfig:(id)a0;
- (void)syncAccountUserStatus:(id /* block */)a0;
- (void)syncUserForLogin:(id)a0 completion:(id /* block */)a1;
- (BOOL)handleLogin;
- (BOOL)_isValidLoginAccountUser:(id)a0;
- (void)_updateCustomUser;
- (void)_updateCustomUsers;
- (void)persistenceAccountUsers:(id)a0;
- (void)clearPersistedAccountUser;
- (BOOL)_updateCurrentLoginUser:(id)a0;
- (void)_fetchAndSaveUser:(id)a0 cleanUserWhenErrorReceived:(BOOL)a1 headers:(id)a2 completion:(id /* block */)a3;
- (BOOL)_shouldSkipError:(id)a0;
- (id)userIDFromAwemeJSON:(id)a0;
- (BOOL)storeRootData:(id)a0 withKey:(id)a1;
- (id)getStoredDataWithKey:(id)a0 transData:(id)a1;
- (id)assembleUserIds:(id)a0;
- (id)_loginUserOfOldVersion;
- (void)_clearLoginUserOfOldVersion;
- (BOOL)_multiLoginSwitchChanged;
- (BOOL)handleLogout;
- (void)updateCurrentUserFromNewArch:(id)a0;
- (void)syncExtraValueOfCurrentAccountUserStatus:(id /* block */)a0;
- (void)_migrateIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isLogin;

@end
