@class IESECWinMultiSearchGoodsDiffableModel, NSString, IESECWinMultiRecommendGoodsDiffableModel, IESECRelationRecommendTitleObject, NSDictionary, NSMutableArray, IESECWinRouterData, IESECWinFilterDiffableModel;

@interface IESECStoreSearchDataController : IESECListDataController {
    BOOL _recommendUsingSearch;
}

@property (nonatomic) long long searchCursor;
@property (retain, nonatomic) NSMutableArray *searchGoods;
@property (retain, nonatomic) NSString *filterProductIds;
@property (nonatomic) long long recommendCursor;
@property (retain, nonatomic) NSMutableArray *recommendGoods;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (nonatomic) BOOL shouldAddRecommendItems;
@property (copy, nonatomic) NSString *searchWord;
@property (copy, nonatomic) NSString *searchID;
@property (retain, nonatomic) IESECWinRouterData *context;
@property (nonatomic) BOOL shouldRecommend;
@property (nonatomic) unsigned long long layoutType;
@property (retain, nonatomic) IESECWinFilterDiffableModel *storeFilterDiffableModel;
@property (retain, nonatomic) IESECWinMultiSearchGoodsDiffableModel *searchGoodsDiffableModel;
@property (retain, nonatomic) IESECRelationRecommendTitleObject *recommendTitleDiffableModel;
@property (retain, nonatomic) IESECWinMultiRecommendGoodsDiffableModel *recommendGoodsDiffableModel;
@property (nonatomic) BOOL searchFromSug;
@property (nonatomic) unsigned long long searchSource;

+ (void)fetchGoodsListWithSearchAPIURL:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
+ (void)fetchGoodsListWithAPIURL:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)stateDiffableModel:(BOOL)a0;
- (void)requestNextPageForSearchWithCompletion:(id /* block */)a0;
- (id)getFilterSortBy;
- (void)requestNextPageForRecommendWithCompletion:(id /* block */)a0;
- (id)searchSourceDescription;
- (id)getRequestParamsForSearchAPIWithPageSize:(long long)a0;
- (id)getOldResponseFromSearchModel:(id)a0;
- (id)winSearchAPI;
- (void).cxx_destruct;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
