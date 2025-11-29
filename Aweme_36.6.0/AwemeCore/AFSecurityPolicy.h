@class NSArray;

@interface AFSecurityPolicy : NSObject

@property (nonatomic) unsigned long long SSLPinningMode;
@property (retain, nonatomic) NSArray *pinnedPublicKeys;
@property (nonatomic) BOOL validatesCertificateChain;
@property (retain, nonatomic) NSArray *pinnedCertificates;
@property (nonatomic) BOOL allowInvalidCertificates;
@property (nonatomic) BOOL validatesDomainName;

+ (id)defaultPinnedCertificates;
+ (id)policyWithPinningMode:(unsigned long long)a0;
+ (id)keyPathsForValuesAffectingPinnedPublicKeys;
+ (id)defaultPolicy;

- (BOOL)evaluateServerTrust:(struct __SecTrust { } *)a0 forDomain:(id)a1;
- (BOOL)evaluateServerTrust:(struct __SecTrust { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
