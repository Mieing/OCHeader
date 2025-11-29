@class NSString, NSTimer, TTVideoEngine, NSDictionary;
@protocol AWECommentAudioPlayerDelegate;

@interface AWECommentAudioPlayer : NSObject <TTVideoEngineDelegate>

@property (retain, nonatomic) TTVideoEngine *engine;
@property (retain, nonatomic) NSTimer *loadTimer;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (retain, nonatomic) NSTimer *engineTimer;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isTimeout;
@property (nonatomic) BOOL audioEffectEnabled;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL needCookie;
@property (copy, nonatomic) NSString *localUrlString;
@property (copy, nonatomic) NSString *videoModel;
@property (copy, nonatomic) NSDictionary *audioEffectExternInfo;
@property (weak, nonatomic) id<AWECommentAudioPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)stopPlay;
- (void)startPlay;
- (void)playAudioSeekToTime:(double)a0;
- (void)continueAudioPlay;
- (void)setAudioEffectType:(long long)a0;
- (void)setAudioEffectSrcLoudness:(double)a0;
- (void)setAudioEffectSrcPeak:(double)a0;
- (void)setAudioEffectTargetLoudness:(double)a0;
- (void)setAudioEffectForbidCompressor:(BOOL)a0;
- (id)allCookieString;
- (void)prepareToPlayWithAudioEffectInfo:(id)a0;
- (void)enginePlay;
- (void)addLoadTimer;
- (void)addEngineTimer;
- (void)trackAudioSuccess:(BOOL)a0 status:(long long)a1;
- (void)pausePlay;
- (void)playFailed;
- (void)finishPlay;
- (void)trackCommentAudioAbnormalCaseWithType:(id)a0;
- (void)removeLoadTimer;
- (void)removeTimeoutTimer;
- (void)removeEngineTimer;
- (void)updateLoadState;
- (void)addTimeoutTimer;
- (void)loadTimeout;
- (id)initWithAudioEffectEnabled:(BOOL)a0;
- (void)playWithStartTime:(double)a0;
- (void)updateTime;
- (void)clearTimer;
- (void)setCurrentTime:(double)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)dealloc;
- (void)setupEngine;

@end
