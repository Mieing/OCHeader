@class NSString, NSArray, NSDictionary, NSNumber;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchAIGCCommonDetailDataController : AWESearchVerticalDataController <AWESearchAIGCCommonDetailRequestParamsDelegate>

@property (retain, nonatomic) NSNumber *offset;
@property (nonatomic) long long dataProcessIndex;
@property (copy, nonatomic) NSString *backtrace;
@property (nonatomic) BOOL isDoubleColumnLeft;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> customerReviewsCardViewModel;
@property (copy, nonatomic) NSArray *customerReviewsListNodes;
@property (copy, nonatomic) NSString *initialSearchSource;
@property (copy, nonatomic) NSDictionary *clientEngineExtra;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *mainBotSearchID;
@property (copy, nonatomic) NSString *clientServerExtra;
@property (copy, nonatomic) NSString *extraLogData;
@property (copy, nonatomic) NSString *hitScene;
@property (retain, nonatomic) NSNumber *recommendSubjectID;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) unsigned long long selectedTab;
@property (copy, nonatomic) id /* block */ didReceiveResponseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContainerConfig:(id)a0;
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (void)refreshResponse:(id)a0;
- (void)loadMoreResponse:(id)a0;
- (id)customInnerVCModelsFromOuterDataModels:(id)a0;
- (id)customAwemeModelFromOuterDataModel:(id)a0;
- (id)p_getValidResponse:(id)a0;
- (void)setUpRequestParamsDelegate;
- (void)resetRankDataIndex;
- (void)generateLeafModelsAndCardArrayForResponse:(id)a0 isFromSteam:(BOOL)a1;
- (void)handleCustomerReviewsListNodeForLoadMoreLeafModels:(id)a0;
- (void)generateCardArrayForResponse:(id)a0;
- (void)updateSelectedTabHasMoreForResponse:(id)a0;
- (id)generalCachalotRequestCommonParams;
- (void)preGenerateLeafModelsForResponse:(id)a0 isFromSteam:(BOOL)a1;
- (void)handleCustomerReviewsListNodeForRefreshResponse:(id)a0 rootModel:(id)a1;
- (id)generalCachalotRequestRefreshParams;
- (id)generalCachalotRequestLoadMoreParams;
- (id)generalDelegate;
- (id)fetchCustomerReviewsCardViewModel;
- (id)fetchCustomerReviewsListNodes;
- (void).cxx_destruct;
- (id)init;

@end
