@class NSArray;

@interface SRPinningSecurityPolicy : SRSecurityPolicy

@property (readonly, copy, nonatomic) NSArray *pinnedCertificates;

- (BOOL)evaluateServerTrust:(struct __SecTrust { } *)a0 forDomain:(id)a1;
- (void).cxx_destruct;
- (id)initWithCertificates:(id)a0;

@end
