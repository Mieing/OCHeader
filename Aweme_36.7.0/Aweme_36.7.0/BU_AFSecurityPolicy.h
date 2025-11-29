@class NSSet;

@interface BU_AFSecurityPolicy : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long SSLPinningMode;
@property (retain, nonatomic) NSSet *pinnedPublicKeys;
@property (retain, nonatomic) NSSet *pinnedCertificates;
@property (nonatomic) BOOL allowInvalidCertificates;
@property (nonatomic) BOOL validatesDomainName;

+ (id)defaultPinnedCertificates;
+ (id)keyPathsForValuesAffectingPinnedPublicKeys;
+ (id)certificatesInBundle:(id)a0;
+ (id)defaultPolicy;

- (BOOL)evaluateServerTrust:(struct __SecTrust { } *)a0 forDomain:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
