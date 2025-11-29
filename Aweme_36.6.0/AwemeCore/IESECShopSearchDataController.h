@class IESECStoreFilterDiffableModel, NSString, IESECShopContext, IESECShopRecommendTitleObject, NSDictionary, NSMutableArray, IESECShopMultiRecommendGoodsDiffableModel, IESECShopMultiSearchGoodsDiffableModel;

@interface IESECShopSearchDataController : IESECListDataController

@property (nonatomic) long long searchCursor;
@property (retain, nonatomic) NSMutableArray *searchGoods;
@property (retain, nonatomic) NSString *filterProductIds;
@property (nonatomic) long long recommendCursor;
@property (retain, nonatomic) NSMutableArray *recommendGoods;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSString *searchWord;
@property (copy, nonatomic) NSString *searchID;
@property (retain, nonatomic) IESECShopContext *context;
@property (nonatomic) unsigned long long layoutType;
@property (retain, nonatomic) IESECStoreFilterDiffableModel *storeFilterDiffableModel;
@property (retain, nonatomic) IESECShopMultiSearchGoodsDiffableModel *searchGoodsDiffableModel;
@property (retain, nonatomic) IESECShopRecommendTitleObject *recommendTitleDiffableModel;
@property (retain, nonatomic) IESECShopRecommendTitleObject *recommendTitleNoSearchResultModel;
@property (retain, nonatomic) IESECShopMultiRecommendGoodsDiffableModel *recommendGoodsDiffableModel;
@property (nonatomic) BOOL searchFromSug;
@property (nonatomic) unsigned long long searchSource;

+ (void)fetchGoodsListWithAPIURL:(id)a0 Parameters:(id)a1 Completion:(id /* block */)a2;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)stateDiffableModel:(BOOL)a0;
- (void)requestNextPageForSearchWithCompletion:(id /* block */)a0;
- (id)getFilterSortBy;
- (void).cxx_destruct;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
