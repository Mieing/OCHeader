@interface CdnWeEffectManager : MMWeEffectManager

@property (nonatomic) BOOL isWeEffectProcessStart;
@property (nonatomic) long long fpsCounter;
@property (copy, nonatomic) id /* block */ getAverFootPrintCallback;
@property (copy, nonatomic) id /* block */ surviveOverTimeCallback;
@property (copy, nonatomic) id /* block */ checkNeedBeautyCallback;
@property (copy, nonatomic) id /* block */ checkCanSurviveCallback;
@property (nonatomic) BOOL needLimitFPS;
@property (nonatomic) int maxProcessFPS;
@property (nonatomic) long long cdnAudienceWeEffectScene;

- (void)startSurviveCountDown;
- (void)cancelSurviveCountDown;
- (double)getSurviveDuration;
- (long long)getFrameIntervalWithTriggerFps:(int)a0;
- (BOOL)checkNeedSkipProcessFrameWithTriggerFps:(int)a0;
- (BOOL)checkNeedSkipProcessFrameWithTimeInterval;
- (double)maxProcessTimeInterval;
- (void)dealloc;
- (void)onWeEffectProcessedStart;
- (void)onWeEffectProcessedEnd;
- (void)onSurviveOverTime;
- (double)getRecentAverageFootPrintMemoryPercent;
- (BOOL)checkCanSurviveAfterRenderStop;
- (BOOL)checkNeedBeautyWithFaceTrackRet:(int)a0;
- (void)checkNeedSkipProcess:(BOOL *)a0 skipFaceTrack:(BOOL *)a1 forFpsLimitWithTriggerFps:(int)a2 lastProcessedFrame:(id)a3;
- (void).cxx_destruct;

@end
