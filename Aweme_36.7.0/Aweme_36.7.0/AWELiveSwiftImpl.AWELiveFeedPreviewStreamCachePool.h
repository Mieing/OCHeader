@interface AWELiveSwiftImpl.AWELiveFeedPreviewStreamCachePool : HTSService <AWELiveFeedPreviewStreamCachePoolService, IESLiveCheckInterceptor, IESLiveCachePoolService> {
    void /* unknown type, empty encoding */ cachePoolHandlerStack;
    void /* unknown type, empty encoding */ _feedModuleService;
    void /* unknown type, empty encoding */ _liveInnerService;
    void /* unknown type, empty encoding */ _recommendModuleService;
    void /* unknown type, empty encoding */ globalService;
    void /* unknown type, empty encoding */ baseService;
    void /* unknown type, empty encoding */ consumedItems;
    void /* unknown type, empty encoding */ pool;
    void /* unknown type, empty encoding */ genTime;
    void /* unknown type, empty encoding */ cachePoolQueue;
    void /* unknown type, empty encoding */ refreshFrequency;
    void /* unknown type, empty encoding */ poolRefreshDate;
    void /* unknown type, empty encoding */ refreshInterval;
    void /* unknown type, empty encoding */ requestNumber;
    void /* unknown type, empty encoding */ cachePoolEnable;
    void /* unknown type, empty encoding */ lastReturnCount;
    void /* unknown type, empty encoding */ closeCount;
    void /* unknown type, empty encoding */ isRefresh;
    void /* unknown type, empty encoding */ initializeDataEnable;
    void /* unknown type, empty encoding */ randomMax;
    void /* unknown type, empty encoding */ extremeFrequency;
    void /* unknown type, empty encoding */ poolLock;
}

- (void)InitializeCachePoolData;
- (void)getFeedPreviewStreamModelFromCachePoolWithCount:(long long)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)containerDataSourceChangeWithItems:(id)a0;
- (void)unReadLiveReuseWithItems:(id)a0;
- (void)trackCachePoolBusinessUseInfo:(id)a0;
- (void)getInnerFeedItemWithCount:(long long)a0 completion:(id /* block */)a1;
- (id)liveStatusCheckInfo;
- (void)liveStatusChange:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
