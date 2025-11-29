@class NSString, NSDictionary, IESECGoodsDetailParameters, IESECGoodsRecommendDataControllerInputParams, NSMutableArray, NSNumber;
@protocol IESECHTTPRequestTask;

@interface IESECGoodsRecommendDataController : IESECListDataController {
    id<IESECHTTPRequestTask> _activatedTask;
}

@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSMutableArray *filterItemList;
@property (retain, nonatomic) NSDictionary *feedbackModelConfig;
@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) IESECGoodsRecommendDataControllerInputParams *inputParams;
@property (nonatomic) long long currentPage;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSMutableArray *requestFeedbackArray;
@property (copy, nonatomic) NSString *logID;
@property (retain, nonatomic) NSNumber *feedType;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *metaParams;
@property (nonatomic) unsigned long long sceneType;
@property (copy, nonatomic) NSString *filterStringForNextRequest;

+ (void)feedbackAdDisLikeWithRecommendItem:(id)a0;
+ (id)filterStringWithRecommendItem:(id)a0 sceneType:(unsigned long long)a1;
+ (id)requestRecommendListWithProductID:(id)a0 pageSize:(long long)a1 page:(long long)a2 cursor:(long long)a3 requestAdditions:(id)a4 completion:(id /* block */)a5;
+ (void)fetchFeedbackConfigWithCompletion:(id /* block */)a0;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithCompletion:(id /* block */)a0;
- (id)constructFeedbackString;
- (id)constructFilterList;
- (BOOL)shouldLimitPageSizeAccordingToFeedType;
- (void)saveRecommandItem:(id)a0 requestID:(id)a1;
- (void)cancelCurrentActivatedRequest;
- (void)monitorFavoriteFeedRateEndWithModel:(id)a0 error:(id)a1;
- (void)configFeedbackToRecommendList;
- (id)getInputParamsFromParameters:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
