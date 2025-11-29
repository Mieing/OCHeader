@interface MJAudioOutputSettings : NSObject

@property (readonly, nonatomic) unsigned long long format;
@property (readonly, nonatomic) long long sampleRate;
@property (readonly, nonatomic) long long channelCount;

- (id)initWithAudioFormat:(unsigned long long)a0 sampleRate:(long long)a1 channelCount:(long long)a2;
- (id)description;

@end
