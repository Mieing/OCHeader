@class AWEDataLayerFetchDataToken, NSError, AWEDataLayerNetworkMetrics;

@interface AWEDataLayerFetchDataResult : NSObject

@property (retain, nonatomic) AWEDataLayerFetchDataToken *token;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) id responseObject;
@property (nonatomic) long long dataSource;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long networkRetryTimes;
@property (retain, nonatomic) AWEDataLayerNetworkMetrics *metrics;

- (void).cxx_destruct;

@end
