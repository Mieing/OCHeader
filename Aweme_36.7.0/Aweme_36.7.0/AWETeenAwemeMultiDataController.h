@class NSArray;

@interface AWETeenAwemeMultiDataController : AWEListDataController

@property (copy, nonatomic) NSArray *itemIDList;
@property (copy, nonatomic) id /* block */ fetchAwemeListBlock;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)p_fetchAwemeListWithCompletion:(id /* block */)a0;
- (id)initWithAwemeList:(id)a0;
- (void)p_reportAwemeVideoNotTeen:(id)a0;
- (id)initWithItemIDList:(id)a0;
- (id)initWithItemIDStr:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
