@interface AWEKnowledgeSwiftImpl.HangoutDataController : NSObject <AWEDCFeedDataControllerProtocol> {
    void /* unknown type, empty encoding */ _prefetchResult;
    void /* unknown type, empty encoding */ _pendingRealRequestingCompletion;
    void /* unknown type, empty encoding */ isRequesting;
    void /* unknown type, empty encoding */ requestTimes;
    void /* unknown type, empty encoding */ totalRequestTimes;
    void /* unknown type, empty encoding */ refreshTimes;
    void /* unknown type, empty encoding */ loadmoreTimes;
    void /* unknown type, empty encoding */ isFirstRealRequestSucceed;
    void /* unknown type, empty encoding */ clickModelsArray;
    void /* unknown type, empty encoding */ clickIdsArray;
    void /* unknown type, empty encoding */ enterFrom;
    void /* unknown type, empty encoding */ referString;
    void /* unknown type, empty encoding */ prefetchInitTimeStamp;
    void /* unknown type, empty encoding */ currentTask;
    void /* unknown type, empty encoding */ loadMoreBlock;
    void /* unknown type, empty encoding */ dcFeedListLoadMoreBlock;
}

- (void)fetchDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (void)refreshDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (void)refreshDataWithRequestParams:(id)a0 useUnconsumedVideos:(BOOL)a1 unconsumedVideos:(id)a2 args:(id)a3 completion:(id /* block */)a4;
- (void)loadMoreDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (void)cancelRequestTask;
- (void).cxx_destruct;
- (id)init;

@end
