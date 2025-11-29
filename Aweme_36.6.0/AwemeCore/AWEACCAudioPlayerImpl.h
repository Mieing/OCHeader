@class AWEMusicModel, AWEAVPlayerWrapper, NSString;
@protocol ACCMusicModelProtocol, ACCPropRecommendMusicProtocol;

@interface AWEACCAudioPlayerImpl : NSObject <AWEAVPlayerWrapperDelegate, ACCAudioPlayerProtocol>

@property (retain, nonatomic) AWEAVPlayerWrapper *audioPlayer;
@property (nonatomic) unsigned long long playerStatus;
@property (retain, nonatomic) AWEMusicModel *playingMusicModel;
@property (retain, nonatomic) id<ACCMusicModelProtocol> accPlayingMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long playStatus;
@property (weak, nonatomic) id<ACCPropRecommendMusicProtocol> delegate;
@property (readonly, nonatomic) BOOL canBackgroundPlay;

+ (id)audioPlayerWrapperConfig;

- (double)currentPlayTime;
- (void)removeTimeObserver;
- (void)continuePlay;
- (id)playingURL;
- (id)playingMusic;
- (void)pauseWithFadeOutDuration:(double)a0 completion:(id /* block */)a1;
- (void)playerWrapper:(id)a0 didChangePlayStatus:(unsigned long long)a1;
- (void)setAudioClipRangeWithStartTime:(double)a0 endTime:(double)a1 loopWay:(long long)a2;
- (void)configWithPlayerStatus:(unsigned long long)a0 animated:(BOOL)a1;
- (void)updateServiceWithMusicModel:(id)a0 audioPlayerPlayingBlock:(id /* block */)a1;
- (void)setupAudioPlayerWithPlayingBlock:(id /* block */)a0;
- (void)setRepeatCount:(double)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setStartTime:(double)a0;
- (void)setVolume:(double)a0;
- (void)dealloc;
- (double)volume;
- (void)addPeriodicTimeObserverForInterval:(double)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
