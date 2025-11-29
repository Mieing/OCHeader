@class NSString;

@interface TPReporterInitParams : NSObject

@property (nonatomic) long long tpSetDataSourceStartSinceBootTimeMs;
@property (nonatomic) long long getConvertedDataSourceSinceBootTimeMs;
@property (nonatomic) long long tpPrepareStartSinceBootTimeMs;
@property (nonatomic) long long tpPrepareStartOccurTimeSince1970Ms;
@property (copy, nonatomic) NSString *originalUrl;
@property (nonatomic) long long urlProtocol;
@property (nonatomic) long long playerType;
@property (nonatomic) BOOL isUseProxy;
@property (copy, nonatomic) NSString *playFlowId;
@property (nonatomic) BOOL needReportToBeacon;

- (id)init;
- (void).cxx_destruct;

@end
