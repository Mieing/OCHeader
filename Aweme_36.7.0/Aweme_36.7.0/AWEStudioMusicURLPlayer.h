@class NSTimer, TTVideoEngine, NSString;

@interface AWEStudioMusicURLPlayer : NSObject <TTVideoEngineDelegate, ACCAudioURLPlayerProtocol>

@property (nonatomic) unsigned long long playerState;
@property (nonatomic) double currentPlaybackTime;
@property (retain, nonatomic) TTVideoEngine *engine;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *currentPlayURL;
@property (nonatomic) double playableDuration;
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
- (void)videoEngine:(id)a0 switchMediaInfoCompleted:(long long)a1;
- (void)playWithURL:(id)a0 startTime:(double)a1 playableDuration:(double)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)activateTimer;
- (void)deactivateTimer;

@end
