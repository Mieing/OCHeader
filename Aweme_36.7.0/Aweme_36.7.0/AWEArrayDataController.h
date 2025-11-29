@class NSArray;

@interface AWEArrayDataController : AWEBaseDataController

@property (retain) NSArray *dataSource;
@property BOOL refreshHasMore;
@property BOOL loadmoreHasMore;
@property BOOL isRequestOnAir;
@property BOOL isFiltDuplicate;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)fetchForCacheWithCompletion:(id /* block */)a0;
- (void)addDatas:(id)a0;
- (void)insertData:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
