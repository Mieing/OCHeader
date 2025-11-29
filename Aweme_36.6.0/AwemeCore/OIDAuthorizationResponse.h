@class NSString, NSDictionary, NSDate, OIDAuthorizationRequest;

@interface OIDAuthorizationResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) OIDAuthorizationRequest *request;
@property (readonly, nonatomic) NSString *authorizationCode;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSString *accessToken;
@property (readonly, nonatomic) NSDate *accessTokenExpirationDate;
@property (readonly, nonatomic) NSString *tokenType;
@property (readonly, nonatomic) NSString *idToken;
@property (readonly, nonatomic) NSString *scope;
@property (readonly, nonatomic) NSDictionary *additionalParameters;

+ (id)fieldMap;

- (id)initWithRequest:(id)a0 parameters:(id)a1;
- (id)tokenExchangeRequestWithAdditionalParameters:(id)a0;
- (id)tokenExchangeRequest;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
