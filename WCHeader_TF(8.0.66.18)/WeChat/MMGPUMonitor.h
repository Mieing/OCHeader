@class NSRecursiveLock, MMStackReportConnection, MMGPUMonitorConfig, NSMutableArray, MMMetricsRecordDB;

@interface MMGPUMonitor : NSObject <MMStackReportConnectionDelegate> {
    NSRecursiveLock *m_lock;
    BOOL m_hasInit;
    BOOL m_isSampling;
    MMGPUMonitorConfig *m_config;
    NSMutableArray *m_interceptClassNames;
    MMMetricsRecordDB *m_db;
    NSMutableArray *m_samplesToInsert;
    void *m_samplesToMerge;
    void *m_eventConfigs;
    MMStackReportConnection *m_reportConnection;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)setConfig:(id)a0;
- (void)setEventConfig:(id)a0 forUserType:(unsigned long long)a1;
- (void)setRecordDB:(id)a0;
- (BOOL)hasCrashedInGPUCounterSampling;
- (void)initSampling;
- (id)getTimestampCounterSet:(id)a0;
- (void)startSampling;
- (void)stopSampling;
- (void)renderTargetSampleCountShouldBe1;
- (void)renderTargetColorAtttachmentCountShouldGreaterThan1;
- (void)defaultRasterSampleCountShouldBe1;
- (void)depthAttachmentSampleCountShouldBe1;
- (void)stencilAttachmentSampleCountShouldBe1;
- (void)checkRenderPassSampleCountForRciVOIP:(id)a0;
- (void)beginSamplingWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;
- (void)beginSamplingWithCommandBuffer:(id)a0 computePassDescriptor:(id)a1;
- (void)beginSamplingWithCommandBuffer:(id)a0 blitPassDescriptor:(id)a1;
- (void)beginSamplingWithCommandBuffer:(id)a0 parallelRenderRenderPassDescriptor:(id)a1;
- (void)endSamplingWithCommandBuffer:(id)a0;
- (void)markCommandBufferAsSampled:(id)a0;
- (BOOL)hasCommandBufferSampled:(id)a0;
- (void)bindSamplingTraceInfo:(id)a0 withCommandBuffer:(id)a1;
- (void)recordCommitCallStack:(id)a0;
- (void)reportSamplingTraceInfo:(id)a0;
- (id)samplesToSave;
- (void)saveData;
- (void)checkCriticalEventWithMetricsInfos:(id)a0 eventInfo:(id)a1;
- (id)checkCriticalEventWithConfig:(id)a0 userType:(unsigned long long)a1 metricsInfos:(id)a2;
- (void)uploadAllCriticalEvent;
- (void)uploadCriticalEvent:(id)a0;
- (void)uploadMetricsDataFrom:(double)a0 to:(double)a1 averageUsage:(float)a2 eventTag:(unsigned long long)a3 eventSubTag:(unsigned long long)a4 eventInfo:(id)a5 inRecordDB:(id)a6;
- (id)stackInfosFromSamples:(id)a0;
- (void)resetReportCount;
- (void)onStackReportCompleted:(BOOL)a0;
- (void).cxx_destruct;

@end
