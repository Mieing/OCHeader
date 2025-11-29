@class NSString, NSDictionary, NSURL, OIDServiceConfiguration;

@interface OIDTokenRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) OIDServiceConfiguration *configuration;
@property (readonly, nonatomic) NSString *grantType;
@property (readonly, nonatomic) NSString *authorizationCode;
@property (readonly, nonatomic) NSURL *redirectURL;
@property (readonly, nonatomic) NSString *clientID;
@property (readonly, nonatomic) NSString *clientSecret;
@property (readonly, nonatomic) NSString *scope;
@property (readonly, nonatomic) NSString *refreshToken;
@property (readonly, nonatomic) NSString *codeVerifier;
@property (readonly, nonatomic) NSDictionary *additionalParameters;

- (id)initWithConfiguration:(id)a0 grantType:(id)a1 authorizationCode:(id)a2 redirectURL:(id)a3 clientID:(id)a4 clientSecret:(id)a5 scope:(id)a6 refreshToken:(id)a7 codeVerifier:(id)a8 additionalParameters:(id)a9;
- (id)tokenRequestURL;
- (id)tokenRequestBody;
- (id)initWithConfiguration:(id)a0 grantType:(id)a1 authorizationCode:(id)a2 redirectURL:(id)a3 clientID:(id)a4 clientSecret:(id)a5 scopes:(id)a6 refreshToken:(id)a7 codeVerifier:(id)a8 additionalParameters:(id)a9;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)URLRequest;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
