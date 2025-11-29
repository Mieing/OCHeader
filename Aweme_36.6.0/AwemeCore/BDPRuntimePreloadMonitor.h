@class NSMutableDictionary, NSDictionary, BDPTimer, NSMutableSet, NSObject, BDPPreloadStateModel;
@protocol OS_dispatch_queue;

@interface BDPRuntimePreloadMonitor : NSObject {
    void *operationQueueKey;
}

@property (retain, nonatomic) NSMutableDictionary *preloadInfoDic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) BDPTimer *timer;
@property (nonatomic) BOOL needUploadGlobalPoint;
@property (copy, nonatomic) NSDictionary *entryTypeConfig;
@property (nonatomic) BOOL disableCheckGlobalMeminfo;
@property (nonatomic) BOOL disableLowValuePoint;
@property (nonatomic) double memInfoRate;
@property (nonatomic) double launchTime;
@property (nonatomic) long long preloadTimes;
@property (nonatomic) long long runtimePreloadCreateCount;
@property (retain, nonatomic) BDPPreloadStateModel *runtimePreloadStateModel;
@property (nonatomic) long long webviewPreloadCreateCount;
@property (retain, nonatomic) BDPPreloadStateModel *webviewPreloadStateModel;
@property (retain, nonatomic) NSMutableSet *pdfRecord;
@property (retain, nonatomic) NSMutableDictionary *runtimePDFRecord;
@property (retain, nonatomic) NSMutableDictionary *webviewPDFRecord;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pdfRecordQueue;
@property (nonatomic) BOOL needRecordPreloadState;

+ (void)bootstrapLaunch;
+ (id)sharedInstance;

- (double)generateRandomNumber;
- (id)generatePreloadId;
- (void)startPreloadTimeLineWithPreloadId:(id)a0 entryType:(id)a1;
- (void)startPreloadTimeLineWithPreloadId:(id)a0 entryType:(id)a1 schema:(id)a2;
- (void)recordPkgDownLoadWithPreloadId:(id)a0;
- (void)recordPkgDownLoadEndWithPreloadId:(id)a0 pkgInfo:(id)a1 error:(id)a2;
- (void)clearAllPkgPreloadInfo;
- (void)setCurrentPreloadFailReason:(id)a0 type:(long long)a1;
- (void)recordBasePreloadFiredWithType:(long long)a0;
- (void)recordWebviewPreloadWithPreloadId:(id)a0;
- (void)syncRecordBasePreloadEndWithType:(long long)a0;
- (void)recordBasePreloadUsedWithType:(long long)a0;
- (void)recordPDFFailReason:(id)a0 withAppId:(id)a1 type:(long long)a2;
- (void)syncRecordPDFPreloadEndWithAppId:(id)a0 type:(long long)a1;
- (void)recordPDFPreloadUsedWithAppId:(id)a0 type:(long long)a1;
- (void)reporConcurrentCount:(long long)a0 queueSize:(long long)a1 debounceTime:(long long)a2 appID:(id)a3 preloadID:(id)a4;
- (void)addPoint:(id)a0 preloadId:(id)a1 type:(id)a2 params:(id)a3 commonParams:(id)a4;
- (void)finishPreloadTimeLineWithPreloadId:(id)a0;
- (void)recordRuntimePreloadWithPreloadId:(id)a0;
- (void)recordRuntimePreloadEndWithPreloadId:(id)a0 error:(id)a1;
- (void)reportPreloadedPluginRuntimeUsed:(id)a0 uniqueID:(id)a1 pluginId:(id)a2;
- (void)reportPreloadedRuntimeUsed:(id)a0 uniqueID:(id)a1;
- (void)recordPluginRuntimePreloadWithPreloadId:(id)a0 pluginId:(id)a1;
- (void)recordPluginRuntimePreloadEndWithPreloadId:(id)a0 pluginId:(id)a1 error:(id)a2;
- (void)checkAndReportPkgDownLoadUsedWithUniqueID:(id)a0 version:(id)a1;
- (void)reportPreloadedWebviewUsed:(id)a0 uniqueID:(id)a1;
- (id)getBasePreloadStatus:(id)a0 type:(long long)a1;
- (id)getPDFStatus:(id)a0 uniqueID:(id)a1 type:(long long)a2;
- (void)reportResourceUsed:(id)a0 withPreloadId:(id)a1 preloadTime:(double)a2 routeId:(id)a3 params:(id)a4;
- (void)recordWorkerPreloadEndWithPreloadId:(id)a0 error:(id)a1;
- (void)recordWorkerPreloadWithPreloadId:(id)a0;
- (void)reportPreloadedWorkerUsed:(id)a0 uniqueID:(id)a1;
- (void)configGlobalParams;
- (id)timeIntervalToTimeStamp:(double)a0;
- (void)configureTimeLineGroup:(id)a0;
- (id)getSchemaParamsFrom:(id)a0;
- (id)getMemoryCpuInfo;
- (void)addPoint:(id)a0 inGroup:(id)a1 type:(id)a2 time:(double)a3 params:(id)a4 commonParams:(id)a5;
- (void)executeBlkInTaskQueue:(id /* block */)a0;
- (id)addPluginId:(id)a0 into:(id)a1;
- (void)reportResourceUsed:(id)a0 withPreloadId:(id)a1 preloadTime:(double)a2 routeId:(id)a3;
- (void)clearPkgPreloadInfoWithAppId:(id)a0;
- (void)initPreloadStateModel:(id)a0;
- (id)getBasePreloadModelWithType:(long long)a0;
- (id)getPDFPreloadModelWithType:(long long)a0 appId:(id)a1;
- (void)recordWebviewPreloadEndWithPreloadId:(id)a0 error:(id)a1;
- (void)recordPDFStartWithAppId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
