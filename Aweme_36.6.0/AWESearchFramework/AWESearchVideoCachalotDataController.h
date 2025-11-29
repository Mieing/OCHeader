@class NSString, AWESearchGlobalDoodleConfigModel, AWESearchCorrectModel, NSArray, AWESearchFrequencyManager, NSDictionary, AWESearchHarmfulCategoryManager, AWERiskPreventModel, NSNumber;

@interface AWESearchVideoCachalotDataController : AWESearchVerticalDataController <AWESearchVideoCachalotRequestParamsDelegate>

@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSString *backtrace;
@property (nonatomic) long long refreshCount;
@property (nonatomic) long long loadmoreCount;
@property (nonatomic) long long hotSpotCount;
@property (nonatomic) long long dataProcessIndex;
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
@property (copy, nonatomic) NSDictionary *filterParams;
@property (copy, nonatomic) NSString *correctName;
@property (copy, nonatomic) NSArray *filterSections;
@property (nonatomic) BOOL isSwitchTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)fixRefreshingClick;
+ (BOOL)isVideoTabWaterfall;
+ (BOOL)addVideoCachalotDebugLog;
+ (BOOL)fixShareStatistics;

- (void)setContainerConfig:(id)a0;
- (id)getExpectedSizeInfo;
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (id)customCalculateFilteredDataSource:(id)a0;
- (void)refreshResponse:(id)a0;
- (void)loadMoreResponse:(id)a0;
- (id)customInnerVCModelsFromOuterDataModels:(id)a0;
- (id)customAwemeModelFromOuterDataModel:(id)a0;
- (void)fireRefreshNormalSearchTask;
- (BOOL)cachalot_refreshWithCompletion:(id /* block */)a0;
- (void)resetRankDataIndex;
- (void)setUprequestParamsDelegate;
- (id)filterDuplicatedDataSourceWithLoadMoreArr:(id)a0;
- (id)reCalculateFilteredDataSource:(id)a0;
- (void)addSearchAdDebugParams:(id)a0;
- (void)logSearchAdDebugInfo:(id)a0;
- (void)p_handleWaterfallStyle:(id)a0;
- (id)videoCachalotRequestCommonParams;
- (void)videoCardArrayForResponseModel:(id)a0 isLoadMore:(BOOL)a1;
- (void)preProcessAweme:(id)a0 isLoadMore:(BOOL)a1;
- (id)fetchCurrentSearchVideoModels;
- (id)awemeForModel:(id)a0;
- (id)videoCachalotRequestRefreshParams;
- (id)videoCachalotRequestLoadMoreParams;
- (void).cxx_destruct;
- (id)init;
- (id)videoDelegate;

@end
