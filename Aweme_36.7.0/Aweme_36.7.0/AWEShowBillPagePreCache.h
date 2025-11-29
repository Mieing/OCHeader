@class NSMutableDictionary, NSString, NSHashTable, NSMutableArray;

@interface AWEShowBillPagePreCache : NSObject <AWEShowMonetizeBillPagePreCacheService>

@property (retain, nonatomic) NSMutableArray *subscribers;
@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSHashTable *plugins;
@property (retain, nonatomic) NSMutableDictionary *currentRequests;
@property (retain, nonatomic) NSMutableDictionary *failedRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preCacheBillPageDataWithModels:(id)a0 trackParams:(id)a1 requestParams:(id)a2;
- (double)currentPlayProgress;
- (void)setupCache;
- (void)handlePayEvent:(id)a0;
- (void)handleLoginEvent:(id)a0;
- (id)getCacheInfoWithModel:(id)a0 type:(id)a1;
- (id)getCacheWithModel:(id)a0 type:(id)a1;
- (id)createBuyPanelCacheKeyWithModel:(id)a0;
- (void)addFEEvent;
- (long long)shouldPreCachingBillPageData;
- (BOOL)shouldPreCachingBillPageDataInDetail;
- (BOOL)playletInnerFeedOldPaymentBuyPanelWithWithModel:(id)a0 enterFrom:(id)a1;
- (void)preCheckInvalidData;
- (id)cacheWithType:(id)a0;
- (id)createRequestWithModel:(id)a0 type:(id)a1 trackParams:(id)a2 requestParams:(id)a3 completion:(id /* block */)a4;
- (id)createVIPBuyPanelCacheKeyWithModel:(id)a0;
- (id)getCacheWithKey:(id)a0 type:(id)a1;
- (void)deleteCacheWithCacheType:(id)a0 cacheKey:(id)a1 productID:(id)a2;
- (id)createBuyPanelCacheKeyWithKeys:(id)a0 type:(id)a1;
- (void)cacheBuyPanelData:(id)a0 model:(id)a1;
- (void)cacheVIPBuyPanelData:(id)a0 model:(id)a1;
- (id)createBuyPanelRequestParamsWithModel:(id)a0 requestParams:(id)a1 enterFrom:(id)a2;
- (id)createVIPBuyPanelRequestParamsWithModel:(id)a0;
- (void)cachePanelData:(id)a0 model:(id)a1 type:(id)a2;
- (id)trackCommonParamsWithModel:(id)a0 extraParams:(id)a1;
- (id)createCacheKeyWithModel:(id)a0 customKey:(id)a1;
- (void)preCacheBillPageDataWithModels:(id)a0 trackParams:(id)a1;
- (void)deleteCacheWithModel:(id)a0 type:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)removePlugin:(id)a0;
- (void)addPlugin:(id)a0;

@end
