@class NSString, TTVideoEngine, AWEAudioFadeWrapper, UIView;
@protocol AWEAudioEngineDelegate;

@interface AWEAudioEngine : NSObject <TTVideoEngineDelegate, TTVideoEngineDataSource>

@property (retain, nonatomic) TTVideoEngine *engine;
@property (retain, nonatomic) AWEAudioFadeWrapper *audioWrapper;
@property (nonatomic) BOOL isStalling;
@property (readonly, nonatomic) UIView *playerView;
@property (readonly, nonatomic) long long playBitrate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double playbackTime;
@property (readonly, nonatomic) double playableDuration;
@property (readonly, nonatomic) double durationWatched;
@property (readonly, nonatomic) long long playbackState;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isLoadStatePlayable;
@property (nonatomic) BOOL looping;
@property (nonatomic) BOOL radioMode;
@property (nonatomic) BOOL fadeInOutEnable;
@property (weak, nonatomic) id<AWEAudioEngineDelegate> delegate;
@property (nonatomic) long long scaleMode;
@property (nonatomic) BOOL delayPrepreToPlayToStartTimeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)videoEngineReadyToDisPlay:(id)a0;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1 extra:(id)a2;
- (void)videoEnginePrepared:(id)a0;
- (void)videoEngineReadyToPlay:(id)a0;
- (void)videoEngine:(id)a0 mdlKey:(id)a1 hitCacheSze:(long long)a2;
- (void)setVid:(id)a0;
- (void)setPlayUrl:(id)a0;
- (void)setVideoModel:(id)a0;
- (void)setStartTimeWithPrepareToPlay:(double)a0;
- (id)apiForFetcher:(unsigned long long)a0;
- (void)setCustomHeaderValue:(id)a0 forKey:(id)a1;
- (void)setAudioEffectEnabled:(BOOL)a0;
- (void)setAudioEffectType:(long long)a0;
- (void)setAudioEffectSrcLoudness:(double)a0;
- (void)setAudioEffectSrcPeak:(double)a0;
- (long long)getPlaybackState:(long long)a0;
- (void)seekPlaybackTime:(double)a0 completion:(id /* block */)a1;
- (void)seekPlaybackTime:(double)a0 completion:(id /* block */)a1 renderComplete:(id /* block */)a2;
- (void)setPlayUrl:(id)a0 key:(id)a1;
- (void)setPlayUrls:(id)a0;
- (void)setPlayUrls:(id)a0 key:(id)a1;
- (void)setAudioEffectTargetLoudness:(double)a0;
- (void)setAudioEffectForbidCompressor:(BOOL)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setStartTime:(double)a0;
- (void)stop;
- (void)setQuality:(unsigned long long)a0;
- (void)prepareToPlay;

@end
