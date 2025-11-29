@interface MJSpeechAudioSlice : MJSpeechAudioData

@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) BOOL isEnd;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long totalDataLength;

- (id)initWithData:(id)a0 format:(unsigned long long)a1 sampleRate:(long long)a2 channelCount:(long long)a3 index:(unsigned long long)a4 isEnd:(BOOL)a5 offset:(unsigned long long)a6 totalDataLength:(unsigned long long)a7;
- (id)description;

@end
