@class TPPlayerLogContext, NSMutableDictionary;

@interface TPVodReporter : TPBaseReporter

@property (nonatomic, getter=isPlayDone) BOOL playDone;
@property (nonatomic, getter=isSeeking) BOOL seeking;
@property (nonatomic, getter=isBuffering) BOOL buffering;
@property (nonatomic, getter=isPausing) BOOL pausing;
@property (retain, nonatomic) TPPlayerLogContext *logCtx;
@property (nonatomic) long long prepapreTimeSinceBootMs;
@property (nonatomic) long long playerFirstStartTimeSinceBootMs;
@property (nonatomic) long long pauseBeginTimeSinceBootMs;
@property (nonatomic) long long pauseTotalDurationMs;
@property (nonatomic) float playSpeed;
@property (retain, nonatomic) NSMutableDictionary *selectTrackInfos;
@property (nonatomic) long long seekStartTimeSinceBootMs;
@property (nonatomic) int seekBufferingTotalCount;
@property (nonatomic) long long seekBufferingTotalDurationMs;
@property (nonatomic) int seekTotalCount;
@property (nonatomic) long long bufferingStartTimeSinceBootMs;
@property (nonatomic) int bufferingTotalCount;
@property (nonatomic) long long bufferingTotalDurationMs;

- (id)init;
- (void)onEvent:(unsigned long long)a0 withEvent:(id)a1;
- (id)eventHandlerTable;
- (id)invocationWithMethod:(SEL)a0;
- (void)onPrepareEnd:(id)a0;
- (void)onPlayerStart:(id)a0;
- (void)onPlayerPause:(id)a0;
- (void)onPlayerEnd:(id)a0;
- (void)onPlayerError:(id)a0;
- (void)handlePlayerEnd:(id)a0;
- (void)reportVodEndEvent:(id)a0;
- (id)getTPGeneralPlayFlowParams:(id)a0;
- (id)getTPDynamicStatisticParams:(id)a0;
- (void)fillVodEndEventParmas:(id)a0 withGeneralPlayFlowParams:(id)a1 withErrorCode:(long long)a2;
- (void)reportVodFlowEvent:(id)a0;
- (void)fillVodFlowEventParmasWithRunTimeParams:(id)a0;
- (void)fillVodFlowEventParmas:(id)a0 withGeneralPlayFlowParams:(id)a1;
- (void)fillVodFlowEventParmas:(id)a0 withDynamicStatisticParams:(id)a1;
- (void)onSeekStart:(id)a0;
- (void)onSeekEnd:(id)a0;
- (void)onBufferStart:(id)a0;
- (void)onBufferEnd:(id)a0;
- (void)onSelectTrackStart:(id)a0;
- (void)onSelectTrackEnd:(id)a0;
- (void)onSetPlaySpeed:(id)a0;
- (void)onDrmInfo:(id)a0;
- (void)onAppForeGround:(id)a0;
- (void)onAppBackGround:(id)a0;
- (void).cxx_destruct;

@end
