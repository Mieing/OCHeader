@class AWENetworkPackageLoss;

@interface AWENetworkQuailtyModel : NSObject <NSCopying>

@property (nonatomic) long long httpRtt;
@property (nonatomic) long long transportRtt;
@property (nonatomic) long long downstreamThroughputKbps;
@property (nonatomic) long long videoBitrateKbps;
@property (nonatomic) long long acMethod;
@property (nonatomic) BOOL longConnectOn;
@property (nonatomic) long long networlEffectLevel;
@property (retain, nonatomic) AWENetworkPackageLoss *quicLoss;
@property (nonatomic) double lastUpdateAt;

- (void).cxx_destruct;
- (id)displayString;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
