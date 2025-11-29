@class NSObject, AWEListenFeedContext, NSNumber, AWEListDataController;
@protocol AWEListenFeedDataControllerProtocol, AWEListenFeedViewModelProtocol;

@interface AWEListenFeedViewModel : AWEBaseListViewModel

@property (retain, nonatomic) NSObject<AWEListenFeedDataControllerProtocol> *dataController;
@property (retain, nonatomic) AWEListDataController *externalDataController;
@property (nonatomic) long long initialIndex;
@property (nonatomic) long long dataSourceType;
@property (nonatomic) unsigned long long requestCount;
@property (weak, nonatomic) id<AWEListenFeedViewModelProtocol> delegate;
@property (retain, nonatomic) NSNumber *listenMode;
@property (retain, nonatomic) AWEListenFeedContext *context;
@property (nonatomic) BOOL isPreloadMore;
@property (nonatomic) BOOL isHeaderShow;
@property (nonatomic) BOOL hasMoreData;
@property (nonatomic) BOOL hasPreviousData;
@property (nonatomic) BOOL insertHeaderAnimation;

+ (Class)aAWEListenFeedAdapterClass;

- (void)fetchListData;
- (void)loadMoreListData;
- (id)sectionViewModel;
- (id)awemeModelWithIndex:(long long)a0;
- (long long)indexOfAwemeModel:(id)a0;
- (id)aAWEListenFeedAdapter;
- (long long)cellModelsCount;
- (BOOL)useExternalDataController;
- (void)syncWithSourceViewModel:(id)a0 requestCount:(id)a1 forceReplace:(BOOL)a2;
- (BOOL)isListReverse;
- (void)loadPreviousDataCompletion:(id /* block */)a0;
- (void)updateHeaderAndFootStatus;
- (id)cellViewModelWithIndex:(long long)a0;
- (long long)adjustInitialIndex:(long long)a0 model:(id)a1 models:(id)a2;
- (void)setupWithModel:(id)a0 playModel:(id)a1 externalDataController:(id)a2 dataController:(id)a3 initialIndex:(long long)a4;
- (void)loadListenLaterCacheCompletion:(id /* block */)a0;
- (void)loadListenFeedCacheCompletion:(id /* block */)a0;
- (void)loadMoreDataCompletion:(id /* block */)a0;
- (long long)convertCurrentPlaylistFromCurrentIndex:(long long)a0;
- (void)replaceCurrentListWithExternalDataController:(id)a0 currentAwemeModel:(id)a1;
- (void)preloadCellAfterIndex:(id)a0;
- (id)extendModelArrayWithIndex:(long long)a0;
- (id)filterAwemeModelsWithAwemeType:(id)a0;
- (id)createViewModelsWithAwemeModels:(id)a0;
- (void)trackRequestWithCursor:(id)a0 isPreload:(BOOL)a1 duration:(double)a2 responseModel:(id)a3 fetchType:(unsigned long long)a4 error:(id)a5;
- (void)p_updateHeaderStatus;
- (void)handleResponse:(id)a0 error:(id)a1 isLoadPrevious:(BOOL)a2;
- (id)p_generateResponse:(id)a0 error:(id)a1;
- (void)loadMorePodcastData;
- (id)filterAwemeModels:(id)a0;
- (void)preloadCellMixInfoAtIndexIfNeeded:(long long)a0;
- (void)loadMorePodcastDataWithCurrentListCount:(long long)a0 currentRequestNum:(long long)a1;
- (BOOL)enableFilterDataOpt;
- (void)setupSectionViewModelIfNeeded;
- (void)appendCacheData:(id)a0;
- (void).cxx_destruct;

@end
