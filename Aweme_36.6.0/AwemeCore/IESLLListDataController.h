@class NSMutableArray;

@interface IESLLListDataController : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) NSMutableArray *filteredDataSource;
@property (nonatomic) BOOL loadmoreHasMore;
@property (nonatomic) BOOL isRequestOnAir;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)filterDuplicatedDatasourceWithArray:(id)a0 isEqual:(id /* block */)a1;
- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (id)p_filterDuplicatedDatasourceWithArray:(id)a0 isEqual:(id /* block */)a1 didGetDuplicatedArray:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
