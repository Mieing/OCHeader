@class BDPDrawAdModel, BDPDrawAdDataManger, NSMapTable, NSString, BDPUniqueID, NSMutableArray;

@interface BDPDrawAdvertisementImpl : NSObject <BDPVideoPreloadStateDelegate, BDPVideoPlayStatusDelegate, BDPWebviewPageScrollDelegate, BDMannorAdComponentDelegate, BDPPluginAppDrawAdImplProtocol>

@property (retain, nonatomic) BDPDrawAdDataManger *adDataManager;
@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) BDPDrawAdModel *drawAdModel;
@property (retain, nonatomic) NSMutableArray *blkArr;
@property (retain, nonatomic) NSMapTable *drawAdViewMap;
@property (nonatomic) long long currentLoadStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)handleOrientationChanged:(id)a0;
- (void)insertDrawAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateDrawAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeDrawAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)preloadDrawAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)bdp_videoPreloadStateChange:(long long)a0 info:(id)a1;
- (void)videoPlayFinish;
- (void)webviewPageDidScroll:(id)a0;
- (void)p_trackDrawAdShowEndWithType:(id)a0 errCode:(long long)a1 errMsg:(id)a2 requestCacheStatus:(long long)a3 preloadCacheStatus:(long long)a4 componentId:(id)a5 adUnitId:(id)a6 uniqueId:(id)a7;
- (double)p_getValidScale:(double)a0;
- (struct CGSize { double x0; double x1; })getDrawAdViewSizeWithUniqueId:(id)a0 isFullScreen:(BOOL)a1 scale:(double)a2;
- (void)p_trackDrawAdPreloadResultWithType:(id)a0 errCode:(long long)a1 errMsg:(id)a2 requestCacheStatus:(long long)a3 preloadCacheStatus:(long long)a4;
- (void)p_preloadVideoWithAdModel:(id)a0 appId:(id)a1 completion:(id /* block */)a2;
- (id)p_generateCacheKeyWithAppId:(id)a0 src:(id)a1;
- (void)p_callbackBlkWithError:(id)a0;
- (id)p_getCacheType;
- (void)handleNotification:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
