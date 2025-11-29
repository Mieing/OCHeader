@class NSPredicate, NSObject, CAKAlbumSearchOperation, NSDictionary, CAKSearchSuggestionResultDataSource, CAKAlbumSearchFeatureConfig, CAKAlbumAIMemoriesSearchViewModel, CAKAlbumSearchSuggestionFeatureConfig, CAKAIMemoriesSearchListViewModel, NSString, CAKAlbumSearchListViewModel, NSOperationQueue, NSArray, NSNumber, CAKAlbumSearchResult, CAKAlbumTracker;
@protocol OS_dispatch_queue;

@interface CAKAlbumSearchViewModel : NSObject <CAKPhotoLibraryChangeObserver>

@property (copy, nonatomic) NSString *searchPlaceholder;
@property (nonatomic) unsigned long long searchPlaceholderType;
@property (copy, nonatomic) NSArray *insightList;
@property (nonatomic) BOOL loadingInsight;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CAKAlbumSearchResult *searchResult;
@property (retain, nonatomic) NSOperationQueue *searchOperationQueue;
@property (weak) CAKAlbumSearchOperation *searchOperation;
@property (retain, nonatomic) NSOperationQueue *suggestionSearchOperationQueue;
@property (weak) CAKAlbumSearchOperation *suggessionSearchOperation;
@property (retain, nonatomic) CAKSearchSuggestionResultDataSource *suggestionSearchResultDataSource;
@property (nonatomic) BOOL isEnvSetup;
@property (nonatomic) BOOL hasInsertSuggestionSection;
@property (nonatomic) BOOL isShowSearchFromPermission;
@property (readonly, nonatomic) BOOL shouldShowSearchEntry;
@property (nonatomic) BOOL showSearch;
@property (nonatomic) BOOL showSearchResult;
@property (retain, nonatomic) CAKAlbumTracker *tracker;
@property (nonatomic) BOOL dateAscending;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSDictionary *searchCommandTrackInfo;
@property (retain, nonatomic) CAKAlbumSearchSuggestionFeatureConfig *suggestionFeatureConfig;
@property (nonatomic) BOOL showSuggestionSearchResult;
@property (nonatomic) BOOL shouldInsertSuggestionSectionAfterInsightListLoadFinish;
@property (retain, nonatomic) CAKAlbumSearchFeatureConfig *searchFeatureConfig;
@property (retain, nonatomic) CAKAlbumAIMemoriesSearchViewModel *AIMemoriesSearchViewModel;
@property (retain, nonatomic) CAKAIMemoriesSearchListViewModel *AIMemoriesSearchListViewModel;
@property (nonatomic) BOOL isAIMemoriesPreviewShowed;
@property (copy, nonatomic) NSNumber *enableDarkTheme;
@property (copy, nonatomic) NSString *searchResultQueryType;
@property (retain, nonatomic) CAKAlbumSearchListViewModel *searchListViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dark_containerBackgroundColor;
+ (id)dark_searchTextFieldBackgroundColor;

- (void)trackSearchPageAndSearchBarShowWithSearchWord:(id)a0;
- (void)setupEnvIfNeededWithMediaTypeArray:(id)a0;
- (long long)scannedCountThreshold;
- (void)searchSuggestionTag:(id)a0 completion:(id /* block */)a1;
- (void)searchWithText:(id)a0 completion:(id /* block */)a1;
- (void)insertSuggestionSectionInIndex:(long long)a0 completion:(id /* block */)a1;
- (void)searchWithInsightItem:(id)a0 completion:(id /* block */)a1;
- (void)loadInsightDataIfNeed;
- (BOOL)enablePreLoadInsightData;
- (void)loadInsightDataWithCompletion:(id /* block */)a0;
- (double)scannedCoverageThreshold;
- (id)suggestionSection;
- (id)peopleSection;
- (id)categorySection;
- (id)locationSection;
- (id)timeSection;
- (id)sectionWithTitle:(id)a0 itemData:(id)a1 type:(long long)a2;
- (void)searchWithSuggestionSectionItem:(id)a0 completion:(id /* block */)a1;
- (void)startSearchSuggestionSearchForMainContentSplit;
- (void)startSearchSuggestionSearchForWordList;
- (void)startSearchSuggestionInteractionStyleTagList;
- (id)defaultSearchPlaceholder;
- (void)triggerSearchAction;
- (BOOL)shouldStartSearchSuggestionSearch;
- (void)startSearchSuggestionSearch;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;
- (id)init;
- (void)cancelSearch;
- (void)dealloc;

@end
