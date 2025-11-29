@class NSArray, AWEDoubleColumnSearchMerchandiseModel, NSString, NSMutableArray;
@protocol AWEDoubleColumnSearchMerchandiseFilterManagerDelegate;

@interface AWEDoubleColumnSearchMerchandiseFilterManager : AWESearchFilterBaseManager

@property (copy, nonatomic) NSArray *forceAppendFiltersSelectStatusArray;
@property (retain, nonatomic) NSMutableArray *orderedSelectedFilters;
@property (nonatomic) BOOL isFromECommerce;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (weak, nonatomic) id<AWEDoubleColumnSearchMerchandiseFilterManagerDelegate> delegate;
@property (copy, nonatomic) NSString *searchType;
@property (copy, nonatomic) NSString *preSearchID;
@property (copy, nonatomic) NSString *filterOriginSearchID;
@property (copy, nonatomic) NSString *enterFromSecond;

+ (BOOL)animationTransitionEnabledWithStrategy:(id)a0;

- (id)initWithEnterFrom:(id)a0;
- (id)getItemModelWithDataID:(id)a0;
- (BOOL)selectItemWithModel:(id)a0;
- (void)selectItemWithModels:(id)a0;
- (void)addOrderedSelectedFilterWithComponent:(id)a0;
- (void)refreshResultWithIsFromSelectBoard:(BOOL)a0 trackParams:(id)a1;
- (id)getFilterModelDataID:(id)a0;
- (BOOL)removeItemWithModel:(id)a0;
- (id)trackEventDict;
- (id)createAdditionalFiltersSelectStatusWithComponentModel:(id)a0 businessInfoDic:(id)a1;
- (id)sortParamsWithIsFromSelectBoard:(BOOL)a0;
- (id)getBusinessInfoModelWithDataID:(id)a0;
- (id)getCommonTrackerParamsWithModel:(id)a0;
- (id)getSortComponentTrackerParamsWithModel:(id)a0 eventName:(id)a1;
- (id)getFilterComponentTrackerParamsWithModel:(id)a0 eventName:(id)a1;
- (id)getTabComponentTrackerParamsWithModel:(id)a0 eventName:(id)a1;
- (BOOL)isOptionWordTracker:(id)a0;
- (id)getStatusWithModel:(id)a0;
- (id)makeFilterOptionTotalList;
- (void)trackTrendingWordsWithEvent:(id)a0 wordsSource:(id)a1 model:(id)a2 index:(long long)a3;
- (BOOL)isChooseTracker:(id)a0;
- (id)makeFilterOptionInfoWithModel:(id)a0 isParent:(BOOL)a1;
- (void)resetWithModel:(id)a0;
- (BOOL)isNoButtonComponent:(id)a0;
- (void)updateComponentModel:(id)a0 select:(BOOL)a1;
- (void)hideSelectBoard;
- (void)updateForceAppendFilterQueryModel:(id)a0;
- (id)sortParamsWithFiltersSelectStatusAndIsFromSelectBoard:(BOOL)a0;
- (id)componentModelSelectedFilterItemToFrontWithComponents:(id)a0;
- (void)filterOptionTrackerWithEventName:(id)a0 filterComponentModel:(id)a1 filterWordComponentModel:(id)a2 extraParams:(id)a3;
- (id)getTrackParamsForSearchWithModel:(id)a0;
- (void)trackTrendingShowWithWordsSource:(id)a0 componentModel:(id)a1;
- (void)trackTrendingWordsShowWithSource:(id)a0 componentModel:(id)a1 index:(long long)a2;
- (void)trackTrendingWordsClickWithSource:(id)a0 componentModel:(id)a1 index:(long long)a2 isSelect:(BOOL)a3;
- (BOOL)isShowTracker:(id)a0;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;
- (void)refreshResult;

@end
