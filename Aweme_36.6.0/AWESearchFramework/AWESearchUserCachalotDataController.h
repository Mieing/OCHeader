@class NSString, AWESearchGlobalDoodleConfigModel, AWESearchCorrectModel, AWEDiscoverySearchFeedbackModel, AWESearchFrequencyManager, NSDictionary, AWESearchHarmfulCategoryManager, AWERiskPreventModel, NSArray, NSMutableArray, NSNumber;

@interface AWESearchUserCachalotDataController : AWESearchVerticalDataController <AWESearchUserCachalotRequestParamsDelegate>

@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSString *backtrace;
@property (nonatomic) long long refreshCount;
@property (nonatomic) long long loadmoreCount;
@property (nonatomic) BOOL fromHotSearch;
@property (copy, nonatomic) NSString *initialSearchSource;
@property (copy, nonatomic) NSDictionary *searchRequestLogQueries;
@property (copy, nonatomic) NSDictionary *searchExtraParams;
@property (copy, nonatomic) NSString *previousSearchID;
@property (copy, nonatomic) NSString *previousTab;
@property (nonatomic) BOOL shouldHideCorrection;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (retain, nonatomic) AWESearchHarmfulCategoryManager *harmfulCategoryManager;
@property (retain, nonatomic) AWESearchFrequencyManager *frequencyManager;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (retain, nonatomic) AWEDiscoverySearchFeedbackModel *feedbackModel;
@property (copy, nonatomic) NSDictionary *filterParams;
@property (copy, nonatomic) NSString *correctName;
@property (copy, nonatomic) NSArray *filterSections;
@property (nonatomic) BOOL isSwitchTab;
@property (nonatomic) BOOL showEgg;
@property (copy, nonatomic) NSString *searchSource;
@property (retain, nonatomic) NSMutableArray *userArray;
@property (nonatomic) long long newCount;
@property (nonatomic) BOOL isFromNearby;
@property (readonly, copy, nonatomic) NSString *riskWarningText;
@property (readonly, copy, nonatomic) NSString *plainText;
@property (readonly, copy, nonatomic) NSString *highlightText;
@property (readonly, copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *gid;
@property (copy, nonatomic) NSString *preGeneralSearchID;
@property (copy, nonatomic) NSString *initialGeneralSearchID;
@property (copy, nonatomic) NSDictionary *extraRequestParams;
@property (copy, nonatomic) id /* block */ beforeBuildRequestBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)fixRefreshingClick;
+ (BOOL)fixShareStatistics;

- (void)setContainerConfig:(id)a0;
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (void)refreshResponse:(id)a0;
- (void)loadMoreResponse:(id)a0;
- (BOOL)cachalot_refreshWithCompletion:(id /* block */)a0;
- (void)addSearchAdDebugParams:(id)a0;
- (void)logSearchAdDebugInfo:(id)a0;
- (void)setupRequestParamsDelegate;
- (id)userCachalotRequestCommonParams;
- (id)userCachalotRequestRefreshParams;
- (id)userCachalotRequestLoadMoreParams;
- (void).cxx_destruct;
- (id)init;

@end
