@class NSRecursiveLock, MMNetworkStatistics, NSTimer, MMStackReportConnection, MMMetricsNetworkDB, MMNetworkMonitorConfig, NSMutableArray;

@interface MMNetworkMonitor : NSObject <MMStackReportConnectionDelegate> {
    NSRecursiveLock *m_lock;
    MMNetworkMonitorConfig *m_config;
    MMMetricsNetworkDB *m_db;
    NSMutableArray *m_samplesToInsert;
    void *m_socketConnections;
    void *m_socketSamplesToMerge;
    void *m_httpSamplesToMerge;
    BOOL m_isOnWifi;
    NSTimer *m_timer;
    MMNetworkStatistics *m_currAppNetworkUsage;
    MMNetworkStatistics *m_lastDeviceNetworkStatistics;
    MMNetworkStatistics *m_currDeviceNetworkStatistics;
    void *m_eventConfigs;
    MMStackReportConnection *m_reportConnection;
}

+ (void)hook;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)setConfig:(id)a0;
- (void)setEventConfig:(id)a0 forUserType:(unsigned long long)a1;
- (void)setNetworkDB:(id)a0;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)socketConnectionBySockfd:(int)a0;
- (void)onSocketCreate:(int)a0;
- (void)onSocketAccept:(int)a0 addr:(const void *)a1 addrlen:(unsigned int *)a2;
- (void)onSocketBind:(int)a0 addr:(const void *)a1 addrlen:(unsigned int)a2;
- (void)onSocketConnect:(int)a0 addr:(const void *)a1 addrlen:(unsigned int)a2;
- (BOOL)shouldFilter:(const void *)a0;
- (void)onSocketProcess:(int)a0 sendBytes:(unsigned long long)a1 recvBytes:(unsigned long long)a2 addr:(const void *)a3;
- (void)onSocketClose:(int)a0;
- (void)onURLConnectionStart:(id)a0;
- (void)onURLConnectionProcess:(id)a0 sendBytes:(unsigned long long)a1 recvBytes:(unsigned long long)a2;
- (void)onURLSessionTaskStart:(id)a0;
- (void)onURLSessionTaskProcess:(id)a0 sendBytes:(unsigned long long)a1 recvBytes:(unsigned long long)a2;
- (void)onHttpRequest:(id)a0 sendBytes:(unsigned long long)a1 recvBytes:(unsigned long long)a2;
- (void)_httpRequest:(id)a0 callerStack:(id)a1 sendBytes:(unsigned long long)a2 recvBytes:(unsigned long long)a3;
- (id)samplesToSave;
- (id)currentAppNetworkUsage;
- (id)currentDeviceNetworkUsage;
- (void)resetNetworkUsage;
- (void)refreshNetworkStatus;
- (void)handleApplicationDidBecomeActiveNotification;
- (void)checkCriticalEventWithMetricsInfos:(id)a0 eventInfo:(id)a1;
- (id)checkCriticalEventWithConfig:(id)a0 userType:(unsigned long long)a1 metricsInfos:(id)a2;
- (void)uploadAllCriticalEvent;
- (void)uploadCriticalEvent:(id)a0;
- (id)stackInfosFromSamples:(id)a0;
- (void)resetReportCount;
- (void)onStackReportCompleted:(BOOL)a0;
- (void).cxx_destruct;

@end
