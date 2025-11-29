@class NSNumber, AWEUserModel, AWEChallengeModel;

@interface AWEFavoriteChallengeDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) AWEChallengeModel *justRemovedModel;
@property (retain, nonatomic) AWEUserModel *user;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (BOOL)removeWithItemID:(id)a0;
- (BOOL)addAwemeWithItemID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
