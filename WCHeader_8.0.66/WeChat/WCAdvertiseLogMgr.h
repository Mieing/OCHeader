@class NSString, WCAdvertiseLogDB, NSMutableArray;

@interface WCAdvertiseLogMgr : MMUserService <PBMessageObserverDelegate, MMKernelExt, MMServiceProtocol> {
    BOOL adLogReporting;
    BOOL reportTaskRunning;
    WCAdvertiseLogDB *logDB;
    unsigned int reportBeginLocalId;
    unsigned int reportCurrLocalId;
    unsigned int reportEndLocalId;
    BOOL delayInsertDB;
    NSMutableArray *tempLogs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getPathForLogCache;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)setupLogDB;
- (id)getKVLogHead;
- (void)reportADLog:(unsigned int)a0 logExt:(id)a1;
- (void)insertDBLogsToDb;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)tryReportADLog;
- (id)getReportADLogPackage;
- (void)startReportADLog;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)onAuthOK;
- (unsigned int)getNextReportTime;
- (void)saveNextReportTime:(unsigned int)a0;
- (unsigned int)getExceptionMaxTime;
- (unsigned int)getRandomInternalTime;
- (unsigned int)getMaxSendSize;
- (void).cxx_destruct;

@end
