@class NSString, NSArray, CAKAlbumAIMemoriesCachedSearchResult, CAKAIMemoriesInsightCacheManager, NSMutableSet, NSObject, CAKAlbumSearchFeatureConfig, NSNumber, CAKAlbumCollectionSectionModel;
@protocol OS_dispatch_queue;

@interface CAKAlbumAIMemoriesSearchViewModel : NSObject <CAKPhotoLibraryChangeObserver>

@property (nonatomic) double successLoadDataCostTime;
@property (retain, nonatomic) NSNumber *isFirstAuthorizeEnterNumberFlag;
@property (nonatomic) BOOL dataHasChanged;
@property (retain, nonatomic) CAKAlbumSearchFeatureConfig *searchFeatureConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long viewState;
@property (nonatomic) long long C1500Count;
@property (copy, nonatomic) NSArray *collectionList;
@property (retain, nonatomic) CAKAlbumCollectionSectionModel *collectionSection;
@property (copy, nonatomic) NSArray *insightSectionList;
@property (retain, nonatomic) CAKAIMemoriesInsightCacheManager *insightCacheManager;
@property (retain, nonatomic) NSMutableSet *hasReportDisplayedCollcetionSet;
@property (nonatomic) unsigned long long showSearchResultScene;
@property (copy, nonatomic) NSString *searchQuery;
@property (copy, nonatomic) NSString *queryType;
@property (retain, nonatomic) CAKAlbumAIMemoriesCachedSearchResult *cachedResult;
@property (copy, nonatomic) NSArray *lastGlobalSelectedAssetsBeforeAIMemoriesPreview;
@property (nonatomic) BOOL collectionCardFolded;
@property (nonatomic) BOOL isDismissResultVCFromClickBackBtn;
@property (nonatomic) double startAuthTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSearchResultShowing;
- (void)AIMemoriesSearchPermissionChanged:(id)a0;
- (void)dismissSearchResult;
- (id)initWithSearchFeatureConfig:(id)a0;
- (void)loadAIMemoriesCollectionAndInsightData;
- (long long)lastCollectionNumber;
- (void)updataLastCollectionNumber:(long long)a0;
- (long long)lastInsightSectionItemCntForSectionType:(id)a0;
- (void)updateLastInsightSectionItemCnt:(long long)a0 forSectionType:(id)a1;
- (void)reportCollectionShowed:(id)a0;
- (id)getCachedCollectionAndInsightData;
- (BOOL)hasTodaySuccessGetCollectionData;
- (BOOL)hasTodayTriggerPerDayGenerateCollection;
- (void)setHasTodayTriggerPerDayGenerateCollection;
- (void)setTodaySuccessGetCollectionData;
- (void)updateC1500FeatureWithCompletion:(id /* block */)a0;
- (id)lastSuccessGetCollectionDataDateKey;
- (id)lastSuccessGetCollectionDataKey;
- (id)lastTriggerPerDayGenerateCollectionDateKey;
- (id)lastTriggerPerDayGenerateCollectionKey;
- (id)lastCollectionNumberKey;
- (id)lastInsightSectionListNumberMap;
- (id)lastInsightSectionListNumberKey;
- (id)filteredInsightItemsForOriginalInsightItems:(id)a0;
- (void)p_loadInsightItemCoverImage:(id)a0;
- (void)checkC1500AssetStatus;
- (id)isFirstAuthorizeEnterKey;
- (void)prepareAIMemoriesProcess;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;
- (void)dealloc;

@end
