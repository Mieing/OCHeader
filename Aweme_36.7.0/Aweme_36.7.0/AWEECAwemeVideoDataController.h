@class NSArray;

@interface AWEECAwemeVideoDataController : AWEListDataController

@property (copy, nonatomic) NSArray *awemeInfos;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)awemeModelWithIndex:(unsigned long long)a0;
- (long long)indexOfAwemeModel:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
