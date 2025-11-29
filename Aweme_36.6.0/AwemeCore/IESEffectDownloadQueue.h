@class NSMutableDictionary, IESEffectConfig, IESManifestManager, NSMapTable;

@interface IESEffectDownloadQueue : NSObject

@property (weak, nonatomic) IESEffectConfig *config;
@property (weak, nonatomic) IESManifestManager *manifestManager;
@property (retain, nonatomic) NSMutableDictionary *downloadingTasks;
@property (retain, nonatomic) NSMutableDictionary *taskGroupMap;
@property (retain, nonatomic) NSMapTable *downloadTaskMap;
@property (retain, nonatomic) NSMutableDictionary *remoteAssetDownloadTaskMap;

- (void)internalDownloadAssetList:(id)a0 downloadQueuePriority:(long long)a1 downloadQualityOfService:(long long)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)downloadEffectModel:(id)a0 downloadQueuePriority:(long long)a1 downloadQualityOfService:(long long)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)scheduleDownloadEffectModel:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)mergeDownloadTaskIfNeedWithTaskKey:(id)a0 originDownload:(BOOL)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)initWithConfig:(id)a0 manifestManager:(id)a1;
- (void)downloadEffectModel:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)downloadAlgorithmModel:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)insertFrontDownloadEffectModel:(id)a0 downloadQueuePriority:(long long)a1 downloadQualityOfService:(long long)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)pauseDownloadWithEffectModel:(id)a0;
- (void)cancelDownloadWithEffectModel:(id)a0;
- (void)insertFrontDownloadEffectModel:(id)a0 cancelDownloading:(BOOL)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)downloadRemoteAssetList:(id)a0 downloadQueuePriority:(long long)a1 downloadQualityOfService:(long long)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)downloadRemoteAssetList:(id)a0 cancelExistedDownload:(BOOL)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
