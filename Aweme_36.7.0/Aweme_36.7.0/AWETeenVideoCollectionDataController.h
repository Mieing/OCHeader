@class NSMutableArray;

@interface AWETeenVideoCollectionDataController : AWEListDataController

@property (nonatomic) unsigned long long cursor;
@property (retain, nonatomic) NSMutableArray *justRemovedModelList;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)removeWithItemID:(id)a0;
- (BOOL)addAwemeWithItemID:(id)a0;
- (void)p_reportAwemeVideoNotTeen:(id)a0;
- (void)p_fetchWithPullType:(long long)a0 completion:(id /* block */)a1;
- (BOOL)p_isValidRequest;
- (id)p_requestParamsIsRefresh:(BOOL)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
