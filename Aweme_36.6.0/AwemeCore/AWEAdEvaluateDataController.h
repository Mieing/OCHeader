@class NSNumber, AWEAwemeModel;

@interface AWEAdEvaluateDataController : AWEListDataController

@property (nonatomic) long long currentPage;
@property (retain, nonatomic) NSNumber *componentID;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

+ (void)fetchFeedCommentListWithParameters:(id)a0 completion:(id /* block */)a1;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithCompletion:(id /* block */)a0;
- (id)handleModelDataWithList:(id)a0;
- (void)requestDiggCountUpdate:(id)a0 WithActionType:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
