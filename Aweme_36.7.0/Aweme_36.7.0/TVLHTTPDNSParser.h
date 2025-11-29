@class NSString, TVLNetworkClient;

@interface TVLHTTPDNSParser : TVLBaseDNSParser {
    TVLNetworkClient *_client;
}

@property (class, nonatomic) NSString *serverHost;

@property (nonatomic) unsigned long long provider;

- (id)requestURLWithHost:(id)a0 provider:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)handleResponse:(id)a0 error:(id)a1;
- (id)initWithHostname:(id)a0;
- (void)start;
- (void)cancel;

@end
