@class NSRecursiveLock, NSThread, NSMutableArray, MMStackReportConnection, MMCPUTimeProfilerConfig, MMMetricsRecordDB;

@interface MMCPUTimeProfiler : NSObject <MMStackReportConnectionDelegate> {
    NSRecursiveLock *m_lock;
    BOOL m_isSampling;
    NSThread *m_workingThread;
    MMCPUTimeProfilerConfig *m_config;
    unsigned int m_usleepTime;
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
- (void)startSampling;
- (void)stopSampling;
- (void)timeProfilerThread;
- (id)samplesToSave;
- (void)saveData;
- (void)dumpAllThreads;
- (void)addSample:(id)a0;
- (void)checkCriticalEventWithMetricsInfos:(id)a0 eventInfo:(id)a1;
- (id)checkCriticalEventWithConfig:(id)a0 userType:(unsigned long long)a1 metricsInfos:(id)a2;
- (void)uploadAllCriticalEvent;
- (void)uploadCriticalEvent:(id)a0;
- (void)uploadMetricsDataFrom:(double)a0 to:(double)a1 averageUsage:(float)a2 eventTag:(unsigned long long)a3 eventSubTag:(unsigned long long)a4 eventInfo:(id)a5 inRecordDB:(id)a6;
- (id)stackInfosFromSamples:(id)a0;
- (void)resetReportCount;
- (void)startProfileForCurrentThread;
- (void)stopProfileForCurrentThread;
- (id)samplesForCurrentThread;
- (id)generateStackReportDict:(id)a0;
- (void)onStackReportCompleted:(BOOL)a0;
- (void).cxx_destruct;

@end
