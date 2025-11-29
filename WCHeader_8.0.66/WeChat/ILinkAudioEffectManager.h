@interface ILinkAudioEffectManager : TXAudioEffectManager

- (id)initWithMode;
- (void)startPlayMusic:(id)a0 onStart:(id /* block */)a1 onProgress:(id /* block */)a2 onComplete:(id /* block */)a3;
- (void)stopPlayMusic:(int)a0;
- (void)pausePlayMusic:(int)a0;
- (void)resumePlayMusic:(int)a0;
- (void)stopAllMusic;
- (void)setAllMusicVolume:(long long)a0;

@end
