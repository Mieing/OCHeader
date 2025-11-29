@class OIDServiceConfiguration;

@interface OIDAuthorizationService : NSObject

@property (readonly, nonatomic) OIDServiceConfiguration *configuration;

+ (id)presentAuthorizationRequest:(id)a0 externalUserAgent:(id)a1 callback:(id /* block */)a2;
+ (id)presentAuthorizationRequest:(id)a0 presentingViewController:(id)a1 callback:(id /* block */)a2;
+ (id)presentAuthorizationRequest:(id)a0 presentingViewController:(id)a1 prefersEphemeralSession:(BOOL)a2 callback:(id /* block */)a3;
+ (void)discoverServiceConfigurationForDiscoveryURL:(id)a0 completion:(id /* block */)a1;
+ (void)performTokenRequest:(id)a0 originalAuthorizationResponse:(id)a1 callback:(id /* block */)a2;
+ (void)discoverServiceConfigurationForIssuer:(id)a0 completion:(id /* block */)a1;
+ (id)presentEndSessionRequest:(id)a0 externalUserAgent:(id)a1 callback:(id /* block */)a2;
+ (void)performTokenRequest:(id)a0 callback:(id /* block */)a1;
+ (void)performRegistrationRequest:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;

@end
