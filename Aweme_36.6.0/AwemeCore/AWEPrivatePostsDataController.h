@class NSNumber, AWEAwemeModel;

@interface AWEPrivatePostsDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) AWEAwemeModel *justRemovedModel;
@property (nonatomic) long long pageSize;
@property (nonatomic) BOOL backupRequest;
@property (nonatomic) BOOL shouldAggregateSharedPosts;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (BOOL)removeWithItemID:(id)a0;
- (void)insertAwemeModel:(id)a0 atIndex:(unsigned long long)a1;
- (void)monitorPrivateAwemeRequest:(id)a0 error:(id)a1;
- (long long)removeAggregatedSharedPosts;
- (long long)existAggregatedSharePosts;
- (BOOL)addAwemeWithItemID:(id)a0;
- (void)clearJustRemovedModel;
- (BOOL)isAggregatedSharedPostsEntry:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
