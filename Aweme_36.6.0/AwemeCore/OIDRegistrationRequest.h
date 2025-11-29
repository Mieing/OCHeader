@class NSString, NSArray, NSDictionary, OIDServiceConfiguration;

@interface OIDRegistrationRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) OIDServiceConfiguration *configuration;
@property (readonly, nonatomic) NSString *initialAccessToken;
@property (readonly, nonatomic) NSString *applicationType;
@property (readonly, nonatomic) NSArray *redirectURIs;
@property (readonly, nonatomic) NSArray *responseTypes;
@property (readonly, nonatomic) NSArray *grantTypes;
@property (readonly, nonatomic) NSString *subjectType;
@property (readonly, nonatomic) NSString *tokenEndpointAuthenticationMethod;
@property (readonly, nonatomic) NSDictionary *additionalParameters;

- (id)initWithConfiguration:(id)a0 redirectURIs:(id)a1 responseTypes:(id)a2 grantTypes:(id)a3 subjectType:(id)a4 tokenEndpointAuthMethod:(id)a5 additionalParameters:(id)a6;
- (id)initWithConfiguration:(id)a0 redirectURIs:(id)a1 responseTypes:(id)a2 grantTypes:(id)a3 subjectType:(id)a4 tokenEndpointAuthMethod:(id)a5 initialAccessToken:(id)a6 additionalParameters:(id)a7;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)JSONString;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)URLRequest;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
