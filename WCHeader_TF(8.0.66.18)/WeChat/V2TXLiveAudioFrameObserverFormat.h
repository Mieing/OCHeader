@interface V2TXLiveAudioFrameObserverFormat : NSObject

@property (nonatomic) int sampleRate;
@property (nonatomic) int channel;
@property (nonatomic) int samplesPerCall;
@property (nonatomic) long long mode;

@end
