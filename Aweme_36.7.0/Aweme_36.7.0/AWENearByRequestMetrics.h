@interface AWENearByRequestMetrics : NSObject

@property (nonatomic) long long dns;
@property (nonatomic) long long tcp;
@property (nonatomic) long long ssl;
@property (nonatomic) long long send;
@property (nonatomic) long long wait;
@property (nonatomic) long long receive;
@property (nonatomic) BOOL reuseConnect;
@property (nonatomic) long long duration;
@property (nonatomic) long long totalReceivedBytes;
@property (nonatomic) long long start;

+ (id)createMetricsWithTimingInfo:(id)a0;

@end
