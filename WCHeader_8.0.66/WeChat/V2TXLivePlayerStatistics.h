@interface V2TXLivePlayerStatistics : NSObject

@property (nonatomic) unsigned long long appCpu;
@property (nonatomic) unsigned long long systemCpu;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long fps;
@property (nonatomic) unsigned long long videoBitrate;
@property (nonatomic) unsigned long long audioBitrate;
@property (nonatomic) unsigned long long audioPacketLoss;
@property (nonatomic) unsigned long long videoPacketLoss;
@property (nonatomic) unsigned long long jitterBufferDelay;
@property (nonatomic) unsigned long long audioTotalBlockTime;
@property (nonatomic) unsigned long long audioBlockRate;
@property (nonatomic) unsigned long long videoTotalBlockTime;
@property (nonatomic) unsigned long long videoBlockRate;
@property (nonatomic) unsigned long long rtt;
@property (nonatomic) unsigned long long netSpeed;

- (id)description;

@end
