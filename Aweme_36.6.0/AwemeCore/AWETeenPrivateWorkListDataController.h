@class NSMutableArray;

@interface AWETeenPrivateWorkListDataController : AWEListDataController

@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSMutableArray *justRemovedModelList;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)p_loadPrivateWorkListCompletion:(id /* block */)a0;
- (void)updateNewestPrivateWork;
- (void).cxx_destruct;
- (void)removeAll;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
