@class NSDictionary, XPlayNetworkRequestParam, XPlayNetworkHTTPResponse, NSURL, NSString, NSError, XPlayRequestMetrics;
@protocol XPlayNetworkTaskProtocol;

@interface XPlayNetworkMonitorObject : NSObject

@property (nonatomic) long long startTime;
@property (nonatomic) long long duration;
@property (nonatomic) long long latency;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) NSURL *generatedURL;
@property (retain, nonatomic) id<XPlayNetworkTaskProtocol> request;
@property (retain, nonatomic) XPlayNetworkRequestParam *requestParams;
@property (retain, nonatomic) XPlayNetworkHTTPResponse *response;
@property (retain, nonatomic) id responseJSON;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) long long appType;
@property (retain, nonatomic) NSError *responseError;
@property (retain, nonatomic) XPlayRequestMetrics *metrics;
@property (retain, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *requestLog;

- (void).cxx_destruct;

@end
