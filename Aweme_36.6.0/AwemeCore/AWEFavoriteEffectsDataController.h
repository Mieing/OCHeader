@class AWEUserModel, AWENewFaceStickerModel;

@interface AWEFavoriteEffectsDataController : AWEListDataController <AWEFavoriteEffectsDataControllerProtocol>

@property (nonatomic) long long minCursor;
@property (nonatomic) long long maxCursor;
@property (retain, nonatomic) AWENewFaceStickerModel *justRemovedModel;
@property (retain, nonatomic) AWEUserModel *user;

+ (id)paramForEffectChannel;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (BOOL)removeWithItemID:(id)a0;
- (BOOL)addAwemeWithItemID:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0 refreshType:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
