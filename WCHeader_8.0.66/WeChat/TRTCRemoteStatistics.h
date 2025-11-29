@class NSString;

@interface TRTCRemoteStatistics : NSObject

@property (retain, nonatomic) NSString *userId;
@property (nonatomic) unsigned int audioPacketLoss;
@property (nonatomic) unsigned int videoPacketLoss;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int frameRate;
@property (nonatomic) unsigned int videoBitrate;
@property (nonatomic) unsigned int audioSampleRate;
@property (nonatomic) unsigned int audioBitrate;
@property (nonatomic) unsigned int jitterBufferDelay;
@property (nonatomic) unsigned int point2PointDelay;
@property (nonatomic) unsigned int audioTotalBlockTime;
@property (nonatomic) unsigned int audioBlockRate;
@property (nonatomic) unsigned int videoTotalBlockTime;
@property (nonatomic) unsigned int videoBlockRate;
@property (nonatomic) unsigned int finalLoss;
@property (nonatomic) unsigned int remoteNetworkUplinkLoss;
@property (nonatomic) unsigned int remoteNetworkRTT;
@property (nonatomic) long long streamType;

- (id)description;
- (void).cxx_destruct;

@end
