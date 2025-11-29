@class NSData;

@interface MJSpeechAudioData : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long format;
@property (readonly, nonatomic) long long sampleRate;
@property (readonly, nonatomic) long long channelCount;

- (id)initWithData:(id)a0 format:(unsigned long long)a1;
- (id)initWithData:(id)a0 format:(unsigned long long)a1 sampleRate:(long long)a2 channelCount:(long long)a3;
- (id)description;
- (void).cxx_destruct;

@end
