@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface BDPAppLoadServiceTracker : NSObject

@property (retain, nonatomic) NSCache *preloadResultCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordReportQueue;

+ (id)sharedTracker;

- (void)reportMpVersionInfoWithReader:(id)a0 model:(id)a1;
- (void)reportPreloadResultWithInfos:(id)a0 result:(id)a1 isCancel:(BOOL)a2 error:(id)a3;
- (id)trackInfoWithPreloadInfo:(id)a0;
- (void)reportPreloadInfoSourceTracker:(id)a0 model:(id)a1;
- (void)updateCommonParamsWithMeta:(id)a0 isForeGroundTask:(BOOL)a1;
- (void)reportBatchMetaResultWithError:(id)a0 batchType:(id)a1 bdpType:(long long)a2;
- (void)reportPreloadStartWithInfos:(id)a0;
- (void)addPreloadRecordWithPreloadInfos:(id)a0;
- (id)resultTypeWithInfo:(id)a0 result:(id)a1 isCancel:(BOOL)a2 error:(id)a3;
- (void)reportPreloadRecord:(id)a0 isOpen:(BOOL)a1 timestamp:(double)a2;
- (id)preloadResultWithAppId:(id)a0;
- (void)launchReportPreloadRecordWithAppID:(id)a0 schema:(id)a1;
- (void)reportPreloadRecordForHostLaunch;
- (void).cxx_destruct;
- (id)init;

@end
