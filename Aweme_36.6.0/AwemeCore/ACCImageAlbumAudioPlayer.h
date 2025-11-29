@class NSString;
@protocol ACCAudioPlayerProtocol, ACCMusicModelProtocol;

@interface ACCImageAlbumAudioPlayer : NSObject <ACCPropRecommendMusicProtocol>

@property (retain, nonatomic) id<ACCAudioPlayerProtocol> audioPlayer;
@property (retain, nonatomic) id<ACCMusicModelProtocol> music;
@property (nonatomic) BOOL didStartPlay;
@property (nonatomic) BOOL needResetMusicWhenPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currentPlayTime;
- (void)removeTimeObserver;
- (void)continuePlay;
- (void)setAudioClipRange:(id)a0;
- (void)replaceMusic:(id)a0;
- (void)configDelegateViewWithStatus:(unsigned long long)a0;
- (void)p_startMusicWithNeedRestart:(BOOL)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)setVolume:(double)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)replay;
- (void)dealloc;
- (double)volume;
- (void)addPeriodicTimeObserverForInterval:(double)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
