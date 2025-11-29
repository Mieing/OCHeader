@class AWERelatedVideoTabDataSyncManager, NSMutableArray, NSString, NSDictionary, AWEAwemeModel, AWERVDetailPageContext, AWERelatedVideoDataManager;

@interface AWERelatedVideoDetailVideoRelatedVideoWaterFlowViewModel : AWEBaseListViewModel

@property (weak, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) AWERelatedVideoDataManager *dataManager;
@property (retain, nonatomic) AWERelatedVideoTabDataSyncManager *dataSyncManager;
@property (retain, nonatomic) NSMutableArray *relatedVideoModelArray;
@property (nonatomic) BOOL videoHaveResponse;
@property (nonatomic) long long commentNum;
@property (copy, nonatomic) NSString *relatedVideoRequestItemID;
@property (retain, nonatomic) NSMutableArray *relatedVideoDataSource;
@property (retain, nonatomic) NSMutableArray *currentDataSource;
@property (copy, nonatomic) NSString *preAwemeId;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *scene;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)handleResponseModel:(id)a0;
- (void)trackLongVideoShow:(id)a0;
- (void)fetchListDataWithCompletion:(id /* block */)a0;
- (void)refreshWithScene:(id)a0;
- (void)trackListRefreshWithRequestDuration:(double)a0 useLastCache:(BOOL)a1 responseModel:(id)a2 error:(id)a3;
- (void)setupWithRelatedPreloadVideos:(id)a0 scene:(id)a1;
- (void)refreshWithFirstRequestResponse:(id)a0 requestTime:(double)a1;
- (void)removeVisibleModel:(id)a0;
- (void)delayRefreshIfNeedsWithBlock:(id /* block */)a0;
- (void)trackRelatedVideoTabWithEvent:(id)a0 model:(id)a1 indexPath:(id)a2;
- (void)selectIndex:(long long)a0 word:(id)a1;
- (BOOL)isAtRelatedTab;
- (void)resetWithAwemeModel:(id)a0 params:(id)a1;
- (void)getSuggestWordsWithItemID:(id)a0 didGetSuggestWordsBlock:(id /* block */)a1;
- (void)handleResponseModel:(id)a0 isLoadMore:(BOOL)a1;
- (id)multiTabWords;
- (void)setRelatedVideoDataManager:(id)a0;
- (void)loadMoreListData:(id)a0 error:(id)a1;
- (BOOL)isAtSameAuthor;
- (void)quickLoadMoreAfterRefreshWith:(BOOL)a0 response:(id)a1;
- (void)preloadRelatedCoverImageWithResponse:(id)a0;
- (BOOL)containsSearchCardInModelsArray:(id)a0;
- (id)processRelatedVideoSearchQueryModelWithAwemeModels:(id)a0;
- (long long)selectedDataManagerIndex;
- (void).cxx_destruct;

@end
