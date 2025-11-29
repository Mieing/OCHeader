@class AVAudioPlayer, NSString;
@protocol IESLiveAudioPlayerDelegate, IESLiveAudioPlayerInput;

@interface IESLiveAVAudioPlayer : NSObject <AVAudioPlayerDelegate, IESLiveAudioPlayerProvider>

@property (retain, nonatomic) AVAudioPlayer *player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveAudioPlayerDelegate> delegate;
@property (retain, nonatomic) id<IESLiveAudioPlayerInput> audioInput;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) float volume;
@property (readonly, nonatomic) float duration;
@property (nonatomic) float overtime;

- (void)stopPlay;
- (void)startPlay;
- (void).cxx_destruct;
- (void)pause;
- (void)setVolume:(float)a0;
- (void)dealloc;
- (float)volume;
- (BOOL)prepareToPlay;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void)playAtTime:(double)a0;

@end
