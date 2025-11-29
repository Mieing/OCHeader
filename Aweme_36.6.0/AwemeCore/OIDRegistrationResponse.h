@class NSString, NSDictionary, NSURL, NSDate, OIDRegistrationRequest;

@interface OIDRegistrationResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) OIDRegistrationRequest *request;
@property (readonly, nonatomic) NSString *clientID;
@property (readonly, nonatomic) NSDate *clientIDIssuedAt;
@property (readonly, nonatomic) NSString *clientSecret;
@property (readonly, nonatomic) NSDate *clientSecretExpiresAt;
@property (readonly, nonatomic) NSString *registrationAccessToken;
@property (readonly, nonatomic) NSURL *registrationClientURI;
@property (readonly, nonatomic) NSString *tokenEndpointAuthenticationMethod;
@property (readonly, nonatomic) NSDictionary *additionalParameters;

+ (id)fieldMap;

- (id)initWithRequest:(id)a0 parameters:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
