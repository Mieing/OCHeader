@class TTHttpResponse;

@interface BDPTTNetworkHTTPResponse : BDPNetworkHTTPResponse

@property (retain, nonatomic) TTHttpResponse *response;

- (void)metricsFromChromiumTimeInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;

@end
