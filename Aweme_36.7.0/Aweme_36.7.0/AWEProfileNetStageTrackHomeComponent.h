@class NSString, NSMutableDictionary;

@interface AWEProfileNetStageTrackHomeComponent : AWEUserHomeBaseComponent <AWEUserHomeLoadCacheEventProtocol, AWEProfilePagePerfTrackComponentProtocol>

@property (nonatomic) BOOL cacheLoadComplete;
@property (retain, nonatomic) NSMutableDictionary *bannerLoadParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginLoadCache;
- (void)endLoadCacheWithSuccess:(BOOL)a0;
- (void)manualStartFMP;
- (void)trackBannerCoverLoadWith:(long long)a0;
- (id)customCacheDurationWithRawParams:(id)a0 extraDictionary:(id)a1;
- (void).cxx_destruct;
- (void)requestDidComplete;
- (void)viewDidLoad;
- (void)onInit;

@end
