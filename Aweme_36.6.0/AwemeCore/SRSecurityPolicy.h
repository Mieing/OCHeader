@interface SRSecurityPolicy : NSObject

@property (readonly, nonatomic) BOOL certificateChainValidationEnabled;

+ (id)pinnningPolicyWithCertificates:(id)a0;
+ (id)defaultPolicy;

- (BOOL)evaluateServerTrust:(struct __SecTrust { } *)a0 forDomain:(id)a1;
- (id)initWithCertificateChainValidationEnabled:(BOOL)a0;
- (void)updateSecurityOptionsInStream:(id)a0;
- (id)init;

@end
