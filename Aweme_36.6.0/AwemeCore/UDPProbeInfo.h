@class NSString;

@interface UDPProbeInfo : NSObject

@property (copy, nonatomic) NSString *udpProbeHostName;
@property (nonatomic) int udpProbePort;
@property (nonatomic) int udpProbePacketNumber;
@property (nonatomic) int udpRTTThreshold;
@property (nonatomic) int udpSuccPercentValue;

- (void).cxx_destruct;
- (id)init;

@end
