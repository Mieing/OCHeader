@class NSDictionary, NSString, AWESearchAISummaryEntryConfigModel;

@interface AWESearchGroupBuyDataController : AWESearchLifeServiceBaseDataController

@property (nonatomic) BOOL firstTimeSearch;
@property (nonatomic) BOOL shouldReadClientHistoryNeedStoreKey;
@property (nonatomic) BOOL notFirstRequest;
@property (nonatomic) BOOL shouldClearCitySelectionFilterParamsAfterGenerateParams;
@property (copy, nonatomic) NSDictionary *listFilterParams;
@property (copy, nonatomic) NSDictionary *citySelectionFilterParams;
@property (nonatomic) BOOL shouldForceDisablePredict;
@property (copy, nonatomic) NSString *strTargetPOIID;
@property (nonatomic) BOOL reserveDeliveryFilter;
@property (nonatomic) BOOL isPartShowStatus;
@property (copy, nonatomic) NSString *strCityCode;
@property (copy, nonatomic) AWESearchAISummaryEntryConfigModel *aiSummaryEntryConfig;

+ (id)identifierForPreRequestWithRootTag:(id)a0;
+ (id)createRequestWithParams:(id)a0;
+ (BOOL)enablePreRequestWithInitialParams:(id)a0;
+ (unsigned long long)newPreRequestType:(id)a0;
+ (BOOL)enableNewPreRequestWithInitialParams:(id)a0;
+ (BOOL)enableUseNewPreRequestTagWithSearchSource:(id)a0;
+ (BOOL)enableVerticalFirstPreRequestFromNewWithSearchSource:(id)a0;
+ (BOOL)enableVerticalRepeatPreRequestFromNewWithSearchSource:(id)a0;
+ (BOOL)enableVerticalPreRequestFromNewWithSearchSource:(id)a0;
+ (id)verticalPreRequestManager;

- (BOOL)enableNewPreRequestWithInitialParams:(id)a0 context:(id)a1;
- (unsigned long long)newPreRequestType:(id)a0 context:(id)a1;
- (id)refreshNewPreRequestParams:(id)a0 context:(id)a1;
- (id)verticalPreRequestTagNew;
- (BOOL)enablePreRequestWithInitialParams:(id)a0 context:(id)a1;
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (void)refreshResponse:(id)a0;
- (id)customeStateMachine;
- (id)preRequestAllowDiffList;
- (id)generateRootTagString;
- (BOOL)cachalot_refreshWithCompletion:(id /* block */)a0;
- (id)fetchPreRequestStateMachine;
- (BOOL)enableVerticalTabBarViewPressPrequest;
- (id)currentVerticalKeyword;
- (BOOL)isPreRequestEnable;
- (void)p_generateActualCardArrayForResponseModel:(id)a0;
- (BOOL)enableSearchResultPagePressPrefetch;
- (BOOL)enableSearchResultPageRepeatPressPrefetch;
- (void)updateShouldReadClientHistoryNeedStore:(BOOL)a0;
- (BOOL)getShouldReadClientHistoryNeedStoreKey;
- (void).cxx_destruct;
- (id)init;

@end
