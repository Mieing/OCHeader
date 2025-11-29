@class NSString;

@interface BDPStreamAudioRecorderModel : BDPBasePluginModel

@property (nonatomic) long long duration;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long numberOfChannels;
@property (nonatomic) long long encodeBitRate;
@property (retain, nonatomic) NSString *format;
@property (nonatomic) long long frameSize;

- (void).cxx_destruct;
- (id)init;

@end
