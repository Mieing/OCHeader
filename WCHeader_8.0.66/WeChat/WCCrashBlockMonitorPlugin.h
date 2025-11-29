@class NSObject, NSString, WCCrashBlockMonitorConfig, NSMutableSet, NSMutableArray, WCCrashBlockMonitor;
@protocol OS_dispatch_queue, WCReportStrategyDelegate;

@interface WCCrashBlockMonitorPlugin : MatrixPlugin

@property (retain, nonatomic) WCCrashBlockMonitor *cbMonitor;
@property (retain, nonatomic) NSMutableArray *uploadingLagFileIDArray;
@property (retain, nonatomic) NSMutableArray *uploadingCrashFileIDArray;
@property (retain, nonatomic) NSMutableSet *uploadingCoreDumpIDs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pluginReportQueue;
@property (nonatomic) unsigned long long dumpUploadType;
@property (nonatomic) unsigned long long currentUploadType;
@property (copy, nonatomic) NSString *currentUploadDate;
@property (retain, nonatomic) WCCrashBlockMonitorConfig *pluginConfig;
@property (weak, nonatomic) id<WCReportStrategyDelegate> reportDelegate;

+ (id)getTag;
+ (BOOL)hasCrashReport;
+ (BOOL)haveLagFiles;
+ (BOOL)haveLagFilesOnDate:(id)a0;
+ (BOOL)haveLagFilesOnType:(unsigned long long)a0;
+ (BOOL)haveLagFilesOnDate:(id)a0 onType:(unsigned long long)a1;

- (id)init;
- (BOOL)start;
- (void)stop;
- (void)setupPluginListener:(id)a0;
- (void)destroy;
- (void)reportIssue:(id)a0;
- (void)reportIssueCompleteWithIssue:(id)a0 success:(BOOL)a1;
- (void)resetAppFullVersion:(id)a0 shortVersion:(id)a1;
- (void)handleBackgroundLaunch;
- (void)handleSuspend;
- (void)startBlockMonitor;
- (void)stopBlockMonitor;
- (void)startTrackCPU;
- (void)stopTrackCPU;
- (BOOL)isBackgroundCPUTooSmall;
- (BOOL)lowerCPUUsage;
- (BOOL)recoverCPUUsage;
- (BOOL)setRunloopThreshold:(unsigned int)a0;
- (BOOL)lowerRunloopThreshold;
- (BOOL)recoverRunloopThreshold;
- (void)setShouldSuspendAllThreads:(BOOL)a0;
- (id)generateLiveReportWithDumpType:(unsigned long long)a0 withReason:(id)a1 selfDefinedPath:(BOOL)a2;
- (void)setUserID:(unsigned long long)a0;
- (unsigned int)lastJSCType;
- (BOOL)isLagUploading:(id)a0;
- (void)addLagToUploadingArray:(id)a0;
- (void)removeLagFromUploadingArray:(id)a0;
- (BOOL)isCrashUploading:(id)a0;
- (void)addCrashToUploadingArray:(id)a0;
- (void)removeCrashFromUploadingArray:(id)a0;
- (void)notifyAppEnterForeground;
- (void)delayReportCrash;
- (void)autoClean;
- (void)autoReportCrash;
- (void)reportCrash;
- (void)autoReportLag;
- (void)reportAllLagFile;
- (void)reportAllLagFileOnDate:(id)a0;
- (void)reportOneTypeLag:(unsigned long long)a0 onDate:(id)a1;
- (void)reportTodayOneTypeLag;
- (void)reportTodayOneTypeLagLimit:(id)a0;
- (void)reportTodayOneTypeLagWithlimitUploadConfig:(id)a0 withLimitReportCount:(unsigned long long)a1 withLimitReportIDs:(id)a2;
- (id)getMatrixIssueFromReportTaskData:(id)a0 withReportType:(int)a1 quickUpload:(BOOL)a2;
- (void)reportCoreDumpWithTaskDataArray:(id)a0;
- (void)reportCoreDumpWithTaskData:(id)a0;
- (void)reportAllCoreDump;
- (void)reportCoreDumpWithCrashReportID:(id)a0;
- (void)reportCoreDumpWithFileID:(id)a0 FilePath:(id)a1;
- (void).cxx_destruct;

@end
