@class NSString;

@interface IESLiveLinkRTCRtcNetworkQuality : NSObject

@property (retain, nonatomic) NSString *uid;
@property (nonatomic) double lossRatio;
@property (nonatomic) int rtt;
@property (nonatomic) int totalBandwidth;
@property (nonatomic) unsigned long long txQuality;
@property (nonatomic) unsigned long long rxQuality;

+ (id)initWithRTCQuality:(id)a0;

- (void).cxx_destruct;

@end
