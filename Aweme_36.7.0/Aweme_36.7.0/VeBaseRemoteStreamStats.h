@class NSString;

@interface VeBaseRemoteStreamStats : NSObject

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long audioRtt;
@property (nonatomic) long long videoRtt;
@property (nonatomic) double audioLossRate;
@property (nonatomic) double videoLossRate;
@property (nonatomic) long long audioStallCount;
@property (nonatomic) long long videoStallCount;
@property (nonatomic) long long audioStallDuration;
@property (nonatomic) long long videoStallDuration;
@property (nonatomic) long long receivedAudioKBitrate;
@property (nonatomic) long long receivedVideoKBitrate;
@property (nonatomic) long long decoderOutputFrameRate;
@property (nonatomic) long long rendererOutputFrameRate;
@property (nonatomic) long long numChannels;
@property (nonatomic) long long playoutSampleRate;
@property (nonatomic) long long audioStatsInterval;
@property (nonatomic) long long videoStatsInterval;
@property (nonatomic) long long codecType;
@property (nonatomic) long long audioJitter;
@property (nonatomic) long long videoJitter;
@property (nonatomic) unsigned long long txQuality;
@property (nonatomic) unsigned long long rxQuality;
@property (nonatomic) long long receivedFrameRate;
@property (nonatomic) long long e2eDelay;

- (void).cxx_destruct;

@end
