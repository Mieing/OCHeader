@class NSMutableDictionary, NSMapTable, IESECWinMultiGoodsDiffableModel, NSDictionary, IESECWinGoodsObjectDiffableModel, NSMutableArray, IESECWinStateDiffableModel, IESECWinRouterData, NSString, IESECRelationRecommendTitleObject, IESECWinFilterDiffableModel, NSMutableSet, IESECTracker, IESECWinCartsInfoModel, NSNumber, NSUUID;

@interface IESECWinGoodsDataController : IESECListDataController {
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
@property (retain, nonatomic) IESECWinRouterData *routerParams;
@property (retain, nonatomic) IESECTracker *tracker;
@property (nonatomic) long long currentPage;
@property (copy, nonatomic) NSString *materialId;
@property (copy, nonatomic) NSString *searchWord;
@property (copy, nonatomic) NSString *paramsFromFE;
@property (copy, nonatomic) NSDictionary *passThroughAPIFromFE;
@property (copy, nonatomic) NSString *nextPageParams;
@property (nonatomic) BOOL hasMoreRecommendFeedData;
@property (retain, nonatomic) IESECWinFilterDiffableModel *storeFilterDiffableModel;
@property (retain, nonatomic) IESECWinMultiGoodsDiffableModel *goodsDiffableModel;
@property (retain, nonatomic) IESECWinStateDiffableModel *stateDiffableModel;
@property (retain, nonatomic) IESECWinStateDiffableModel *extraStateDiffableModel;
@property (retain, nonatomic) IESECWinCartsInfoModel *cartsModel;
@property (nonatomic) unsigned long long layoutType;
@property (retain, nonatomic) IESECWinGoodsObjectDiffableModel *lynxProductModel;
@property (nonatomic) BOOL clickedFilter;
@property (retain, nonatomic) IESECRelationRecommendTitleObject *recommendTitleDiffableModel;
@property (copy, nonatomic) NSString *materialTitle;
@property (nonatomic) long long querySource;

+ (id)fetchGoodsListWithAPIPath:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithQuerySource:(long long)a0 completion:(id /* block */)a1;
- (void)resetNextPageParams;
- (id)currentTabProductIDs;
- (id)preprocessLogExtra:(id)a0;
- (id)nextPageParamsForQuerySource:(long long)a0;
- (void)setNextPageParams:(id)a0 forQuerySource:(long long)a1;
- (void)configWithGoodsListResponse:(id)a0;
- (void)requestGoodsInfo:(id)a0 withCompletion:(id /* block */)a1;
- (void)cancelLatestProductListTask;
- (void)addGoodsList:(id)a0 sortTypes:(id)a1 pickTypes:(id)a2 selectButtons:(id)a3 hasMore:(BOOL)a4 cursur:(long long)a5;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
