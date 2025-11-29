@class NSRecursiveLock, MMAudioCriticalEvent, MMAudioMonitorConfig, MMStackReportConnection, NSMutableArray, MMMetricsRecordDB;

@interface MMAudioMonitor : NSObject <MMStackReportConnectionDelegate> {
    MMAudioMonitorConfig *m_config;
    MMMetricsRecordDB *m_db;
    NSMutableArray *m_unSavedTasks;
    void *m_liveTasks;
    int m_checkCount;
    BOOL m_isBackgroundRunning;
    double m_lastCheckTime;
    double m_audioBeginTime;
    MMAudioCriticalEvent *m_criticalEvent;
    MMStackReportConnection *m_reportConnection;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableArray *liveWebviews;

+ (void)hook;
+ (id)sharedInstance;

- (void)onWebviewInit:(unsigned long long)a0;
- (void)onWebviewDealloc:(unsigned long long)a0;
- (void)collectWebviewPlayingData;
- (id)init;
- (void)dealloc;
- (void)setConfig:(id)a0;
- (void)setRecordDB:(id)a0;
- (void)collectData;
- (void)collectOtherPlayingData;
- (unsigned long long)taskKeyWith:(unsigned long long)a0 taskType:(unsigned long long)a1;
- (void)onTaskBegin:(unsigned long long)a0 taskType:(unsigned long long)a1;
- (void)onTaskEnd:(unsigned long long)a0 taskType:(unsigned long long)a1;
- (unsigned short)audioPlayingCount;
- (void)checkCriticalEventWithMetricsInfos:(id)a0 eventInfo:(id)a1;
- (void)uploadAllCriticalEvent;
- (void)uploadCriticalEvent:(id)a0;
- (id)stackInfosFromTasks:(id)a0;
- (void)resetReportCount;
- (void)onStackReportCompleted:(BOOL)a0;
- (void).cxx_destruct;

@end
