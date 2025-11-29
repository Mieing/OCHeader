@class NSString, NSDictionary, NSURL, OIDServiceConfiguration;

@interface OIDAuthorizationRequest : NSObject <NSCopying, NSSecureCoding, OIDExternalUserAgentRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) OIDServiceConfiguration *configuration;
@property (readonly, nonatomic) NSString *responseType;
@property (readonly, nonatomic) NSString *clientID;
@property (readonly, nonatomic) NSString *clientSecret;
@property (readonly, nonatomic) NSString *scope;
@property (readonly, nonatomic) NSURL *redirectURL;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSString *nonce;
@property (readonly, nonatomic) NSString *codeVerifier;
@property (readonly, nonatomic) NSString *codeChallenge;
@property (readonly, nonatomic) NSString *codeChallengeMethod;
@property (readonly, nonatomic) NSDictionary *additionalParameters;

+ (BOOL)isSupportedResponseType:(id)a0;
+ (id)generateCodeVerifier;
+ (id)codeChallengeS256ForVerifier:(id)a0;
+ (id)generateState;

- (id)initWithConfiguration:(id)a0 clientId:(id)a1 clientSecret:(id)a2 scope:(id)a3 redirectURL:(id)a4 responseType:(id)a5 state:(id)a6 nonce:(id)a7 codeVerifier:(id)a8 codeChallenge:(id)a9 codeChallengeMethod:(id)a10 additionalParameters:(id)a11;
- (id)initWithConfiguration:(id)a0 clientId:(id)a1 scopes:(id)a2 redirectURL:(id)a3 responseType:(id)a4 additionalParameters:(id)a5;
- (id)initWithConfiguration:(id)a0 clientId:(id)a1 clientSecret:(id)a2 scopes:(id)a3 redirectURL:(id)a4 responseType:(id)a5 additionalParameters:(id)a6;
- (id)authorizationRequestURL;
- (id)externalUserAgentRequestURL;
- (id)redirectScheme;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
