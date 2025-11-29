@interface TTNetworkQualityV2 : NSObject

@property (nonatomic) int level;
@property (nonatomic) int effectivHttpRttMs;
@property (nonatomic) int effectiveTransportRttMs;
@property (nonatomic) int effectiveRxThroughputKbps;

- (id)init;

@end
