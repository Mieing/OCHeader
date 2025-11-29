@class NSNumber, NSString, AWEDCFeedDataConfig;
@protocol AWEHttpTask;

@interface AWEDCFeedDefaultDataController : AWEListDataController <AFDPureModePageMutiModelSourceProtocol>

@property (retain, nonatomic) id<AWEHttpTask> currentRequestTask;
@property (nonatomic) long long requestNums;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *cursor;
@property (weak, nonatomic) AWEDCFeedDataConfig *dataConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)transferAwemeModelForLive:(id)a0 isFirstColdLaunch:(BOOL)a1;
- (id)pureModeMaxCursor;
- (BOOL)pureModeHasMore;
- (id)pureModeOriginModelList;
- (void)fetchDataWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void)resetDataController;
- (void)buildRequestParams:(id)a0;
- (id)urlStringWithRequestParams:(id)a0;
- (id)transferAwemeListIfNeededWithArray:(id)a0 isInitFetch:(BOOL)a1;
- (id)filterRepeatModel:(id)a0;
- (void)trackWithModel:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)requestUrl;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (BOOL)cancelCurrentRequest;

@end
