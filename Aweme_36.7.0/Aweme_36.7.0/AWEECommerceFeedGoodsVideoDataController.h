@class NSArray, NSString, NSDictionary, AWEAwemeModel, NSMutableArray;
@protocol AWEECFeedListDelegate;

@interface AWEECommerceFeedGoodsVideoDataController : AWEListDataController <AWEECFeedGoodsVideoDataControllerProtocol, IESECCommentKOLEvaluationDataManagerProtocol>

@property (nonatomic) long long pageNum;
@property (copy, nonatomic) NSArray *pendingAwemeList;
@property (retain, nonatomic) NSMutableArray *evaluationModels;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) AWEAwemeModel *preLoadModel;
@property (copy, nonatomic) NSString *kolEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL waitingFirstItem;
@property (nonatomic) BOOL removeDataAfterRequestCallback;
@property (nonatomic) BOOL isMallPlayer;
@property (weak, nonatomic) id<AWEECFeedListDelegate> feedListDelegate;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithCompletion:(id /* block */)a0;
- (void)fetchECGoodsVideoListWithParameters:(id)a0 completion:(id /* block */)a1;
- (void)addElementsFromArray:(id)a0;
- (id)evaluationModelFromAweme:(id)a0;
- (id)evaluationDataSource;
- (void)loadMoreEvaluationWithCompletion:(id /* block */)a0;
- (void)forceUpdateEvaluationDataSource;
- (void)toggleDiggStatusAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasMore;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)resetDataSource;

@end
