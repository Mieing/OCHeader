@interface IESLiveLinkRTCInteractLocalAudioStats : NSObject

@property (nonatomic) float audioLossRate;
@property (nonatomic) float sentKBitrate;
@property (nonatomic) long long recordSampleRate;
@property (nonatomic) long long statsInterval;
@property (nonatomic) long long rtt;
@property (nonatomic) long long numChannels;
@property (nonatomic) long long sentSampleRate;

@end
