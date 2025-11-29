@class NSArray, NSString, AWEDCFeedPageContext;
@protocol AWEDCFeedDataControllerProtocol;

@interface AWEDCFeedListDataManager : NSObject <AWEDCFeedDataManagerProtocol>

@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (copy, nonatomic) NSArray *dataProcessors;
@property (retain, nonatomic) id<AWEDCFeedDataControllerProtocol> dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onWillBeginRequestDataWithRequestType:(unsigned long long)a0;
- (void)onDidEndCompletionWithRequestType:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onDidCancelRequestWithRequestType:(unsigned long long)a0;
- (void)onWillBeginProcessWithRequestType:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onDidEndProcessWithRequestType:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)fetchDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (void)refreshDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (void)refreshDataWithRequestParams:(id)a0 useUnconsumedVideos:(BOOL)a1 unconsumedVideos:(id)a2 args:(id)a3 completion:(id /* block */)a4;
- (void)loadMoreDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (void)cancelRequestTask;
- (id)filterDataArray:(id)a0 args:(id)a1;
- (id)classNameWithReferString;
- (id)chunkDataController;
- (void)processResponseDataWithRequestType:(unsigned long long)a0 response:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (BOOL)shouldRequestWithChunk;
- (void)p_fetchChunkDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (void)p_refreshChunkDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (void)p_loadMoreChunkDataWithRequestParams:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (id)filterModelArrayWithRequestType:(unsigned long long)a0 modelArray:(id)a1 args:(id)a2;
- (void)processModelArrayWithRequestType:(unsigned long long)a0 dataProcessors:(id)a1 modelArray:(id)a2 args:(id)a3 completion:(id /* block */)a4;
- (id)initWithPageContext:(id)a0 dataController:(id)a1 dataProcessors:(id)a2;
- (void).cxx_destruct;

@end
