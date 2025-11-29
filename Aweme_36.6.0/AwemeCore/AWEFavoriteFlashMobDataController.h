@class NSArray;

@interface AWEFavoriteFlashMobDataController : AWEListDataController

@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSArray *dataArray;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (BOOL)isSameCollectedWithAModel:(id)a0 BModel:(id)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
