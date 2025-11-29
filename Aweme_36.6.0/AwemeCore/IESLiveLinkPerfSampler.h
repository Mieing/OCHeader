@protocol IESLiveLinkPerfSamplerDataSource;

@interface IESLiveLinkPerfSampler : NSObject {
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
@property (nonatomic) long long callbackInterval;
@property (weak, nonatomic) id<IESLiveLinkPerfSamplerDataSource> dataSource;

- (void)startPerfSampler;
- (void)stopPerfSampler;
- (void)clearInfo;
- (void)getGPUUsage;
- (void)addDropFrameRecord:(id)a0;
- (BOOL)getPerfSampleInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
