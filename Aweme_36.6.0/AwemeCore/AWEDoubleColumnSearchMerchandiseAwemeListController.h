@class NSArray, NSMutableArray;
@protocol AWEDoubleColumnSearchMerchandiseAwemeListControllerDataSource;

@interface AWEDoubleColumnSearchMerchandiseAwemeListController : AWEListDataController

@property (weak, nonatomic) id<AWEDoubleColumnSearchMerchandiseAwemeListControllerDataSource> manager;
@property (copy, nonatomic) NSArray *helperItems;
@property (retain, nonatomic) NSMutableArray *searchResults;
@property (nonatomic) long long section;
@property (nonatomic) long long initialIndex;

+ (id)awemeListWithMerchandiseModel:(id)a0;
+ (id)awemeWithMerchandiseModel:(id)a0;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithManager:(id)a0 searchResult:(id)a1 currentSection:(long long)a2;
- (id)helperItemsFromCurrentManager;
- (id)indexPathOfOffset:(long long)a0;
- (long long)indexOfAweme:(id)a0;
- (id)awemeWithIndexPath:(id)a0 offset:(long long)a1;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
