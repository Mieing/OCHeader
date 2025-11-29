@class AWEPerformanceDiskCleanExtremelyManager, NSString;

@interface AWEDiskExtremelyViewModel : AWEDiskCleanViewModel <ACCDraftMessage, AWEDiskExtremelyProtocol>

@property (retain, nonatomic) AWEPerformanceDiskCleanExtremelyManager *cleanManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double cacheSize;
@property (nonatomic) double offlineVideoSize;
@property (copy, nonatomic) NSString *enterFrom;

- (void)externalCleanResourceWithCleanType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)constructAllDatas;
- (id)initWithDiskOverallCalculateProgress:(id /* block */)a0 overallCalculateCompletion:(id /* block */)a1 businessCalculateCompletion:(id /* block */)a2;
- (void)initDetailData;
- (void)prepareCacheData;
- (void)cleanResourceWithCleanType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)cleanResourceWithCleanType:(unsigned long long)a0 checkCancelForProgress:(id /* block */)a1 completion:(id /* block */)a2;
- (id)constructCleanModelWithTitle:(id)a0 detail:(id)a1 desc:(id)a2 type:(unsigned long long)a3 haveCache:(BOOL)a4;
- (id)initWithDiskOverallIgnoreALog:(BOOL)a0 calculateProgress:(id /* block */)a1 overallCalculateCompletion:(id /* block */)a2 businessCalculateCompletion:(id /* block */)a3;
- (void)addGeckoWhiteList;
- (void)initCustomCacheWithIgnoreALog:(BOOL)a0;
- (void)initHeaderData;
- (void)prepareOfflineVideoData;
- (id)geckoWhiteList;
- (void)cleanCacheWithCancelForCleanSize:(id /* block */)a0;
- (void)trackCleanOfflineVideo;
- (void)externalCleanResourceWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)deviceName;
- (id)appShortName;
- (id)appDisplayName;

@end
