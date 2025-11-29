@class NSString, NSMutableSet, NSDate;
@protocol AWESearchPOIFilterManagerDelegate;

@interface AWESearchPOIFilterManager : AWESearchFilterBaseManager

@property (retain, nonatomic) NSMutableSet *quickFilterItemDataIDs;
@property (retain, nonatomic) NSMutableSet *userManualSelectComponentsDataIDs;
@property (copy, nonatomic) NSString *strCalendarModelDataID;
@property (copy, nonatomic) NSString *addressLocationID;
@property (copy, nonatomic) NSString *userAddressID;
@property (copy, nonatomic) NSString *addressBizName;
@property (copy, nonatomic) NSString *startHintText;
@property (nonatomic) BOOL isMorningRoom;
@property (copy, nonatomic) NSString *endHintText;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *startDateString;
@property (copy, nonatomic) NSString *endDateString;
@property (copy, nonatomic) NSString *startDateDispalyText;
@property (copy, nonatomic) NSString *endDateDispalyText;
@property (nonatomic) BOOL shouldDisplayDate;
@property (copy, nonatomic) NSString *calendarPostDataString;
@property (nonatomic) double startHintWidth;
@property (nonatomic) double endHintWidth;
@property (nonatomic) double startDateWidth;
@property (nonatomic) double endDateWidth;
@property (nonatomic) long long searchScene;
@property (nonatomic) BOOL hasInnerBannerSelectComponent;
@property (weak, nonatomic) id<AWESearchPOIFilterManagerDelegate> delegate;

+ (id)filterManagerWithManager:(id)a0;
+ (unsigned long long)maxTreeWidthForModel:(id)a0;
+ (void)updateCurrentPOIFilterManager:(id)a0 forKey:(id)a1;
+ (id)getCurrentPOIFilterManagerForKey:(id)a0;
+ (void)buildFilterManagerMapIfNeeded;
+ (id)getStandardFormatter;
+ (id)getDisplayFormatter;

- (void)resetWithQueryModel:(id)a0;
- (BOOL)selectStateForModel:(id)a0;
- (void)didUnselectComponentWithDataID:(id)a0;
- (id)sortParamsWithIsFromSelectBoard:(BOOL)a0 needParent:(BOOL)a1;
- (id)createFilterSelectTreeNodeWithDataID:(id)a0;
- (BOOL)calendarDateChangedWithStartString:(id)a0 andEndString:(id)a1;
- (BOOL)updateCalendarWithStartString:(id)a0 andEndString:(id)a1 isMorningRoom:(BOOL)a2;
- (id)generateSortParamsWithModel:(id)a0;
- (id)generateSortParamsWithModelDataID:(id)a0;
- (void)clearQuickFilterStateWithQueryModel:(id)a0 controllerInfo:(id)a1;
- (void)getRecursiveSelectChildModelsWithModel:(id)a0 completion:(id /* block */)a1;
- (void)userDidManualSelectTrailComponent:(id)a0;
- (void)userDidManualUnselectTrailComponent:(id)a0;
- (id)getAddressModel;
- (id)getCalendarModel;
- (void)configDefaultAddressInfo;
- (void)configDefaultCalendarInfo;
- (id)standardFormatter;
- (id)displayFormatter;
- (void)didReplaceFilterComponentModelFromQueryModelWithValue:(id)a0 oldValue:(id)a1;
- (void)recursiveCollectSelectedChildModelsWithModel:(id)a0 selectedModelsCollection:(id)a1 selectedModelDataIdsCollection:(id)a2;
- (BOOL)p_isCouponBannerModel:(id)a0;
- (void)reloadWithQueryModel:(id)a0;
- (void)configAllBusinessDefaultInfo;
- (void)didAddFilterComponentModelFromQueryModelWithValue:(id)a0;
- (void).cxx_destruct;

@end
