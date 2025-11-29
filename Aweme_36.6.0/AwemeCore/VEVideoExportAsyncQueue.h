@class VECurveTransUtils, VEVideoConfig, NSLock, NSMutableArray;

@interface VEVideoExportAsyncQueue : VEVideoAsyncQueue {
    VEVideoConfig *_config;
}

@property (retain, nonatomic) NSMutableArray *sampleDataQueue;
@property (retain, nonatomic) NSMutableArray *outputSampleDataQueue;
@property (retain, nonatomic) NSLock *sampleDataQueueLock;
@property (retain, nonatomic) NSLock *outputQueueLock;
@property (nonatomic) unsigned long long asyncThreadStatus;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekPos;
@property (nonatomic) long long freezeSize;
@property (nonatomic) long long maxQueueCount;
@property (nonatomic) BOOL enableAccurateSeek;
@property (nonatomic) BOOL isExportorFlag;
@property (retain, nonatomic) VECurveTransUtils *curveTransUtils;
@property (nonatomic) double outputFrameInterval;
@property (nonatomic) int maxCacheCount;
@property (nonatomic) BOOL enablegetMaxReferenceOpt;
@property (nonatomic) BOOL optLensFill;

- (BOOL)processSampleData:(id)a0;
- (void)initBufferQueue;
- (void)removeVideoDatas;
- (BOOL)isEmptyOfSampleDataQueue;
- (void)addObjectForOutputSampleDataQueue:(id)a0;
- (void)pushSampleDataQueue:(id)a0;
- (void)moveObjectToOutputQueueFromSampeQue;
- (void)removeOutputSampleDataQue;
- (void)p_optAddOutputQueue:(id)a0;
- (void)updateSampleDataPts:(id)a0;
- (void)p_addOutputQueue:(id)a0;
- (void)removeSampleDataQue;
- (id)getVideoDataWithAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isGtThresholdCache;
- (void)setExportorFlag:(BOOL)a0;
- (void)setSeekPosFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)requstVideoData:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)hasAvailable:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)hasFrame;
- (id)getNextVideoSampleBuffer;
- (BOOL)setConfig:(id)a0;
- (id)config;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
