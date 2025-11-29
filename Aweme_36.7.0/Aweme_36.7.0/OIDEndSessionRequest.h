@class NSString, NSDictionary, NSURL, OIDServiceConfiguration;

@interface OIDEndSessionRequest : NSObject <NSCopying, NSSecureCoding, OIDExternalUserAgentRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) OIDServiceConfiguration *configuration;
@property (readonly, nonatomic) NSURL *postLogoutRedirectURL;
@property (readonly, nonatomic) NSString *idTokenHint;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSDictionary *additionalParameters;

+ (id)generateState;

- (id)externalUserAgentRequestURL;
- (id)redirectScheme;
- (id)initWithConfiguration:(id)a0 idTokenHint:(id)a1 postLogoutRedirectURL:(id)a2 additionalParameters:(id)a3;
- (id)initWithConfiguration:(id)a0 idTokenHint:(id)a1 postLogoutRedirectURL:(id)a2 state:(id)a3 additionalParameters:(id)a4;
- (id)endSessionRequestURL;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
