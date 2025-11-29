@class NSNumber, NSString;

@interface AWEHotSearchCommentAISummaryFeedDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *hotspotID;
@property (retain, nonatomic) NSNumber *eventDiscussID;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL isFromDiscussionTab;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)p_loadDataWithPullType:(long long)a0 completion:(id /* block */)a1;
- (id)p_requestURLString;
- (id)p_requestParams;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)updateWithContext:(id)a0;

@end
