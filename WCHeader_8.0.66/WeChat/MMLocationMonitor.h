@class NSRecursiveLock, NSMutableArray, MMLocationCriticalEvent, MMStackReportConnection, MMLocationMonitorConfig, MMMetricsRecordDB;

@interface MMLocationMonitor : NSObject <MMStackReportConnectionDelegate> {
    NSRecursiveLock *m_lock;
    MMLocationMonitorConfig *m_config;
    MMMetricsRecordDB *m_db;
    NSMutableArray *m_unSavedTasks;
    void *m_liveTasks;
    int m_checkCount;
    double m_locationBeginTime;
    MMLocationCriticalEvent *m_criticalEvent;
    MMStackReportConnection *m_reportConnection;
}

+ (void)hook;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)setConfig:(id)a0;
- (void)setRecordDB:(id)a0;
- (void)collectData;
- (void)onTaskBegin:(id)a0;
- (void)onTaskEnd:(id)a0;
- (unsigned short)locationRetrievingCount;
- (void)checkCriticalEventWithMetricsInfos:(id)a0 eventInfo:(id)a1;
- (void)uploadAllCriticalEvent;
- (void)uploadCriticalEvent:(id)a0;
- (id)stackInfosFromTasks:(id)a0;
- (void)resetReportCount;
- (void)onStackReportCompleted:(BOOL)a0;
- (void).cxx_destruct;

@end
