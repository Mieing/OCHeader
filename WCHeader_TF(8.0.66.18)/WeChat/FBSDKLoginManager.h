@class NSSet, NSString, FBSDKKeychainStore, FBSDKLoginManagerLogger, UIViewController;

@interface FBSDKLoginManager : NSObject <FBSDKURLOpening> {
    id /* block */ _handler;
    FBSDKLoginManagerLogger *_logger;
    long long _state;
    FBSDKKeychainStore *_keychainStore;
    BOOL _usedSFAuthSession;
}

@property (weak, nonatomic) UIViewController *fromViewController;
@property (readonly, nonatomic) NSSet *requestedPermissions;
@property (readonly, copy, nonatomic) NSString *loadExpectedChallenge;
@property (retain, nonatomic) NSString *authType;
@property (nonatomic) unsigned long long defaultAudience;
@property (nonatomic) unsigned long long loginBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)stringForChallenge;

- (id)init;
- (void)logInWithPermissions:(id)a0 fromViewController:(id)a1 handler:(id /* block */)a2;
- (void)logInWithReadPermissions:(id)a0 fromViewController:(id)a1 handler:(id /* block */)a2;
- (void)logInWithPublishPermissions:(id)a0 fromViewController:(id)a1 handler:(id /* block */)a2;
- (void)reauthorizeDataAccess:(id)a0 handler:(id /* block */)a1;
- (void)logOut;
- (void)raiseLoginException:(id)a0;
- (void)handleImplicitCancelOfLogIn;
- (BOOL)validateLoginStartState;
- (BOOL)isPerformingLogin;
- (void)assertPermissions:(id)a0;
- (void)completeAuthentication:(id)a0 expectChallenge:(BOOL)a1;
- (void)determineRecentlyGrantedPermissions:(id *)a0 recentlyDeclinedPermissions:(id *)a1 forGrantedPermission:(id)a2 declinedPermissions:(id)a3;
- (void)invokeHandler:(id)a0 error:(id)a1;
- (id)logInParametersWithPermissions:(id)a0 serverConfiguration:(id)a1;
- (void)logInWithPermissions:(id)a0 handler:(id /* block */)a1;
- (void)reauthorizeDataAccess:(id /* block */)a0;
- (void)logInWithBehavior:(unsigned long long)a0;
- (void)storeExpectedChallenge:(id)a0;
- (void)validateReauthentication:(id)a0 withResult:(id)a1;
- (void)setHandler:(id /* block */)a0;
- (void)setRequestedPermissions:(id)a0;
- (void)performBrowserLogInWithParameters:(id)a0 handler:(id /* block */)a1;
- (BOOL)application:(id)a0 openURL:(id)a1 sourceApplication:(id)a2 annotation:(id)a3;
- (BOOL)canOpenURL:(id)a0 forApplication:(id)a1 sourceApplication:(id)a2 annotation:(id)a3;
- (void)applicationDidBecomeActive:(id)a0;
- (BOOL)isAuthenticationURL:(id)a0;
- (void).cxx_destruct;

@end
