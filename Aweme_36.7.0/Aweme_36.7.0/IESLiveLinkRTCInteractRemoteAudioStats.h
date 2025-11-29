@class NSString;

@interface IESLiveLinkRTCInteractRemoteAudioStats : NSObject

@property (copy, nonatomic) NSString *strUID;
@property (nonatomic) float audioLossRate;
@property (nonatomic) float receivedKBitrate;
@property (nonatomic) long long stallCount;
@property (nonatomic) long long stallDuration;
@property (nonatomic) long long playoutSampleRate;
@property (nonatomic) long long e2eDelay;
@property (nonatomic) long long statsInterval;
@property (nonatomic) long long rtt;
@property (nonatomic) long long quality;
@property (nonatomic) long long jitterBufferDelay;
@property (nonatomic) long long numChannels;
@property (nonatomic) long long receivedSampleRate;
@property (nonatomic) long long frozenRate;
@property (nonatomic) long long concealedSamples;
@property (nonatomic) long long concealmentEvent;
@property (nonatomic) long long decSampleRate;
@property (nonatomic) long long decDuration;

- (void).cxx_destruct;

@end
