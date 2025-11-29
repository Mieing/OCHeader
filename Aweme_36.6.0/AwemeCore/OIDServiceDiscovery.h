@class NSDictionary, NSURL, NSArray;

@interface OIDServiceDiscovery : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_discoveryDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *discoveryDictionary;
@property (readonly, nonatomic) NSURL *issuer;
@property (readonly, nonatomic) NSURL *authorizationEndpoint;
@property (readonly, nonatomic) NSURL *deviceAuthorizationEndpoint;
@property (readonly, nonatomic) NSURL *tokenEndpoint;
@property (readonly, nonatomic) NSURL *userinfoEndpoint;
@property (readonly, nonatomic) NSURL *jwksURL;
@property (readonly, nonatomic) NSURL *registrationEndpoint;
@property (readonly, nonatomic) NSURL *endSessionEndpoint;
@property (readonly, nonatomic) NSArray *scopesSupported;
@property (readonly, nonatomic) NSArray *responseTypesSupported;
@property (readonly, nonatomic) NSArray *responseModesSupported;
@property (readonly, nonatomic) NSArray *grantTypesSupported;
@property (readonly, nonatomic) NSArray *acrValuesSupported;
@property (readonly, nonatomic) NSArray *subjectTypesSupported;
@property (readonly, nonatomic) NSArray *IDTokenSigningAlgorithmValuesSupported;
@property (readonly, nonatomic) NSArray *IDTokenEncryptionAlgorithmValuesSupported;
@property (readonly, nonatomic) NSArray *IDTokenEncryptionEncodingValuesSupported;
@property (readonly, nonatomic) NSArray *userinfoSigningAlgorithmValuesSupported;
@property (readonly, nonatomic) NSArray *userinfoEncryptionAlgorithmValuesSupported;
@property (readonly, nonatomic) NSArray *userinfoEncryptionEncodingValuesSupported;
@property (readonly, nonatomic) NSArray *requestObjectSigningAlgorithmValuesSupported;
@property (readonly, nonatomic) NSArray *requestObjectEncryptionAlgorithmValuesSupported;
@property (readonly, nonatomic) NSArray *requestObjectEncryptionEncodingValuesSupported;
@property (readonly, nonatomic) NSArray *tokenEndpointAuthMethodsSupported;
@property (readonly, nonatomic) NSArray *tokenEndpointAuthSigningAlgorithmValuesSupported;
@property (readonly, nonatomic) NSArray *displayValuesSupported;
@property (readonly, nonatomic) NSArray *claimTypesSupported;
@property (readonly, nonatomic) NSArray *claimsSupported;
@property (readonly, nonatomic) NSURL *serviceDocumentation;
@property (readonly, nonatomic) NSArray *claimsLocalesSupported;
@property (readonly, nonatomic) NSArray *UILocalesSupported;
@property (readonly, nonatomic) BOOL claimsParameterSupported;
@property (readonly, nonatomic) BOOL requestParameterSupported;
@property (readonly, nonatomic) BOOL requestURIParameterSupported;
@property (readonly, nonatomic) BOOL requireRequestURIRegistration;
@property (readonly, nonatomic) NSURL *OPPolicyURI;
@property (readonly, nonatomic) NSURL *OPTosURI;

+ (BOOL)dictionaryHasRequiredFields:(id)a0 error:(id *)a1;

- (id)initWithJSON:(id)a0 error:(id *)a1;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSONData:(id)a0 error:(id *)a1;

@end
