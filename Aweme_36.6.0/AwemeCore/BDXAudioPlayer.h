@class NSString, TTVideoEngine;
@protocol BDXAudioPlayerDelegate;

@interface BDXAudioPlayer : NSObject <TTVideoEngineDelegate>

@property (retain, nonatomic) TTVideoEngine *engine;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double playbackTime;
@property (readonly, nonatomic) double playableTime;
@property (readonly, nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL looping;
@property (weak, nonatomic) id<BDXAudioPlayerDelegate> delegate;
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
- (void)videoEngineReadyToPlay:(id)a0;
- (void)videoEngine:(id)a0 mdlKey:(id)a1 hitCacheSze:(long long)a2;
- (void)setPlayUrl:(id)a0;
- (long long)playBitrate;
- (void)setLocalUrl:(id)a0;
- (long long)getPlaybackState:(long long)a0;
- (void)seekPlaybackTime:(double)a0 completion:(id /* block */)a1;
- (void)setPlayModel:(id)a0;
- (void)periodicTimeObserverForInterval;
- (long long)getLoadState:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)prepareToPlay;

@end
