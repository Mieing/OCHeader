@class AVAudioPlayer, NSString;

@interface SimpleCommonPlayer : CommonPlayer <AVAudioPlayerDelegate>

@property (retain, nonatomic) AVAudioPlayer *m_audioPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePath:(id)a0;
- (void)updateData:(id)a0;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)start;
- (BOOL)isPlaying;
- (void)setVolume:(float)a0;
- (double)duration;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)audioPlayerBeginInterruption:(id)a0;
- (void)setNumberOfLoops:(long long)a0;
- (void).cxx_destruct;

@end
