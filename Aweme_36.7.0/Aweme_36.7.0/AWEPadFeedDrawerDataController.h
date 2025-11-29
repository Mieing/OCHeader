@class NSNumber, AWEMVChannelPageContext, AWEMVChannelInflowRequestModel;

@interface AWEPadFeedDrawerDataController : AWEListDataController

@property (nonatomic) long long requestNums;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) AWEMVChannelInflowRequestModel *inflowRequestModel;
@property (weak, nonatomic) AWEMVChannelPageContext *context;

- (void)_requestAwemeItemsWithURLString:(id)a0 params:(id)a1 timeout:(double)a2 usePbForRecommendFeed:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)fetchAuthorListWithCompletion:(id /* block */)a0 fetchType:(unsigned long long)a1;
- (void)refreshAuthorListWithCompletion:(id /* block */)a0;
- (void)_requestAwemeItemWithParams:(id)a0 path:(id)a1 completion:(id /* block */)a2;
- (id)urlStringWithRequestParams:(id)a0 fetchType:(unsigned long long)a1;
- (void)_requestAwemeItemWithCount:(id)a0 minCursor:(id)a1 maxCursor:(id)a2 pullType:(long long)a3 extParams:(id)a4 path:(id)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;
- (void)reset;

@end
