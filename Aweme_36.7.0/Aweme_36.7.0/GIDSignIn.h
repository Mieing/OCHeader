@class GTMKeychainStore, GIDAppCheck, GIDSignInInternalOptions, GIDGoogleUser, GIDConfiguration, GIDTimedLoader, OIDServiceConfiguration;
@protocol OIDExternalUserAgentSession;

@interface GIDSignIn : NSObject {
    GIDSignInInternalOptions *_currentOptions;
    GIDAppCheck *_appCheck;
    OIDServiceConfiguration *_appAuthConfiguration;
    id<OIDExternalUserAgentSession> _currentAuthorizationFlow;
    BOOL _restarting;
    GTMKeychainStore *_keychainStore;
    GIDTimedLoader *_timedLoader;
    BOOL _configureAppCheckCalled;
}

@property (class, readonly, nonatomic) GIDSignIn *sharedInstance;

@property (retain, nonatomic) GIDGoogleUser *currentUser;
@property (retain, nonatomic) GIDConfiguration *configuration;

+ (id)configurationFromBundle:(id)a0;
+ (BOOL)isOperatingSystemAtLeast9;
+ (id)configValueFromBundle:(id)a0 forKey:(id)a1;

- (void)configureDebugProviderWithAPIKey:(id)a0 completion:(id /* block */)a1;
- (void)addScopes:(id)a0 presentingViewController:(id)a1 completion:(id /* block */)a2;
- (void)signInWithPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (id)initWithKeychainStore:(id)a0;
- (BOOL)handleDevicePolicyAppURL:(id)a0;
- (id)loadAuthState;
- (void)signInWithOptions:(id)a0;
- (id)profileDataWithIDToken:(id)a0;
- (void)signInWithPresentingViewController:(id)a0 hint:(id)a1 completion:(id /* block */)a2;
- (void)removeAllKeychainEntries;
- (void)startFetchURL:(id)a0 fromAuthState:(id)a1 withComment:(id)a2 withCompletionHandler:(id /* block */)a3;
- (id)initWithKeychainStore:(id)a0 appCheck:(id)a1;
- (BOOL)isFreshInstall;
- (void)assertValidParameters;
- (void)assertValidPresentingViewController;
- (void)authenticateWithOptions:(id)a0;
- (void)processAuthorizationResponse:(id)a0 error:(id)a1 emmSupport:(id)a2;
- (void)authorizationRequestWithOptions:(id)a0 completion:(id /* block */)a1;
- (id)additionalParametersFromOptions:(id)a0;
- (id)authorizationRequestWithOptions:(id)a0 additionalParameters:(id)a1;
- (id)redirectURLWithOptions:(id)a0;
- (void)maybeFetchToken:(id)a0;
- (id)errorWithString:(id)a0 code:(long long)a1;
- (void)addDecodeIdTokenCallback:(id)a0;
- (void)addSaveAuthCallback:(id)a0;
- (void)authenticateInteractivelyWithOptions:(id)a0;
- (BOOL)saveAuthState:(id)a0;
- (BOOL)hasPreviousSignIn;
- (void)restorePreviousSignInWithCompletion:(id /* block */)a0;
- (BOOL)restorePreviousSignInNoRefresh;
- (void)signInWithPresentingViewController:(id)a0 hint:(id)a1 additionalScopes:(id)a2 completion:(id /* block */)a3;
- (BOOL)handleURL:(id)a0;
- (void).cxx_destruct;
- (void)disconnectWithCompletion:(id /* block */)a0;
- (void)configureWithCompletion:(id /* block */)a0;
- (void)addCompletionCallback:(id)a0;
- (void)signOut;

@end
