@class NSString, NSDictionary, AWETrackerContext;

@interface AWEEcomSearchViewModel : NSObject

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromMethod;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *gid;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *nonFullConfig;
@property (copy, nonatomic) NSDictionary *slideConfig;
@property (copy, nonatomic) NSDictionary *bgConfig;
@property (copy, nonatomic) NSString *searchStyle;
@property (copy, nonatomic) NSString *searchConfig;
@property (copy, nonatomic) NSString *clickTime;
@property (copy, nonatomic) NSString *searchChannel;
@property (copy, nonatomic) NSString *ecomSceneId;
@property (copy, nonatomic) NSString *preGeneralSearchId;
@property (nonatomic) BOOL forbidPanGesture;
@property (copy, nonatomic) NSDictionary *contentParams;
@property (retain, nonatomic) AWETrackerContext *trackerContext;
@property (readonly, nonatomic) BOOL isFromLiveRoom;
@property (nonatomic) BOOL hasEcomAISearchBarViewShown;
@property (nonatomic) BOOL isAISearchOn;
@property (copy, nonatomic) NSString *percentPageTitle;
@property (nonatomic) BOOL isSearchbarHidden;
@property (nonatomic) BOOL enableShowColorSearchBarBorder;
@property (nonatomic) BOOL middlePageShowColorSearchBarBorder;

+ (id)filterTrackerParams:(id)a0;
+ (BOOL)isFromLiveRoomAccordingTo:(id)a0;
+ (double)searchBarViewHeight:(id)a0;
+ (id)ecomSearchHistoryKey:(id)a0;

- (BOOL)hideSearchDefaultBackground;
- (id)stringValueForSchemaKey:(id)a0;
- (unsigned long long)percentPageTypeWithTitle;
- (id)advantagePointLogExtra;
- (void)getSchemaInfo;
- (void)generalTrackerContext;
- (id)stringValueForSchemaKeys:(id)a0;
- (void)getSevenPageParams;
- (id)dictionaryValueForSchemaKey:(id)a0;
- (id)makeFirstSearchParams;
- (id)afterFeedParamsJson;
- (BOOL)boolValueForSchemaKey:(id)a0;
- (long long)integerValueForSchemaKey:(id)a0;
- (BOOL)pinnedUIThemeStyle;
- (BOOL)enableSearchBarUseNewDesignUI2;
- (BOOL)hideSlideViewForPercentPage;
- (BOOL)isPersentPage;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;
- (id)debugDescription;
- (id)keyword;

@end
