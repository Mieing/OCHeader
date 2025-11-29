@class NSNumber, NSString, AWEPOIUGCRateSelectivePOIBarParamsModel;

@interface AWEPOIUGCRateShopListDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) AWEPOIUGCRateSelectivePOIBarParamsModel *barParamsModel;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadFeedWithCompletion:(id /* block */)a0 isLoadMore:(BOOL)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
