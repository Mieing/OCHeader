@class HTSLiveFeedDataApi, AWELiveVSTabApi;

@interface AWELiveVSTabDataController : AWEListDataController

@property (retain, nonatomic) AWELiveVSTabApi *vsTabApi;
@property (retain, nonatomic) HTSLiveFeedDataApi *vsFeedApi;
@property (nonatomic) long long cursor;
@property (nonatomic) long long offset;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)fetchFeedParams;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
