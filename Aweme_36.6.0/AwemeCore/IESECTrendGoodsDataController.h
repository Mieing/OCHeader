@class NSString, NSMutableArray, NSNumber;

@interface IESECTrendGoodsDataController : IESECListDataController

@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) long long cursor;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *penetrateData;
@property (retain, nonatomic) NSMutableArray *requestFeedbackArray;
@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (nonatomic) BOOL isFilterTrendSetCard;

+ (void)getTrendGoodsWithAwemeID:(id)a0 cursor:(long long)a1 count:(long long)a2 penetrateData:(id)a3 feedback:(id)a4 filters:(id)a5 completion:(id /* block */)a6;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithCompletion:(id /* block */)a0;
- (void)addFeedBackParams:(id)a0 index:(long long)a1;
- (void)firstLoadWithCompletionHandler:(id /* block */)a0;
- (id)constructFeedbackString;
- (void)saveRecommandItem:(id)a0 requestID:(id)a1;
- (id)initWithAwemeID:(id)a0 requestCount:(long long)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
