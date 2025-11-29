@class OIDTokenResponse, NSString, OIDRegistrationResponse, NSMutableArray, NSDate, OIDAuthorizationResponse, NSError;
@protocol OIDAuthStateErrorDelegate, OIDAuthStateChangeDelegate;

@interface OIDAuthState : NSObject <NSSecureCoding> {
    NSMutableArray *_pendingActions;
    id _pendingActionsSyncObject;
    BOOL _needsTokenRefresh;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *accessToken;
@property (readonly, nonatomic) NSDate *accessTokenExpirationDate;
@property (readonly, nonatomic) NSString *idToken;
@property (readonly, nonatomic) NSString *refreshToken;
@property (readonly, nonatomic) NSString *scope;
@property (readonly, nonatomic) OIDAuthorizationResponse *lastAuthorizationResponse;
@property (readonly, nonatomic) OIDTokenResponse *lastTokenResponse;
@property (readonly, nonatomic) OIDRegistrationResponse *lastRegistrationResponse;
@property (readonly, nonatomic) NSError *authorizationError;
@property (readonly, nonatomic) BOOL isAuthorized;
@property (weak, nonatomic) id<OIDAuthStateChangeDelegate> stateChangeDelegate;
@property (weak, nonatomic) id<OIDAuthStateErrorDelegate> errorDelegate;

+ (id)authStateByPresentingAuthorizationRequest:(id)a0 externalUserAgent:(id)a1 callback:(id /* block */)a2;
+ (id)authStateByPresentingAuthorizationRequest:(id)a0 presentingViewController:(id)a1 callback:(id /* block */)a2;
+ (id)authStateByPresentingAuthorizationRequest:(id)a0 presentingViewController:(id)a1 prefersEphemeralSession:(BOOL)a2 callback:(id /* block */)a3;
+ (id)authStateByPresentingAuthorizationRequest:(id)a0 callback:(id /* block */)a1;

- (void)performActionWithFreshTokens:(id /* block */)a0 additionalRefreshParameters:(id)a1;
- (void)setNeedsTokenRefresh;
- (id)initWithAuthorizationResponse:(id)a0 tokenResponse:(id)a1;
- (id)initWithAuthorizationResponse:(id)a0;
- (id)initWithAuthorizationResponse:(id)a0 tokenResponse:(id)a1 registrationResponse:(id)a2;
- (void)updateWithRegistrationResponse:(id)a0;
- (void)updateWithAuthorizationResponse:(id)a0 error:(id)a1;
- (void)updateWithTokenResponse:(id)a0 error:(id)a1;
- (void)didChangeState;
- (void)updateWithAuthorizationError:(id)a0;
- (id)tokenRefreshRequestWithAdditionalParameters:(id)a0;
- (void)performActionWithFreshTokens:(id /* block */)a0 additionalRefreshParameters:(id)a1 dispatchQueue:(id)a2;
- (BOOL)isTokenFresh;
- (id)initWithRegistrationResponse:(id)a0;
- (id)tokenRefreshRequest;
- (void)performActionWithFreshTokens:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)tokenType;

@end
