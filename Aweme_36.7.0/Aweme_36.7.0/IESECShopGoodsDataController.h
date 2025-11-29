@class NSUUID, IESECShopRecommendFeedDiffableModel, IESECShopContext, IESECShopRecommendTitleObject, NSDictionary, IESECShopMultiGoodsDiffableModel, NSMapTable, NSMutableDictionary, IESECShopFilterDiffableModel, NSMutableArray, IESECShopRecommendMallObject, NSString, IESECStoreFilterDiffableModel, IESECShopCartsInfoModel, IESECTracker, IESECShopProductsPromotionalFilterState, NSNumber, IESECShopGoodsObjectDiffableModel, NSMutableSet, IESECShopStateDiffableModel;

@interface IESECShopGoodsDataController : IESECListDataController {
    NSUUID *_cancelledTaskID;
    NSUUID *_currentTaskID;
    NSMapTable *_actiavtedTaskMap;
    NSMutableSet *_activatedTaskIDs;
    NSMutableArray *_recommendFeedData;
    NSMutableDictionary *_nextPageParamsMap;
    long long _skuIdx;
}

@property (retain, nonatomic) NSNumber *totalCount;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) IESECShopContext *shopContext;
@property (retain, nonatomic) IESECTracker *tracker;
@property (nonatomic) long long currentPage;
@property (copy, nonatomic) NSString *materialId;
@property (copy, nonatomic) NSString *searchWord;
@property (copy, nonatomic) NSString *paramsFromFE;
@property (copy, nonatomic) NSDictionary *passThroughAPIFromFE;
@property (copy, nonatomic) NSString *nextPageParams;
@property (nonatomic) BOOL hasMoreRecommendFeedData;
@property (retain, nonatomic) IESECShopFilterDiffableModel *shopFilterDiffableModel;
@property (retain, nonatomic) IESECStoreFilterDiffableModel *storeFilterDiffableModel;
@property (retain, nonatomic) IESECShopMultiGoodsDiffableModel *goodsDiffableModel;
@property (retain, nonatomic) IESECShopStateDiffableModel *stateDiffableModel;
@property (retain, nonatomic) IESECShopStateDiffableModel *extraStateDiffableModel;
@property (retain, nonatomic) IESECShopRecommendFeedDiffableModel *recommendFeedDiffableModel;
@property (retain, nonatomic) IESECShopCartsInfoModel *cartsModel;
@property (nonatomic) unsigned long long layoutType;
@property (retain, nonatomic) IESECShopGoodsObjectDiffableModel *lynxProductModel;
@property (retain, nonatomic) IESECShopRecommendFeedDiffableModel *recommendMixCardsDiffableModel;
@property (retain, nonatomic) IESECShopProductsPromotionalFilterState *promotionalFilterState;
@property (nonatomic) BOOL clickedFilter;
@property (retain, nonatomic) IESECShopRecommendTitleObject *recommendTitleDiffableModel;
@property (retain, nonatomic) IESECShopRecommendMallObject *recommendMallDiffableModel;
@property (copy, nonatomic) NSString *materialTitle;
@property (nonatomic) long long querySource;

+ (id)fetchGoodsListWithAPIPath:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestClassficationRecommendWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithQuerySource:(long long)a0 completion:(id /* block */)a1;
- (void)resetNextPageParams;
- (id)currentTabProductIDs;
- (id)preprocessLogExtra:(id)a0;
- (id)nextPageParamsForQuerySource:(long long)a0;
- (void)setNextPageParams:(id)a0 forQuerySource:(long long)a1;
- (void)configWithGoodsListResponse:(id)a0;
- (void)addGoodsList:(id)a0 sortTypes:(id)a1 pickTypes:(id)a2 selectButtons:(id)a3 bizExtra:(id)a4 hasMore:(BOOL)a5 cursur:(long long)a6;
- (void)resetRecommendFeedData;
- (void)requestRecommendMallWithCompletion:(id /* block */)a0;
- (void)requestCartsNumberWithCompletion:(id /* block */)a0;
- (void)requestGoodsListHeaderViewBackgroundImageWithCompletion:(id /* block */)a0;
- (void)requestGoodsInfo:(id)a0 withCompletion:(id /* block */)a1;
- (void)configWithTabModel:(id)a0;
- (void)cancelLatestProductListTask;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
