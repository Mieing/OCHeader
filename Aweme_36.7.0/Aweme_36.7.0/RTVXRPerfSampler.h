@interface RTVXRPerfSampler : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (copy, nonatomic) id /* block */ frameDropCallback;
@property (nonatomic) double normalHitchTime;
@property (nonatomic) double mediumHitchTime;
@property (nonatomic) double criticalHitchTime;
@property (nonatomic) double totalHitchTime;
@property (nonatomic) double gpuUsage;
@property (nonatomic) double lastSampleTime;
@property (nonatomic) BOOL isStaticStateSample;
@property (nonatomic) double gpuUsageSampleTime;
@property (nonatomic) double gpuUsageMinDuration;
@property (nonatomic) long long frameCallbackInterval;
@property (nonatomic) BOOL isRunning;

- (void)startPerfSampler;
- (void)stopPerfSampler;
- (void)clearInfo;
- (void)getGPUUsage;
- (id)__logTag;
- (BOOL)getPerfSampleInfo:(id)a0;
- (void)addDropFrameRecord:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
