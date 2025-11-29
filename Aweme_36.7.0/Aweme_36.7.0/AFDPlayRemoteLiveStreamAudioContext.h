@interface AFDPlayRemoteLiveStreamAudioContext : NSObject

@property (nonatomic) long long sampleRate;
@property (nonatomic) long long channels;
@property (nonatomic) long long duration;

- (id)initWithSampleRate:(long long)a0 channel:(long long)a1 duration:(long long)a2;

@end
