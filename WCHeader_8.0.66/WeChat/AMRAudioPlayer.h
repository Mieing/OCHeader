@interface AMRAudioPlayer : BaseAudioPlayer

- (void)openAMRFile:(id)a0;
- (void)setDataFormat;
- (void)prepareBuffers;
- (BOOL)preparePlayNotNotify;
- (void)clearVoiceHeadWithFile:(id)a0;
- (BOOL)preparePlayWithFile:(id)a0 sync:(BOOL)a1;
- (void)play;
- (void)playAtTime:(unsigned int)a0;
- (void)setProgress:(unsigned int)a0;
- (void)replay;
- (void)stop;
- (void)autostop;

@end
