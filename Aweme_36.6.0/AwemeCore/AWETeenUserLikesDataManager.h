@class NSString, NSArray, NSNumber, NSMutableArray;

@interface AWETeenUserLikesDataManager : AWEListDataController

@property (copy, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSNumber *minCursor;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSMutableArray *justRemovedModelList;
@property (nonatomic) long long invalidItemCount;
@property (nonatomic) BOOL isHidingInvalidItem;
@property (retain, nonatomic) NSString *invalidItemText;
@property (nonatomic) BOOL canClearInvalidItem;
@property (copy, nonatomic) NSArray *invalidItemIDArray;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long pageSize;
@property (nonatomic) BOOL filterDeleteItems;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long hotsoonFilterCount;
@property (nonatomic) long long hotsoonHasMore;

- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (id)initWithUserID:(id)a0;
- (id)paramsIsRefresh:(BOOL)a0;
- (void)loadMore:(id /* block */)a0;
- (BOOL)canLoadMore;
- (void)removeWithItemID:(id)a0;
- (id)constructDataSourceWithResponseModel:(id)a0 isRefresh:(BOOL)a1;
- (BOOL)addAwemeWithItemID:(id)a0;
- (void)p_reportAwemeVideoNotTeen:(id)a0;
- (void)requestClearInvalidItems:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)refresh:(id /* block */)a0;

@end
