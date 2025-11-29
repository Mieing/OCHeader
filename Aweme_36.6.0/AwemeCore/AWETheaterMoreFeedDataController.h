@class AWETheaterMoreFeedRequestModel;

@interface AWETheaterMoreFeedDataController : AWEBaseDataController

@property (retain, nonatomic) AWETheaterMoreFeedRequestModel *requestModel;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)fetchWithCompletion:(id /* block */)a0 fetchType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
