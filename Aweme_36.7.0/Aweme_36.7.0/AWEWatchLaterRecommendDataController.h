@class NSArray;

@interface AWEWatchLaterRecommendDataController : AWEListDataController

@property (nonatomic) long long recommendDataType;
@property (copy, nonatomic) NSArray *watchLaterDataSource;

- (id)requestParam;
- (id)urlStringWithRequestParams:(id)a0;
- (void)loadMoreWithMVChannelCompletion:(id /* block */)a0;
- (void)loadMoreWithRecommendCompletion:(id /* block */)a0;
- (id)filterWatchLaterDataWithArray:(id)a0;
- (void)loadMoreWithWatchLaterArray:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)requestURL;

@end
