@class ACCImageAlbumAudioPlayer, NSMutableArray, NSString;

@interface ACCSequenceBGMPlayer : NSObject <AEKBGMPlayer>

@property (retain, nonatomic) ACCImageAlbumAudioPlayer *audioPlayer;
@property (retain, nonatomic) NSMutableArray *timeObserveCallbackList;
@property (nonatomic) BOOL timeObserving;
@property (nonatomic) float ttVideoEngineVolume;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currentPlayTime;
- (void)removeTimeObserver;
- (id)addAudioPlayerTimeObserver:(id /* block */)a0;
- (void)removeAudioPlayerTimeObserver:(id)a0;
- (double)bgmVolume;
- (void)setVolumeForAudio:(double)a0;
- (void)pauseMusic;
- (void)setAudioClipRange:(id)a0;
- (void)replayMusic;
- (void)continuePlayMusic;
- (void)replaceMusic:(id)a0;
- (void)p_logInfoWithLogMsg:(id)a0;
- (void)setupAudioPlayerIfNeed;
- (void)addAudioPlayerTimeObserver;
- (void).cxx_destruct;
- (id)init;
- (void)setVolume:(double)a0;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
