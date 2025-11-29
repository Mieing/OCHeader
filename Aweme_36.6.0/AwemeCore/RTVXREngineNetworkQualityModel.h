@class NSString;

@interface RTVXREngineNetworkQualityModel : NSObject

@property (retain, nonatomic) NSString *uid;
@property (nonatomic) double lossRatio;
@property (nonatomic) int rtt;
@property (nonatomic) int totalBandwidth;
@property (nonatomic) unsigned long long txQuality;
@property (nonatomic) unsigned long long rxQuality;

- (void).cxx_destruct;

@end
