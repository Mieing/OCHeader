@interface WAOpenALAudioDecodeInfo : NSObject

@property (nonatomic) int format;
@property (nonatomic) int size;
@property (nonatomic) int sampleRate;
@property (nonatomic) void *audioData;
@property (nonatomic) float duration;

- (BOOL)isVaild;
- (void)dealloc;
- (id)description;

@end
