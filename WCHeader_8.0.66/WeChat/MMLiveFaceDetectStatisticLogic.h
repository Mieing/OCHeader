@class MMFinderLiveTask, MMLiveTaskId;

@interface MMLiveFaceDetectStatisticLogic : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (nonatomic) long long dataSrc;
@property (readonly, nonatomic) BOOL isStartStatistic;
@property (nonatomic) int maxFrameProcessTime;
@property (readonly, nonatomic) int avgFrameProcessTime;
@property (nonatomic) double frameProcessTimeSum;
@property (nonatomic) unsigned long long frameProcessCnt;
@property (readonly, nonatomic) int avgProcessFps;
@property (nonatomic) unsigned long long processFpsSum;
@property (nonatomic) unsigned long long processFpsCnt;
@property (readonly, nonatomic) int avgRenderFps;
@property (nonatomic) unsigned long long renderFpsSum;
@property (nonatomic) unsigned long long renderFpsCnt;
@property (nonatomic) int maxDesireProcessFps;
@property (nonatomic) int minDesireProcessFps;
@property (nonatomic) int maxLimitProcessFps;
@property (nonatomic) int minLimitProcessFps;
@property (nonatomic) int maxLimitDesireDiffFps;
@property (nonatomic) int minLimitDesireDiffFps;
@property (readonly, nonatomic) int avgSrcRenderFps;
@property (nonatomic) unsigned long long srcRenderFpsSum;
@property (nonatomic) unsigned long long srcRenderFpsCnt;
@property (readonly, nonatomic) int avgSrcDecodeFps;
@property (nonatomic) unsigned long long srcDecodeFpsSum;
@property (nonatomic) unsigned long long srcDecodeFpsCnt;
@property (nonatomic) int processDuration;
@property (nonatomic) long long thermalState;
@property (nonatomic) long long startThermalState;
@property (nonatomic) int disableFaceDetectTimes;
@property (nonatomic) int disableCanRetryFaceDetectTimes;

- (id)initWithTaskId:(id)a0;
- (void)initDefaultDatas;
- (void)initNotifications;
- (void)updateFaceDetectDataSrc:(long long)a0;
- (void)addFrameProcessTime:(double)a0;
- (void)updateFrameProcessFps:(int)a0;
- (void)updateFaceMaskRenderFps:(int)a0;
- (void)updateDesireProcessFps:(int)a0 LimitProcessFPS:(int)a1;
- (void)updateSrcRenderFps:(int)a0;
- (void)updateSrcDecodeFps:(int)a0;
- (void)addFaceDetectProcessDuration:(double)a0;
- (void)notifyDisableFaceDetectWithCanRetry:(BOOL)a0;
- (void)onExitLive;
- (void)onFaceDetectStatisticStart;
- (void)addFps:(int)a0 toSumFps:(unsigned long long *)a1 sumCnt:(unsigned long long *)a2;
- (void)updateThermalState:(long long)a0;
- (double)getFaceDetectPersistTimePercent;
- (void)reportStatistic;
- (void)onMatrixPerfWarning:(id)a0;
- (void).cxx_destruct;

@end
