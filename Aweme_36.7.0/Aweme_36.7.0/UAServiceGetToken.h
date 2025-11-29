@interface UAServiceGetToken : UAService

+ (id)necessaryRequestHeadKeys;
+ (id)URLWithDomainConfig:(id)a0;
+ (id)necessaryRequestBodyKeys;
+ (id)URL;

- (void)accessServiceWithData:(id)a0 results:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldAccessServiceGateway;
- (id)serviceRequest;

@end
