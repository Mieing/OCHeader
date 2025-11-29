@class AVAudioPlayer, NSString;

@interface HearingAidPlayer : NSObject <AVAudioPlayerDelegate>

@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSString *playFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)activeAudioSession;
- (BOOL)playWAVFromBundle:(id)a0 onComplete:(id /* block */)a1;
- (BOOL)playWAVFromPath:(id)a0 isLoop:(BOOL)a1 onComplete:(id /* block */)a2;
- (BOOL)playWAVFromPath:(id)a0 onComplete:(id /* block */)a1;
- (BOOL)play;
- (void)stop;
- (void)setLoopingPlay:(unsigned char)a0;
- (BOOL)isPlaying;
- (double)currentTime;
- (double)duration;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
