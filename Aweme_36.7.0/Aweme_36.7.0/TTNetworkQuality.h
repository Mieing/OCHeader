@interface TTNetworkQuality : NSObject

@property (nonatomic) long long httpRttMs;
@property (nonatomic) long long transportRttMs;
@property (nonatomic) long long downstreamThroughputKbps;

- (id)init;

@end
