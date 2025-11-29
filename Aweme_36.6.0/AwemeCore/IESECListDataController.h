@class NSMutableArray;

@interface IESECListDataController : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL loadmoreHasMore;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
