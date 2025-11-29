@interface UAServiceGetPhone : UAService

+ (id)necessaryRequestHeadKeys;
+ (id)URLWithDomainConfig:(id)a0;
+ (id)necessaryRequestBodyKeys;
+ (id)defendEOFKeys;
+ (id)decodeResultData:(id)a0 withKey:(id)a1 withFuncType:(id)a2;
+ (id)phoneScripCacheKeys;
+ (id)URL;

- (void)accessServiceWithData:(id)a0 results:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldAccessServiceGateway;
- (id)serviceRequest;
- (void)serviceNetworkDisposedRedirectionResponse:(id)a0;
- (void)finishServiceWithResult:(id)a0;

@end
