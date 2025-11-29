@class NSDictionary, NSString;

@interface HTSAccountService : HTSService <HTSService>

@property (retain, nonatomic) NSDictionary *platformAppIDMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appDidEnterForeground;
- (void)lazyRegisterApp:(unsigned long long)a0 withKey:(id)a1;
- (void)registerApp:(unsigned long long)a0 withKey:(id)a1;
- (void)leaveThirdAuthToken;
- (id)getInstanceForPlatform:(unsigned long long)a0;
- (void)enterThirdAuthToken;
- (void)requestClearAccountForAllPlatforms;
- (id)customCurrentUsers;
- (void)setAccountUserExtraValueConfig:(id)a0;
- (void)updateAccountUser:(id /* block */)a0;
- (void)requestAccessToken:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)application:(id)a0 openURL:(id)a1 sourceApplication:(id)a2 annotation:(id)a3;
- (BOOL)application:(id)a0 continueUserActivity:(id)a1 restorationHandler:(id /* block */)a2;

@end
