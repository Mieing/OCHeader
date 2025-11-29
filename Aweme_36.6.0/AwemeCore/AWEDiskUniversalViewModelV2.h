@class AWEPerfResourceManager;

@interface AWEDiskUniversalViewModelV2 : AWEDiskCleanViewModel

@property (retain, nonatomic) AWEPerfResourceManager *resourceManager;

- (void)constructAllDatas;
- (id)initWithDiskOverallCalculateProgress:(id /* block */)a0 overallCalculateCompletion:(id /* block */)a1 businessCalculateCompletion:(id /* block */)a2;
- (void)initDetailData;
- (void)prepareCacheData;
- (void)cleanResourceWithCleanType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)cleanResourceWithCleanType:(unsigned long long)a0 checkCancelForProgress:(id /* block */)a1 completion:(id /* block */)a2;
- (id)constructCleanModelWithTitle:(id)a0 detail:(id)a1 desc:(id)a2 type:(unsigned long long)a3 haveCache:(BOOL)a4;
- (void)initHeaderData;
- (void)prepareOfflineVideoData;
- (void)cleanCacheWithCancelForCleanSize:(id /* block */)a0;
- (void)trackCleanOfflineVideo;
- (void).cxx_destruct;
- (id)deviceName;
- (void)dealloc;
- (id)appShortName;
- (id)appDisplayName;

@end
