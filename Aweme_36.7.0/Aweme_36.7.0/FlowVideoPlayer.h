@class NSString, TTVideoEngine;
@protocol FlowVideoPlayerDelegate;

@interface FlowVideoPlayer : NSObject <TTVideoEngineDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TTVideoEngine *engine;
@property (nonatomic) long long playbackState;
@property (nonatomic) long long loadState;
@property (nonatomic) BOOL looping;
@property (nonatomic) BOOL muted;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double currentPlaybackTime;
@property (weak, nonatomic) id<FlowVideoPlayerDelegate> delegate;

+ (void)preloadVideoModelString:(id)a0;
+ (struct CGSize { double x0; double x1; })getVideoSizeFromModelString:(id)a0;
+ (void)preloadVideoModelWithSingleVideo:(id)a0 preloadInterval:(unsigned long long)a1;
+ (void)startAutoTraceVideoLog;

- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)setTargetLufs:(double)a0;
- (void)setEngineOptionForKey:(long long)a0 value:(id)a1;
- (void)setVideoModelString:(id)a0;
- (void)setPlayerViewContentMode:(long long)a0;
- (void)setupSR;
- (void)setPlaybackTime:(double)a0 complete:(id /* block */)a1;
- (void)setLocalUrlString:(id)a0;
- (void)initEngine;
- (void)configVideoEngineTag:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (double)progress;
- (id)playerView;
- (void)prepareToPlay;

@end
