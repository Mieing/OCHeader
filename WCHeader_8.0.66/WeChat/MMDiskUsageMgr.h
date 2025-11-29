@class NSString, MMDiskCommonUsageScanner, MMDiskUsageConfigHandler, MMDiskUsageReporter, MMFolderWrapCacheData, NSObject, MMDiskUsageStatus, MMDiskUsageScaner, MMTimer;
@protocol OS_dispatch_queue;

@interface MMDiskUsageMgr : MMUserService <MMDiskUsageScannerDelegate, MMDiskUsageRepoterDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) MMTimer *finishScanTimer;
@property (retain, nonatomic) MMDiskUsageScaner *scanner;
@property (weak, nonatomic) MMFolderWrapCacheData *sharedCache;
@property (retain, nonatomic) MMDiskUsageReporter *reporter;
@property (retain, nonatomic) MMDiskUsageConfigHandler *configHandler;
@property (retain, nonatomic) MMDiskUsageStatus *diskUsageStatus;
@property (retain, nonatomic) MMDiskCommonUsageScanner *appGroupScanner;
@property (nonatomic) BOOL shouldToScan;
@property (nonatomic) BOOL shouldReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)getUrgentLevel;

- (void)wholeWechatReport:(BOOL)a0;
- (void)onServiceEnterForeground;
- (void)asyncGetDiskScanData;
- (id)sharedCacheData;
- (void)dealloc;
- (void)clearData;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (BOOL)shouldDiskUsageReport;
- (void)reportIfNeeded;
- (void)onReportFinished;
- (void)wholeWechatScan:(BOOL)a0;
- (void)finishScanPhase;
- (BOOL)rejectScan;
- (void)startFinishScanDiskWithUrgentLevel:(unsigned int)a0;
- (void)stopScanDisk;
- (void)markLastForceCleanTmpTime;
- (BOOL)p_shouldForceCleanTmp;
- (BOOL)p_shouldFinishScanWithUrgentLevel:(unsigned int)a0;
- (void)startScanAppGroup;
- (void)onDiskUsageScanStart;
- (void)onDiskUsageScanFinishedWithScanStat:(id)a0;
- (void)onDiskUsageScanCancel;
- (BOOL)checkRawMediaCleanServiceRunTooFrequently;
- (void).cxx_destruct;

@end
