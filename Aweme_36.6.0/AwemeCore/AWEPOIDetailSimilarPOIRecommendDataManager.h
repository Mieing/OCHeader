@class NSArray, NSString;

@interface AWEPOIDetailSimilarPOIRecommendDataManager : AWEListDataController

@property (copy, nonatomic) NSArray *recommendData;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *poiID;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
