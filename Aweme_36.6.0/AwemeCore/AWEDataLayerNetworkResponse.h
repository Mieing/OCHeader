@class NSError, NSDictionary, AWEDataLayerNetworkMetrics;

@interface AWEDataLayerNetworkResponse : NSObject

@property (nonatomic) long long retryTimes;
@property (nonatomic) long long combineCount;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) id responseObject;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *allHeaderFields;
@property (retain, nonatomic) AWEDataLayerNetworkMetrics *metrics;

- (void).cxx_destruct;
- (BOOL)shouldRetry;

@end
