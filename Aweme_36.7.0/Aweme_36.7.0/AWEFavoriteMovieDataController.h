@class NSMutableArray, AWEFavoriteCollectionModel, NSNumber, AWEUserModel;

@interface AWEFavoriteMovieDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) AWEFavoriteCollectionModel *justRemovedModel;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL onLongVideoInnerFeed;
@property (retain, nonatomic) NSMutableArray *awemeModelList;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (BOOL)removeWithItemID:(id)a0;
- (void)fetchDataWithCompletion:(id /* block */)a0 isLoadmore:(BOOL)a1;
- (BOOL)addAwemeWithItemID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
