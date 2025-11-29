@class NSString, AWEPageContext, AFDPlayRemoteTogetherRoomMeta, NSNumber, NSMutableArray;

@interface AWEListDataController : NSObject <NSCopying>

@property (copy, nonatomic) NSString *playRemoteContentString;
@property (copy, nonatomic) NSString *coplayUserType;
@property (copy, nonatomic) NSString *coplayBelongUserType;
@property (copy, nonatomic) NSString *playRemoteCurrentItemID;
@property (copy, nonatomic) NSString *playRemoteTargetFeedID;
@property (retain, nonatomic) NSNumber *playRemoteFeedType;
@property (retain, nonatomic) AFDPlayRemoteTogetherRoomMeta *currentRoomMeta;
@property (retain, nonatomic) NSNumber *maxRequestCursor;
@property (retain, nonatomic) NSNumber *minRequestCursor;
@property (retain, nonatomic) NSNumber *initialMinRequestCursor;
@property (nonatomic) BOOL disableLoadMore;
@property (retain, nonatomic) AWEPageContext *relatedContext;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) NSMutableArray *filteredDataSource;
@property (nonatomic) BOOL refreshHasMore;
@property (nonatomic) BOOL loadmoreHasMore;
@property (nonatomic) BOOL refreshHasPrevious;
@property (nonatomic) BOOL loadPreviousHasPrevious;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) unsigned long long feedColumnType;
@property (nonatomic) BOOL isCleanRefresh;
@property (nonatomic) BOOL isRefreshing;
@property (copy, nonatomic) NSString *listDataRequestID;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)filterDuplicatedDatasourceWithArray:(id)a0 isEqual:(id /* block */)a1;
- (void)calculateFilteredDataSource;
- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (long long)dataSourceIndexFromFilteredIndex:(long long)a0;
- (long long)filteredDataSourceIndexFromIndex:(long long)a0;
- (void)replaceVideosWithExtraParams:(id)a0 completion:(id /* block */)a1;
- (void)replaceVideosWithCompletion:(id /* block */)a0 replaceVideosType:(long long)a1;
- (void)fetchForCacheWithCompletion:(id /* block */)a0;
- (id)filterDuplicatedDatasourceWithArray:(id)a0 isEqual:(id /* block */)a1 didGetDuplicatedArray:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (BOOL)cancelCurrentRequest;

@end
