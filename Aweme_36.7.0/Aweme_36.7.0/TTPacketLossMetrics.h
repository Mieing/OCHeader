@interface TTPacketLossMetrics : NSObject

@property (nonatomic) long long protocol;
@property (nonatomic) double upstreamLossRate;
@property (nonatomic) double upstreamLossRateVariance;
@property (nonatomic) double downstreamLossRate;
@property (nonatomic) double downstreamLossRateVariance;

- (id)init;

@end
