@class NSString, TTVideoEngine, TTVideoEngineModel, FlowPlayerVideoModel;
@protocol FlowMusicPlayerDelegate;

@interface FlowMusicPlayer : NSObject <TTVideoEngineDelegate>

@property (retain, nonatomic) TTVideoEngine *engine;
@property (weak, nonatomic) id<FlowMusicPlayerDelegate> delegate;
@property (retain, nonatomic) FlowPlayerVideoModel *currentVideoModel;
@property (retain, nonatomic) TTVideoEngineModel *currentEngineVideoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelFromModelString:(id)a0;

- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)videoEngine:(id)a0 fetchedVideoModel:(id)a1;
- (void)videoEnginePrepared:(id)a0;
- (void)videoEngineReadyToPlay:(id)a0;
- (void)videoEngineAudioRendered:(id)a0;
- (void)videoEngine:(id)a0 mdlKey:(id)a1 hitCacheSze:(long long)a2;
- (void)setTargetLufs:(double)a0;
- (void)setEngineOptionForKey:(long long)a0 value:(id)a1;
- (void)setVideoModelString:(id)a0;
- (void)initEngine;
- (void)setRemoteURLString:(id)a0 key:(id)a1;
- (void)seek:(double)a0 completion:(id /* block */)a1;
- (void)setLocalURLString:(id)a0;
- (long long)transToFlowState:(long long)a0;
- (long long)transToFlowLoadState:(unsigned long long)a0;
- (void)setRemoteURLString:(id)a0;
- (id)supportedResolution;
- (void)close;
- (BOOL)setResolution:(int)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setTag:(id)a0;
- (id)init;
- (void)stop;
- (long long)state;
- (void)setVolume:(float)a0;
- (double)duration;
- (double)progress;
- (long long)loadState;
- (double)currentPlaybackTime;
- (float)volume;
- (float)playbackSpeed;
- (void)setPlaybackSpeed:(float)a0;
- (double)playableDuration;
- (int)currentResolution;

@end
