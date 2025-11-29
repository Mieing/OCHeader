@class NSNumber;

@interface BDPStreamAudioModel : BDPBasePluginModel

@property (nonatomic) long long audioId;
@property (nonatomic) double volume;
@property (nonatomic) double playbackRate;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL obeyMuteSwitch;
@property (nonatomic) BOOL autoplay;
@property (retain, nonatomic) NSNumber *numOfChannels;
@property (retain, nonatomic) NSNumber *sampleBit;
@property (retain, nonatomic) NSNumber *sampleRate;

- (void).cxx_destruct;

@end
