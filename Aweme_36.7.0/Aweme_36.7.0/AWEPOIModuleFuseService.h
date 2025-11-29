@class NSString, AWEFusePOIDetailNGManager;

@interface AWEPOIModuleFuseService : HTSService <AWEPOIModuleFuseService>

@property (retain, nonatomic) AWEFusePOIDetailNGManager *pOIDetailNGManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getHalfScreenContainer;
- (void)showSubmitRatingPanelFromViewController:(id)a0 poiID:(id)a1 poiName:(id)a2 objectID:(id)a3 objectType:(long long)a4 couponID:(long long)a5 spuID:(id)a6 trackerData:(id)a7;
- (BOOL)isShowingPOIModalView;
- (BOOL)shouldPreventPauseVideoWhenGoodsDetailPopup;
- (void)goodsDetailPreload;
- (void)goodsDetailPreloadWithBizCode:(id)a0;
- (BOOL)enablePrefetchWithBizCode:(id)a0;
- (BOOL)hasPrefetchCacheWithBizCode:(id)a0 keyMap:(id)a1;
- (void)requestWithParams:(id)a0 bizCode:(id)a1 activityID:(id)a2 cacheFrom:(id)a3 completion:(id /* block */)a4;
- (void)stopAllPreRequestTask;
- (void)sendRoutePreRequestWithSchema:(id)a0 preGenId:(id)a1;
- (void)openPOIPreviewPageWithParams:(id)a0;
- (BOOL)storeInfoInSession:(id)a0 info:(id)a1;
- (id)prefetchManager;
- (id)generalWarmUpManager;
- (id)POIDetailNGManager;
- (id)requestHeaderParamsManager;
- (id)getBcmChainForFantaPureFeatureWithExtraInfo:(id)a0 localLifeBcmChainConfig:(id)a1;
- (id)getLocalLifeBcmGzipFlagWithExtraInfo:(id)a0 localLifeBcmChainConfig:(id)a1;
- (id)generatePOISessionWithLiveInfo:(id)a0 schemeParams:(id)a1 traceSessionId:(id)a2;
- (void)startPreviewWithOpenUrl:(id)a0 context:(id)a1;
- (id)convertAweContext:(id)a0;
- (void).cxx_destruct;
- (id)startSession;

@end
