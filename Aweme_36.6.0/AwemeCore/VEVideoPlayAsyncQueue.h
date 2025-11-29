@class VEVideoConfig, NSMutableArray;

@interface VEVideoPlayAsyncQueue : VEVideoAsyncQueue {
    VEVideoConfig *_config;
}

@property (retain, nonatomic) NSMutableArray *sampleDataQueue;
@property (retain, nonatomic) NSMutableArray *outputSampleDataQueue;
@property (nonatomic) unsigned long long asyncThreadStatus;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekPos;
@property (nonatomic) BOOL enableAccurateSeek;
@property (nonatomic) BOOL isExportorFlag;
@property (nonatomic) double maxCacheTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastReqTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastBufferTime;
@property (nonatomic) BOOL useBufferOpt;
@property (nonatomic) double lastRequestSystemTime_t0;
@property (nonatomic) double lastRequestVideoTime_s0;
@property (nonatomic) double lastRequest_v0;
@property (nonatomic) double lastPredictPts;
@property (nonatomic) double predictTotalTimes;
@property (nonatomic) double predictSuccessTimes;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastReturnPts;
@property (nonatomic) BOOL enableSeekOpt;
@property (nonatomic) BOOL enableSampleQueueOpt;
@property (nonatomic) BOOL enableSeekOpt2;
@property (nonatomic) double playSpeed;
@property (nonatomic) BOOL enablegetMaxReferenceOpt;
@property (nonatomic) BOOL isSeekNeedFrame;
@property (nonatomic) long long maxCacheCount;
@property (nonatomic) BOOL isHighSpeed;
@property (nonatomic) unsigned long long seekDirections;
@property (nonatomic) long long videoSrcDurationUs;

- (BOOL)processSampleData:(id)a0;
- (void)initBufferQueue;
- (void)removeVideoDatas;
- (BOOL)isGtThresholdCache;
- (void)setExportorFlag:(BOOL)a0;
- (void)setSeekPosFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)requstVideoData:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isHitCache:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)getQueueHeadAndTailTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0 tailSampleTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1;
- (void)p_pushSampleDataQueue:(id)a0;
- (void)p_addObjectForOutputSampleDataQueue:(id)a0;
- (void)p_moveObjectToOutputQueue:(id)a0;
- (void)p_moveObjectToOutputQueueFromSampeQue:(id)a0;
- (void)p_removeOutputSampleDataQue;
- (void)p_removeSampleDataQue;
- (void)acceleratedCalculate2:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)p_getVideoDataWithAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)acceleratedCalculate:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)setConfig:(id)a0;
- (id)config;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
