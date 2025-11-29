@class NSString, TTVideoEngine, NSURL, NSError, AWEAudioFile;
@protocol AWEAVPlayerWrapperTTVideoEngineDelegate;

@interface AWEAVPlayerWrapper_TTVideoEngine : NSObject <TTVideoEngineDelegate, TTVideoEngineInternalDelegate, AWEAVPlayerWrapper>

@property (nonatomic) unsigned long long playStatus;
@property (retain, nonatomic) TTVideoEngine *playerController;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AWEAudioFile *audioFile;
@property (nonatomic) BOOL hasEnableAsyncOptimize;
@property (weak, nonatomic) id<AWEAVPlayerWrapperTTVideoEngineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) double currentPlayTime;
@property (nonatomic) BOOL needCookie;

+ (id)allCookieString;

- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)removeTimeObserver;
- (void)replaceCurrentItemWith:(id)a0;
- (void)enableAsyncOptimize;
- (void)clearCurrentPlayer;
- (void)pauseWithFadeOutDuration:(double)a0 completion:(id /* block */)a1;
- (void)setAudioClipRangeWithStartTime:(double)a0 endTime:(double)a1 loopWay:(long long)a2;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setStartTime:(double)a0;
- (id)init;
- (void)setVolume:(double)a0;
- (double)duration;
- (void)seekToTime:(double)a0;
- (double)volume;
- (void)addPeriodicTimeObserverForInterval:(double)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
