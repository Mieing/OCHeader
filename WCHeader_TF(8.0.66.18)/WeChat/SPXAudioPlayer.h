@interface SPXAudioPlayer : BaseAudioPlayer

- (void)openSPXFile:(id)a0;
- (void)setDataFormat;
- (void)prepareBuffers;
- (id)init;
- (void)dealloc;
- (BOOL)preparePlayWithFile:(id)a0 sync:(BOOL)a1;
- (void)playAtTime:(unsigned int)a0;
- (void)setProgress:(unsigned int)a0;
- (void)replay;
- (void)stop;
- (void)autostop;

@end
