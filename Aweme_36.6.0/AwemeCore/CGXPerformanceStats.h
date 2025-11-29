@class NSString;

@interface CGXPerformanceStats : NSObject

@property (nonatomic) long long audioBitrate;
@property (nonatomic) double receivedAudioBitrate;
@property (nonatomic) double audioLostRate;
@property (nonatomic) long long audioRtt;
@property (nonatomic) long long audioJitter;
@property (nonatomic) long long audioE2eDelay;
@property (nonatomic) long long videoBitrate;
@property (nonatomic) double receivedVideoBitrate;
@property (nonatomic) double videoLostRate;
@property (nonatomic) long long videoRtt;
@property (nonatomic) long long videoStallCount;
@property (nonatomic) long long videoStallDuration;
@property (nonatomic) long long videoIntervalMs;
@property (nonatomic) long long videoDecodeFrameRate;
@property (nonatomic) long long videoRenderFrameRate;
@property (nonatomic) long long videoE2eDelay;
@property (nonatomic) long long videoJitter;
@property (nonatomic) long long videoWidth;
@property (nonatomic) long long videoHeight;
@property (nonatomic) long long netQuality;
@property (nonatomic) long long txNetQuality;
@property (nonatomic) long long rxNetQuality;
@property (nonatomic) long long recvByte;
@property (nonatomic) long long codecType;
@property (copy, nonatomic) NSString *codecTypeString;
@property (nonatomic) long long txCellularKBitrate;
@property (nonatomic) long long rxCellularKBitrate;

- (void).cxx_destruct;
- (id)description;

@end
