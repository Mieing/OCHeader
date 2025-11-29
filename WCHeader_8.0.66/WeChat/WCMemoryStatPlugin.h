@class WCMemoryRecordManager, WCMemoryStatRecord, NSTimer, WCMemoryStatConfig;
@protocol WCMemoryStatPluginDelegate;

@interface WCMemoryStatPlugin : MatrixPlugin {
    WCMemoryRecordManager *m_recordManager;
    WCMemoryStatRecord *m_lastRecord;
    WCMemoryStatRecord *m_currRecord;
    NSTimer *m_autoDumpTimer;
}

@property (retain, nonatomic) WCMemoryStatConfig *pluginConfig;
@property (weak, nonatomic) id<WCMemoryStatPluginDelegate> delegate;

+ (id)getTag;

- (id)init;
- (void)deplayTryReportOOMInfo;
- (void)uploadRecord:(id)a0 withCustomInfo:(id)a1;
- (void)allocationsDumpAndGenerateReportData:(id)a0 customInfo:(id)a1 callback:(id /* block */)a2;
- (void)leaksCheckAndGenerateReportData:(id)a0 customInfo:(id)a1 callback:(id /* block */)a2;
- (id)recordList;
- (id)recordOfLastRun;
- (id)recordByLaunchTime:(unsigned long long)a0;
- (unsigned long long)pluginMemoryUsed;
- (unsigned long long)getMemoryStatDataSize;
- (void)cleanMemoryStatData;
- (void)setCurrentRecordInvalid;
- (void)reportErrorCode:(int)a0;
- (void)registerNotification;
- (BOOL)start;
- (BOOL)startVMRegionsLogging;
- (BOOL)startMemoryLogging;
- (BOOL)enableAllocationsLogger;
- (BOOL)enableLeaksChecker;
- (void)stop;
- (void)reportIssueCompleteWithIssue:(id)a0 success:(BOOL)a1;
- (void)didReceiveMemoryWarningNotification;
- (void).cxx_destruct;

@end
