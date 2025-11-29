@class OIDEndSessionRequest, NSString, NSDictionary;

@interface OIDEndSessionResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) OIDEndSessionRequest *request;
@property (readonly, nonatomic) NSString *state;
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
