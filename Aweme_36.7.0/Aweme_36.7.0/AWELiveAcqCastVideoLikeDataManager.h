@class NSArray, NSString, AWEAwemeModel, NSNumber;

@interface AWELiveAcqCastVideoLikeDataManager : AWEListDataController

@property (copy, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSNumber *minCursor;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) AWEAwemeModel *justRemovedModel;
@property (nonatomic) long long invalidItemCount;
@property (nonatomic) BOOL isHidingInvalidItem;
@property (copy, nonatomic) NSArray *invalidItemIDArray;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long pageSize;
@property (nonatomic) long long hotsoonFilterCount;
@property (nonatomic) long long hotsoonHasMore;
@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL richAwemeEnabled;

- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (id)initWithUserID:(id)a0;
- (id)paramsIsRefresh:(BOOL)a0;
- (void)loadMore:(id /* block */)a0;
- (BOOL)canLoadMore;
- (void)p_filterRichAwemeIfNeed:(id)a0;
- (id)constructDataSourceWithResponseModel:(id)a0 isRefresh:(BOOL)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)refresh:(id /* block */)a0;

@end
