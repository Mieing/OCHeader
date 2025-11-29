@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HMDMatrixMonitor : HeimdallrModule <HMDAPPExitReasonDetectorProtocol, MMMemoryAdapterDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *uploadQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *uploadSemaphore;
@property (retain, nonatomic) NSMutableDictionary *filters;
@property (retain, nonatomic) NSMutableDictionary *sessionData;
@property (retain, nonatomic) NSString *appExitReason;
@property (copy, nonatomic) id /* block */ uploadCallback;
@property (nonatomic) BOOL isMatrixStartup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)matrixOfCustomUploadPath;
+ (void)cleanupIdentifier:(id)a0 fileRootPath:(id)a1;
+ (id)matrixOfExceptionUploadPath;
+ (id)matrixUploadRootPath;
+ (id)removableFileDirectoryPath;
+ (id)matrixOfMemoryGraphUploadPath;
+ (void)hmdMatrixSessionParamsTracker:(id)a0 customFilters:(id)a1 paramsWriteToFileName:(id)a2;
+ (id)sharedMonitor;
+ (void)removeAllFiles;

- (void)runTaskIndependentOfStart;
- (void)matrixOfCustomUploadWithPath:(id)a0 channel:(id)a1;
- (void)matrixIssueReportPath:(id)a0 type:(id)a1 scene:(id)a2 hasEnv:(BOOL)a3;
- (id)zipFileCounterDic;
- (void)increaseCounterWithIdentifier:(id)a0;
- (BOOL)deleteZipFileIfNeedWithIdentifier:(id)a0 filePath:(id)a1;
- (id)checkEnvParamsWithIdentifier:(id)a0 fileRootPath:(id)a1;
- (id)fetchPendingMatrixIdentifiers:(id)a0;
- (void)cleanCounterWithIdentifier:(id)a0;
- (void)uploadFileByPath:(id)a0 objectIdentifier:(id)a1 type:(id)a2 scene:(id)a3 byUser:(BOOL)a4 params:(id)a5 callback:(id /* block */)a6;
- (unsigned long long)startEnabled;
- (id)matrixUnsupportedReason:(unsigned long long)a0;
- (void)matrixOpen;
- (id)memoryMatrixUnsupportedReason:(unsigned long long)a0;
- (void)matrixOfCustomUpload;
- (void)detectMatrixStartAfterOOM:(int)a0 info:(id)a1;
- (void)matrixOfExceptionUpload;
- (BOOL)lastMatrixData;
- (void)reportLastRecordAndSession;
- (BOOL)writeSessionDataToFile;
- (void)uploadMatrixAlog;
- (void)reportLastSessionMemoryData;
- (void)customDumpfrequencyLimit;
- (void)viewControllerChanged;
- (id)getTempZipFileFromData:(id)a0 fileName:(id)a1;
- (void)onMemoryIssueReport:(id)a0;
- (void)onMemoryIssueNotFound:(id)a0;
- (void)onMemoryAdapterError:(int)a0 type:(id)a1;
- (void)onMemoryAdapterReason:(id)a0 type:(id)a1;
- (void)onMemoryAdapterRecord:(id)a0;
- (void)matrixIsUpdateDirtySize:(BOOL)a0;
- (void)customDumpfrequency:(id)a0;
- (void)viewControllerChangedWithTimestamp;
- (void)startDelay:(BOOL)a0;
- (void)didDetectExitReason:(int)a0 desc:(id)a1 info:(id)a2;
- (BOOL)uploadMatrixOfMemroyGraphNow;
- (void)matrixOfMemoryGraphUpload;
- (void).cxx_destruct;
- (id)init;
- (void)start;

@end
