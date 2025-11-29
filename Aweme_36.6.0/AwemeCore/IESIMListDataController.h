@class NSMutableArray;

@interface IESIMListDataController : NSObject

@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) BOOL isRequestOnAir;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
