@class NSString;

@interface GIDConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *clientID;
@property (readonly, nonatomic) NSString *serverClientID;
@property (readonly, nonatomic) NSString *hostedDomain;
@property (readonly, nonatomic) NSString *openIDRealm;

- (id)initWithClientID:(id)a0 serverClientID:(id)a1 hostedDomain:(id)a2 openIDRealm:(id)a3;
- (id)initWithClientID:(id)a0 serverClientID:(id)a1;
- (void).cxx_destruct;
- (id)initWithClientID:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
