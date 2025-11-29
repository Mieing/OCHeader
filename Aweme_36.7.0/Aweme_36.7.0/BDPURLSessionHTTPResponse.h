@class NSURLResponse;

@interface BDPURLSessionHTTPResponse : BDPNetworkHTTPResponse

@property (retain, nonatomic) NSURLResponse *response;

- (void)metricsFromTransactionMetrics:(id)a0;
- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;

@end
