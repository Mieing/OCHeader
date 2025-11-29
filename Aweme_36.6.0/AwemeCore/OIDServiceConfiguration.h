@class NSURL, OIDServiceDiscovery;

@interface OIDServiceConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *authorizationEndpoint;
@property (readonly, nonatomic) NSURL *tokenEndpoint;
@property (readonly, nonatomic) NSURL *issuer;
@property (readonly, nonatomic) NSURL *registrationEndpoint;
@property (readonly, nonatomic) NSURL *endSessionEndpoint;
@property (readonly, nonatomic) OIDServiceDiscovery *discoveryDocument;

- (id)initWithAuthorizationEndpoint:(id)a0 tokenEndpoint:(id)a1;
- (id)initWithDiscoveryDocument:(id)a0;
- (id)initWithAuthorizationEndpoint:(id)a0 tokenEndpoint:(id)a1 issuer:(id)a2 registrationEndpoint:(id)a3 endSessionEndpoint:(id)a4 discoveryDocument:(id)a5;
- (id)initWithAuthorizationEndpoint:(id)a0 tokenEndpoint:(id)a1 registrationEndpoint:(id)a2;
- (id)initWithAuthorizationEndpoint:(id)a0 tokenEndpoint:(id)a1 issuer:(id)a2;
- (id)initWithAuthorizationEndpoint:(id)a0 tokenEndpoint:(id)a1 issuer:(id)a2 registrationEndpoint:(id)a3;
- (id)initWithAuthorizationEndpoint:(id)a0 tokenEndpoint:(id)a1 issuer:(id)a2 registrationEndpoint:(id)a3 endSessionEndpoint:(id)a4;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
