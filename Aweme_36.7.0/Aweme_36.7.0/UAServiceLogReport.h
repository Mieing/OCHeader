@interface UAServiceLogReport : UAService

+ (id)necessaryLogReportKeys;
+ (id)necessaryRequestHeadKeys;
+ (id)URLWithDomainConfig:(id)a0;
+ (id)necessaryBodyHeadFieldKeys;
+ (id)URL;

- (void)accessServiceWithData:(id)a0 results:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldAccessServiceGateway;
- (id)serviceRequest;

@end
