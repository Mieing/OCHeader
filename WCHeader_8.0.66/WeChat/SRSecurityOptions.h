@class NSURLRequest, NSArray;

@interface SRSecurityOptions : NSObject

@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) BOOL requestRequiresSSL;
@property (readonly, nonatomic) NSArray *pinnedCertificates;
@property (nonatomic) BOOL TLSSkipHostnameCheck;
@property (readonly, nonatomic) BOOL validatesCertificateChain;

- (id)initWithRequest:(id)a0 pinnedCertificates:(id)a1 chainValidationEnabled:(BOOL)a2 TLSSkipHostnameCheck:(BOOL)a3;
- (void)updateSecurityOptionsInStream:(id)a0;
- (BOOL)securityTrustContainsPinnedCertificates:(struct __SecTrust { } *)a0;
- (void).cxx_destruct;

@end
