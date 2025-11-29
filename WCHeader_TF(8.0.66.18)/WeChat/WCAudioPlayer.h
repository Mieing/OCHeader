@class MMTimer, NSString, WCAudioInfo;
@protocol IWCAudioPlayerCore;

@interface WCAudioPlayer : NSObject <IWCAudioPlayerCoreDelegate, WCAudioModuleDelegate, IWCAudioPlayer>

@property (retain, nonatomic) id<IWCAudioPlayerCore> playerCore;
@property (retain, nonatomic) MMTimer *progressCheckTimer;
@property (nonatomic) BOOL isReuse;
@property (nonatomic) BOOL enableProgressCallback;
@property (nonatomic) BOOL enableAudioModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long mode;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) WCAudioInfo *currentInfo;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double bufferedTime;
@property (readonly, nonatomic) double displayTime;
@property (nonatomic) float playRate;
@property (nonatomic) float volume;

- (void)dealloc;
- (BOOL)playWithAudioInfo:(id)a0;
- (BOOL)playWithAudioInfo:(id)a0 startTime:(double)a1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)reset;
- (void)seekToTime:(double)a0 autoPlay:(BOOL)a1;
- (BOOL)isPlaying;
- (BOOL)isPaused;
- (BOOL)canPlay;
- (BOOL)isCurrentInfoSameWith:(id)a0;
- (void)onAudioPlayerEvent:(unsigned long long)a0 withAudioInfo:(id)a1 error:(id)a2;
- (void)startProgressCheckTimer;
- (void)stopProgressCheckTimer;
- (void)onProgressCheckTimerCallback;
- (void)wcAudioPlayerCore:(id)a0 statusChanged:(unsigned long long)a1 audioInfo:(id)a2;
- (void)wcAudioPlayerCore:(id)a0 onEvent:(unsigned long long)a1 audioInfo:(id)a2 error:(id)a3;
- (BOOL)activeAudioModule;
- (void)deactiveAudioModule;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (void).cxx_destruct;

@end
