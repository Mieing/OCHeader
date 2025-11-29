@class NSString, NSArray, AWESearchCorrectModel, AWESearchKeyWordModel, AWESearchGlobalDoodleConfigModel, NSDictionary, AWESearchFrequencyManager, AWERiskPreventModel, UIViewController, AWESearchHarmfulCategoryManager, NSNumber;
@protocol AWEHttpTask;

@interface AWESearchVideoListDataViewController : AWEListDataController

@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSString *backtrace;
@property (nonatomic) long long refreshCount;
@property (nonatomic) long long loadmoreCount;
@property (weak, nonatomic) id<AWEHttpTask> task;
@property (retain, nonatomic) id<AWEHttpTask> requestTask;
@property (nonatomic) long long hotSpotCount;
@property (retain, nonatomic) AWESearchKeyWordModel *keyWord;
@property (copy, nonatomic) NSString *gsKeyword;
@property (copy, nonatomic) NSString *correctName;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL fromHotSearch;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (nonatomic) BOOL shouldHideCorrection;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (copy, nonatomic) NSArray *guideSearchWordList;
@property (nonatomic) BOOL isSwitchTab;
@property (copy, nonatomic) NSString *previousSearchID;
@property (copy, nonatomic) NSString *previousTab;
@property (copy, nonatomic) NSString *hideWords;
@property (copy, nonatomic) NSString *currentLogId;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (copy, nonatomic) NSDictionary *searchExtraParams;
@property (nonatomic) BOOL isFilterSearch;
@property (copy, nonatomic) NSDictionary *filterParams;
@property (copy, nonatomic) NSDictionary *searchRequestLogQueries;
@property (weak, nonatomic) UIViewController *refViewController;
@property (nonatomic) BOOL hitLimit;
@property (nonatomic) BOOL shouldLoginLimit;
@property (retain, nonatomic) AWESearchFrequencyManager *frequencyManager;
@property (retain, nonatomic) AWESearchHarmfulCategoryManager *harmfulCategoryManager;
@property (nonatomic) BOOL isSearchSourceGS;
@property (copy, nonatomic) NSString *initialSearchSource;
@property (copy, nonatomic) id /* block */ beforeBuildRequestBlock;
@property (copy, nonatomic) id /* block */ willLoadmoreBlock;
@property (copy, nonatomic) id /* block */ didReceiveLoadmoreResponseBlock;
@property (copy, nonatomic) id /* block */ didEndLoadmoreBlock;

+ (BOOL)addVideoNormalDebugLog;
+ (void)videoSearchRequestWithParams:(id)a0 responseBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
+ (BOOL)fixNoResultShowSearchPv;
+ (BOOL)addVideoNormalRequestParams;
+ (BOOL)fixVideoExitSearch;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)getExpectedSizeInfo;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void)p_handleRefreshServerTimeCost:(id)a0;
- (void)addSearchAdDebugParams:(id)a0;
- (void)logSearchAdDebugInfo:(id)a0;
- (void)registerSupportSearchSourceIfNeededRefresh;
- (void)preProcessAweme:(id)a0 pullType:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
