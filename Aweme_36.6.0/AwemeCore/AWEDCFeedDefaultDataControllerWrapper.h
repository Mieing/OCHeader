@class NSString, AWEListDataController;

@interface AWEDCFeedDefaultDataControllerWrapper : NSObject <AWEDCFeedDataChunkControllerProtocol, AWEDCFeedDataControllerProtocol>

@property (retain, nonatomic) AWEListDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (void)refreshDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (void)refreshDataWithRequestParams:(id)a0 useUnconsumedVideos:(BOOL)a1 unconsumedVideos:(id)a2 args:(id)a3 completion:(id /* block */)a4;
- (void)loadMoreDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (void)cancelRequestTask;
- (id)chunkDataController;
- (void)fetchChunkDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2 chunkCompletion:(id /* block */)a3;
- (void)loadMoreChunkDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2 chunkCompletion:(id /* block */)a3;
- (void)refreshChunkDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2 chunkCompletion:(id /* block */)a3;
- (void).cxx_destruct;

@end
