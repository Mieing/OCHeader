@class NSMutableArray, NSMutableDictionary;

@interface AWELifeFeedsDataManager : NSObject

@property (retain, nonatomic) NSMutableArray *parseTaskPool;
@property (retain, nonatomic) NSMutableArray *mergeTaskPool;
@property (retain, nonatomic) NSMutableDictionary *prefetchDataTaskMap;
@property (retain, nonatomic) NSMutableDictionary *fetchPrefetchDataHandlerMap;
@property (retain, nonatomic) NSMutableArray *fetchDataTaskPool;

+ (void)fetchPrefetchDataWithStorageId:(id)a0 target:(id)a1 complete:(id /* block */)a2;
+ (void)prefetchDataWithStorageId:(id)a0 params:(id)a1 complete:(id /* block */)a2;
+ (long long)getDatalistFromOuterCard:(id)a0;
+ (id)sharedInstance;

- (id)removeNodes:(id)a0 pageViewModel:(id)a1;
- (void)fetchMainDataWithParams:(id)a0 complete:(id /* block */)a1;
- (void)fetchMoreWithParams:(id)a0 complete:(id /* block */)a1;
- (void)mergePageViewModel:(id)a0 newPageViewModel:(id)a1 complete:(id /* block */)a2;
- (void)fetchErrorPromptDataComplete:(id /* block */)a0;
- (id)addNodeWithNodeData:(id)a0 pageViewModel:(id)a1;
- (id)prefetchDataTaskMap;
- (id)fetchPrefetchDataHandlerMap;
- (void)callFetchPrefetchDataTaskHandlerWithStorageId:(id)a0 pageViewModel:(id)a1 error:(id)a2;
- (void)addFetchPrefetchDataHandler:(id)a0 storageId:(id)a1 complete:(id /* block */)a2;
- (void)fetchPrefetchDataWithStorageId:(id)a0 target:(id)a1 complete:(id /* block */)a2;
- (void)parseDataWithData:(id)a0 isCache:(BOOL)a1 complete:(id /* block */)a2;
- (void)parseDataWithData:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;

@end
