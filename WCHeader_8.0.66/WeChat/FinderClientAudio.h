@interface FinderClientAudio : WXPBGeneratedMessage

@property (nonatomic) unsigned int volume;
@property (nonatomic) unsigned int audioMode;

+ (void)initialize;

- (void)setAudioMode:(unsigned int)a0;
- (unsigned int)audioMode;
- (void)setVolume:(unsigned int)a0;
- (unsigned int)volume;

@end
