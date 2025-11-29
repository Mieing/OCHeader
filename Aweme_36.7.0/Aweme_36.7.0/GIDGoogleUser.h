@class GIDConfiguration, NSString, GIDProfileData, NSArray, OIDAuthState, NSMutableArray, GIDToken;
@protocol GTMFetcherAuthorizationProtocol, GTMAuthSessionDelegate;

@interface GIDGoogleUser : NSObject <OIDAuthStateChangeDelegate, NSSecureCoding> {
    GIDConfiguration *_cachedConfiguration;
    NSMutableArray *_tokenRefreshHandlerQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<GTMAuthSessionDelegate> authSessionDelegate;
@property (retain, nonatomic) GIDToken *accessToken;
@property (retain, nonatomic) GIDToken *refreshToken;
@property (retain, nonatomic) GIDToken *idToken;
@property (readonly, nonatomic) OIDAuthState *authState;
@property (retain, nonatomic) id<GTMFetcherAuthorizationProtocol> fetcherAuthorizer;
@property (readonly, nonatomic) NSString *emmSupport;
@property (readonly, nonatomic) NSString *userID;
@property (readonly, nonatomic) GIDProfileData *profile;
@property (readonly, nonatomic) NSArray *grantedScopes;
@property (readonly, nonatomic) GIDConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addScopes:(id)a0 presentingViewController:(id)a1 completion:(id /* block */)a2;
- (void)didChangeState:(id)a0;
- (id)hostedDomain;
- (void)updateTokensWithAuthState:(id)a0;
- (id)initWithAuthState:(id)a0 profileData:(id)a1;
- (void)refreshTokensIfNeededWithCompletion:(id /* block */)a0;
- (void)updateWithTokenResponse:(id)a0 authorizationResponse:(id)a1 profileData:(id)a2;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
