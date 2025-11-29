@class NSMutableDictionary, MMFinderLiveResDownloadManager;

@interface MMLiveRewardGiftNewCustomizationMagicEngineResLogic : NSObject

@property (retain, nonatomic) MMFinderLiveResDownloadManager *downloadMgr;
@property (retain, nonatomic) NSMutableDictionary *loadTaskDict;
@property (copy, nonatomic) id /* block */ loadStateChangeCallback;

- (void)loadGiftResForURL:(id)a0 productId:(id)a1 fileMD5:(id)a2 enforceIntegrityCheck:(BOOL)a3 callback:(id /* block */)a4;
- (void)startLoad:(id)a0;
- (void)startDownload:(id)a0 plugin:(id)a1;
- (void)onTask:(id)a0 downLoadCompleted:(BOOL)a1 resUrl:(id)a2 downLoadUrlHash:(BOOL)a3 plugin:(id)a4;
- (void)onTask:(id)a0 loadSuccessWithPath:(id)a1 updateLoadCompletion:(id /* block */)a2;
- (void)addLoadTask:(id)a0;
- (void)endLoadTask:(id)a0 withResult:(unsigned long long)a1 path:(id)a2;
- (void)updateMagicResourcesIfNeededWithZipPath:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkUpdateResultNeedRecordTag:(long long)a0;
- (BOOL)checkUpdateResultNeedReDownLoadSrc:(long long)a0;
- (long long)getUpdateMagicResourcesSuccessTagFromData:(id)a0;
- (id)getDataWithUpdateMagicResourcesSuccessTag:(long long)a0;
- (void).cxx_destruct;

@end
