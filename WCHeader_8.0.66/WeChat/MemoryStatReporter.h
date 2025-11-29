@class NSString, WCMemoryStatPlugin, MemoryReportTask, NSMutableArray, MMStackReportConnection;

@interface MemoryStatReporter : NSObject <MMStackReportConnectionDelegate> {
    NSString *m_reportPath;
    NSString *m_configPath;
    MemoryReportTask *m_uploadTask;
    NSMutableArray *m_taskList;
    WCMemoryStatPlugin *m_plugin;
    BOOL m_isAllReport;
    MMStackReportConnection *m_connection;
    MMStackReportConnection *m_dumpReportConnection;
}

- (id)initWithReportPath:(id)a0;
- (BOOL)addSummaryReportTask:(unsigned long long)a0 customInfo:(id)a1;
- (void)uploadAllSummaryReport;
- (void)reportWithDumpData:(id)a0;
- (BOOL)canReport:(id)a0;
- (void)saveTasks;
- (void)loadTasks;
- (id)nextTask;
- (BOOL)hasNextTask;
- (void)doNextReport;
- (void)doSummaryReport:(id)a0;
- (void)onStackReportCompleted:(BOOL)a0;
- (void)onReportUploadCompleted:(BOOL)a0;
- (void).cxx_destruct;

@end
