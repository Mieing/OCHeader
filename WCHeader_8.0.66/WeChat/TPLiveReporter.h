@class TPTimer, TPWorkerQueue, TPPlayerLogContext, TPLiveReportParamRecord;

@interface TPLiveReporter : TPBaseReporter

@property (retain, nonatomic) TPPlayerLogContext *log;
@property (retain, nonatomic) TPLiveReportParamRecord *reportParamRecord;
@property (nonatomic, getter=isPlayDone) BOOL playDone;
@property (nonatomic, getter=isBuffering) BOOL buffering;
@property (retain, nonatomic) TPWorkerQueue *reportQueue;
@property (retain, nonatomic) TPTimer *livePeroidTimer;

- (id)init;
- (void)onEvent:(unsigned long long)a0 withEvent:(id)a1;
- (void)reset;
- (id)eventHandlerTable;
- (id)invocationWithMethod:(SEL)a0;
- (void)onPrepareDone:(id)a0;
- (void)onPlayerStart:(id)a0;
- (void)onPlayerEnd:(id)a0;
- (void)onPlayerError:(id)a0;
- (void)onBufferStart:(id)a0;
- (void)onBufferEnd:(id)a0;
- (void)onProcessUpdate:(id)a0;
- (void)onCdnUrlUpdate:(id)a0;
- (void)onProtocolUpdate:(id)a0;
- (void)onAppForeGround:(id)a0;
- (void)onAppBackGround:(id)a0;
- (void)onLivePeroidReport;
- (void)startLivePeroidTimer;
- (void)stopPeroidTimer;
- (void)reportPlayerEndEvent:(long long)a0 withErrCode:(long long)a1 flowParams:(id)a2 statParams:(id)a3;
- (void)reportLiveEndFlowEvent:(id)a0 withStatParams:(id)a1;
- (void)reportLiveEndEvent:(long long)a0 withErrCode:(long long)a1 withFlowParams:(id)a2;
- (void)fillGeneralPlayFlowParams:(id)a0 withFlowParams:(id)a1;
- (void)fillPlayerEndConfigParams:(id)a0 withFlowParams:(id)a1;
- (id)makeLiveFlowParams:(id)a0 withStatParams:(id)a1;
- (id)makeLiveEndParams:(long long)a0 withErrCode:(long long)a1 withFlowParams:(id)a2;
- (void)fillPeriodRsvExtDicAndExtDic:(id)a0 withRsvExtDic:(id)a1 withExtDic:(id)a2;
- (id)getTPGeneralPlayFlowParams:(id)a0;
- (id)getTPDynamicStatisticParams:(id)a0;
- (void).cxx_destruct;

@end
