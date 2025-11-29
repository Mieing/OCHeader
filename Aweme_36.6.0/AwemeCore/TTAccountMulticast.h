@class NSMutableArray, NSHashTable;

@interface TTAccountMulticast : NSObject

@property (nonatomic) int accountCrashResolveSwitch;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSMutableArray *delegatesInfoArray;

+ (id)sharedInstance;

- (void)broadcastAccountProfileChanged:(id)a0 error:(id)a1;
- (void)broadcastAccountSessionExpired:(id)a0;
- (void)broadcastLoginSuccess:(id)a0 platform:(id)a1 reason:(long long)a2;
- (void)broadcastLogoutInScene:(long long)a0;
- (void)broadcastLogout;
- (void)broadcastGetUserInfo;
- (void)broadcastLoginAccountAuthPlatform:(id)a0 error:(id)a1;
- (void)broadcastLogoutAccountAuthPlatform:(id)a0 error:(id)a1;
- (void)broadcastExpireAccountAuthPlatform:(id)a0 error:(id)a1;
- (void)broadcastAccountSDKFetchLoginWithJson:(id)a0 callbackSchema:(id)a1 completion:(id /* block */)a2;
- (void)saveAccountCrashResolveSwitch:(int)a0;
- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterDelegate:(id)a0;

@end
