@class NSError, NSString, NSArray, AWESearchCorrectModel, AWESearchFrequencyManager, AWESearchVideoDeduplicationHelper, AWESearchHarmfulCategoryManager, AWERiskPreventModel, NSNumber;

@interface AWESearchPersonCachalotDataController : AWESearchVerticalDataController <AWESearchPersonCachalotRequestParamsDelegate>

@property (nonatomic) BOOL showError;
@property (nonatomic) BOOL disableEmptyStateJumpButton;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *backtrace;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (copy, nonatomic) NSString *correctName;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (copy, nonatomic) NSArray *filterSections;
@property (retain, nonatomic) AWESearchFrequencyManager *frequencyManager;
@property (retain, nonatomic) AWESearchVideoDeduplicationHelper *deduplicationHelper;
@property (retain, nonatomic) AWESearchHarmfulCategoryManager *harmfulCategoryManager;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *searchSource;
@property (copy, nonatomic) NSString *searchUserId;
@property (copy, nonatomic) NSString *gsType;
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
- (void)p_handleWaterfallStyle:(id)a0;
- (void)setupRequestParamsDelegate;
- (void)p_addPersonalHomePageTag:(id)a0;
- (id)personCachalotRequestCommonParams;
- (id)personCachalotRequestRefreshParams;
- (id)personCachalotRequestLoadMoreParams;
- (void).cxx_destruct;
- (id)init;

@end
