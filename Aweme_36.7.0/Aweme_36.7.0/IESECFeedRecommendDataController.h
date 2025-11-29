@class IESECFeedRecommendItemModel, NSString, NSArray, IESECGoodsDetailParameters, NSNumber, NSMutableArray;
@protocol IESECHTTPRequestTask;

@interface IESECFeedRecommendDataController : IESECListDataController {
    id<IESECHTTPRequestTask> _activatedTask;
    unsigned long long _cursor;
    NSMutableArray *_filterItemList;
}

@property (nonatomic) BOOL resourceCardRequestOnAir;
@property (nonatomic) BOOL resourceCardChangePromotionsRequestOnAir;
@property (nonatomic) BOOL resourceCardRequested;
@property (copy, nonatomic) NSString *sessionTime;
@property (nonatomic) long long mallCardShowInternalHours;
@property (copy, nonatomic) NSString *searchFliterIds;
@property (copy, nonatomic) NSString *queryFliterIds;
@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (nonatomic) long long currentPage;
@property (nonatomic) long long resourceCount;
@property (copy, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSMutableArray *requestFeedbackArray;
@property (copy, nonatomic) NSString *logID;
@property (retain, nonatomic) NSNumber *feedType;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *metaParams;
@property (copy, nonatomic) NSString *filterStringForNextRequest;
@property (copy, nonatomic) NSString *filterTagIDsForNextRequest;
@property (retain, nonatomic) IESECFeedRecommendItemModel *rankingItem;
@property (copy, nonatomic) NSArray *resourceItems;
@property (nonatomic) unsigned long long listStyle;

+ (id)filterStringWithRecommendItem:(id)a0;
+ (id)requestFeedRecommendListWithParams:(id)a0 forResourceCard:(BOOL)a1 completion:(id /* block */)a2;
+ (void)requestCompareDealsViewWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestFeedRecommendListForPreload:(id)a0 completion:(id /* block */)a1;
+ (void)requestFeedRecommendSearchWithParams:(id)a0 completion:(id /* block */)a1;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithCompletion:(id /* block */)a0;
- (id)constructFeedbackString;
- (id)filterItemList;
- (void)saveSearchCardFilterProductId:(id)a0;
- (id)constructFilterList;
- (BOOL)shouldLimitPageSizeAccordingToFeedType;
- (id)compareDealsParams;
- (void)updateFeedRecommendListWithModel:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (BOOL)checkoutShouldShowMallCard;
- (void)saveResourceCardItems:(id)a0;
- (void)saveRecommandItem:(id)a0 requestID:(id)a1;
- (id)validProductList:(id)a0;
- (id)compareDealsRequestParamsWithScene:(id)a0 products:(id)a1;
- (BOOL)validParams:(id)a0;
- (id)compareDealsCommonParams;
- (id)baseProductsParamsString:(id)a0;
- (void)cancelCurrentActivatedRequest;
- (void)insertRankingItem:(id)a0 atIndex:(long long)a1;
- (void)requestFeedResourceCardsWithCompletion:(id /* block */)a0;
- (void)requestSearchCardsWithProduct:(id)a0 completion:(id /* block */)a1;
- (void)requestFeedResourceCardsPromotionProductsWithCompletion:(id /* block */)a0;
- (void)requestCompareDealsWithScene:(id)a0 productList:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
