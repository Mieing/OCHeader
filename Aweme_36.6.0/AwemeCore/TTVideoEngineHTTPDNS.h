@class TTVideoEngineNetwork;

@interface TTVideoEngineHTTPDNS : TTVideoEngineDNSBase

@property (retain, nonatomic) TTVideoEngineNetwork *networkSession;
@property (nonatomic) unsigned long long hostDnsType;

+ (void)setHttpDNSServerIP:(id)a0;

- (void)notifyError:(id)a0;
- (id)initWithHostname:(id)a0 andType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)handleResponse:(id)a0 error:(id)a1;
- (void)start;
- (void)dealloc;
- (void)cancel;

@end
