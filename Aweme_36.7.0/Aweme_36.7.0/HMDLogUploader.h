@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HMDLogUploader : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *uploadQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *uploadSemaphore;
@property (nonatomic) unsigned long long crashUploadSecond;
@property (nonatomic) unsigned long long exceptionUploadSecond;
@property (copy, nonatomic) NSString *alogTempPath;
@property (nonatomic) BOOL enableRetry;
@property (nonatomic) long long alogUploadSeconds;
@property (copy, nonatomic) id /* block */ internalAttrBlock;
@property (nonatomic) BOOL shouldUploadAlogIfCrashed;
@property (nonatomic) BOOL crashUploadAllInstances;
@property (nonatomic) BOOL exceptionUploadAllInstances;
@property (nonatomic) BOOL userUploadAllInstances;
@property (copy, nonatomic) id /* block */ forbidAlogUploadBlock;
@property (copy, nonatomic) id /* block */ uploadGlobalBlock;
@property (copy, nonatomic) id /* block */ attributionBlock;
@property (copy, nonatomic) NSArray *allowScenesToCategory;

+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (void)reportALogByUsersWithFetchStartTime:(double)a0 fetchEndTime:(double)a1 scene:(id)a2 reportALogCallback:(id /* block */)a3;
- (void)reportALogByUsersWithFetchStartTime:(double)a0 fetchEndTime:(double)a1 scene:(id)a2 instanceName:(id)a3 reportALogCallback:(id /* block */)a4;
- (void)reportALogWithFetchStartTime:(double)a0 fetchEndTime:(double)a1 scene:(id)a2 instanceName:(id)a3 reportALogCallback:(id /* block */)a4;
- (void)_removeFileAtPath:(id)a0 forReason:(id)a1;
- (void)_reportALogAsyncWithScene:(id)a0 manner:(id)a1 instanceName:(id)a2 byUser:(BOOL)a3 fetchStartTime:(double)a4 fetchEndTime:(double)a5 callback:(id /* block */)a6;
- (void)reportFeedbackALogWithFetchStartTime:(double)a0 fetchEndTime:(double)a1 scene:(id)a2 instanceName:(id)a3 reportALogCallback:(id /* block */)a4;
- (void)reportALogWithFetchStartTime:(double)a0 fetchEndTime:(double)a1 scene:(id)a2 reportALogCallback:(id /* block */)a3;
- (void)_reportALogWithScene:(id)a0 manner:(id)a1 instanceName:(id)a2 byUser:(BOOL)a3 fetchStartTime:(double)a4 fetchEndTime:(double)a5 uploadStartTime:(double)a6 callback:(id /* block */)a7;
- (void)_reportALogWithScene:(id)a0 manner:(id)a1 instanceName:(id)a2 byUser:(BOOL)a3 fetchStartTime:(double)a4 fetchEndTime:(double)a5 uploadStartTime:(double)a6 onlyLastALog:(BOOL)a7 callback:(id /* block */)a8;
- (BOOL)_checkIfInstanceNameValidWithUploadInfo:(id)a0 monitorInfo:(id)a1;
- (void)_cleanZipFilesForInstance:(id)a0;
- (BOOL)_checkIfCanUploadFileWithUploadInfo:(id)a0 monitorInfo:(id)a1;
- (BOOL)_checkIfServerAvailableWithUploadInfo:(id)a0 monitorInfo:(id)a1;
- (BOOL)_checkIfAllowALogUploadWithUploadInfo:(id)a0 monitorInfo:(id)a1;
- (id)_alogFileMapWithUploadInfo:(id)a0;
- (void)_executeCallbackWithUploadInfo:(id)a0 monitorInfo:(id)a1;
- (void)_trackEvent:(id)a0 monitorInfo:(id)a1;
- (BOOL)_zipALogFilesWithUploadInfo:(id)a0 monitorInfo:(id)a1 targetPath:(id)a2;
- (void)_uploadALogFilesByUser:(BOOL)a0 retryTimes:(long long)a1 uploadInfo:(id)a2 monitorInfo:(id)a3 finishBlock:(id /* block */)a4;
- (void)_uploadALogFilesByUser:(BOOL)a0 uploadInfo:(id)a1 monitorInfo:(id)a2 finishBlock:(id /* block */)a3;
- (void)uploadLastFeedbackAlogBeforeTime:(double)a0 instanceName:(id)a1;
- (void)_uploadLastALogAsyncBeforeTime:(double)a0 instanceName:(id)a1 byUser:(BOOL)a2;
- (void)uploadLastAlogBeforeTime:(double)a0 instanceName:(id)a1;
- (void)_uploadLastALogBeforeTime:(double)a0 scene:(id)a1 manner:(id)a2 instanceName:(id)a3 byUser:(BOOL)a4 uploadStartTime:(double)a5;
- (void)_trackEvent:(id)a0 monitorInfo:(id)a1 injectedMetrics:(id)a2 injectedDimensions:(id)a3 injectedValues:(id)a4;
- (long long)_maxUploadFileCount:(id)a0;
- (void)_uploadAttributionLogsWithUploadInfo:(id)a0 startTime:(double)a1 endTime:(double)a2;
- (void)reportALogAllInstancesByUsersWithFetchStartTime:(double)a0 fetchEndTime:(double)a1 scene:(id)a2 reportALogCallback:(id /* block */)a3;
- (void)reportALogbyUsersWithFetchStartTime:(double)a0 fetchEndTime:(double)a1 scene:(id)a2 reportALogCallback:(id /* block */)a3;
- (void)reportFeedbackALogWithFetchStartTime:(double)a0 fetchEndTime:(double)a1 scene:(id)a2 reportALogCallback:(id /* block */)a3;
- (void)reportALogWithFetchStartTime:(double)a0 fetchEndTime:(double)a1 scene:(id)a2;
- (void)reportALogAllInstancesWithFetchStartTime:(double)a0 fetchEndTime:(double)a1 scene:(id)a2 reportALogCallback:(id /* block */)a3;
- (void)uploadLastFeedbackAlogBeforeTime:(double)a0;
- (void)uploadLastFeedbackAlogEveryInstanceBeforeTime:(double)a0;
- (void)uploadLastAlogBeforeTime:(double)a0;
- (void)uploadLastAlogEveryInstanceBeforeTime:(double)a0;
- (void)uploadAlogIfCrashed;
- (void)uploadAlogIfCrashedWithTime:(unsigned long long)a0;
- (void)setUploadALogTimeForException:(unsigned long long)a0;
- (void)crashALogUploadWithEndTime:(double)a0;
- (void)exceptionALogUploadWithEndTime:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
