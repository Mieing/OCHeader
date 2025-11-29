@interface IESLiveAssetDownloadMonitorUtil : NSObject

+ (void)monitorFetchAssetStatus:(long long)a0 requiredIds:(id)a1 metas:(id)a2 traceId:(id)a3 monitorImpl:(id)a4;
+ (void)monitorAlgorithmDownloadWithId:(id)a0 duration:(id)a1 error:(id)a2 traceId:(id)a3 monitorImpl:(id)a4;
+ (void)monitorSingleAssetDownloadWithId:(id)a0 duration:(id)a1 localPath:(id)a2 error:(id)a3 traceId:(id)a4 monitorImpl:(id)a5;
+ (id)assetFetchStepWithStatus:(long long)a0;
+ (id)currentResourceAndAlgorithmStatus:(id)a0;

@end
