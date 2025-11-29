@class OIDAuthState, NSString;

@interface GTMAuthSession : NSObject <GTMSessionFetcherAuthorizer, NSSecureCoding> {
    void /* function */ serviceProvider;
    void /* function */ userID;
    void /* function */ userEmail;
    void /* unknown type, empty encoding */ _userEmailIsVerified;
    void /* unknown type, empty encoding */ serialAuthArgsQueue;
    void /* unknown type, empty encoding */ authorizationArgs;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) OIDAuthState *authState;
@property (nonatomic, readonly) NSString *serviceProvider;
@property (nonatomic, readonly) NSString *userID;
@property (nonatomic, readonly) NSString *userEmail;
@property (nonatomic, readonly) BOOL userEmailIsVerified;
@property (nonatomic) BOOL shouldAuthorizeAllRequests;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, weak) void /* function */ fetcherService;
@property (nonatomic, readonly) BOOL canAuthorize;

+ (id)configurationForGoogle;

- (id)initWithAuthState:(id)a0 serviceProvider:(id)a1 userID:(id)a2 userEmail:(id)a3 userEmailIsVerified:(id)a4;
- (id)initWithAuthState:(id)a0;
- (void)authorizeRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)authorizeRequest:(id)a0 delegate:(id)a1 didFinishSelector:(SEL)a2;
- (void)stopAuthorization;
- (void)stopAuthorizationForRequest:(id)a0;
- (BOOL)isAuthorizingRequest:(id)a0;
- (BOOL)isAuthorizedRequest:(id)a0;
- (BOOL)primeForRefresh;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
