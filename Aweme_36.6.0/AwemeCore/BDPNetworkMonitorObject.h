@class BDPRequestMetrics, NSString, NSDictionary, NSURL, NSError, BDPNetworkRequestParam, BDPNetworkHTTPResponse;
@protocol BDPNetworkTaskProtocol;

@interface BDPNetworkMonitorObject : NSObject

@property (nonatomic) long long duration;
@property (nonatomic) long long latency;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) NSURL *generatedURL;
@property (retain, nonatomic) id<BDPNetworkTaskProtocol> request;
@property (retain, nonatomic) BDPNetworkRequestParam *requestParams;
@property (retain, nonatomic) BDPNetworkHTTPResponse *response;
@property (retain, nonatomic) id responseJSON;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) long long appType;
@property (nonatomic) BOOL isInnerRequest;
@property (retain, nonatomic) NSError *responseError;
@property (retain, nonatomic) BDPRequestMetrics *metrics;
@property (retain, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *requestLog;

- (void).cxx_destruct;

@end
