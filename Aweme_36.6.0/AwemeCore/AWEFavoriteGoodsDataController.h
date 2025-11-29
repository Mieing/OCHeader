@class AWEFavoriteGoodsGuideTopBarModel, NSString, AWEFavoriteGoodsGuideBottomNotiModel, AWEFavoriteGoodsItem, NSNumber;

@interface AWEFavoriteGoodsDataController : AWEListDataController

@property (nonatomic) long long cursor;
@property (retain, nonatomic) AWEFavoriteGoodsItem *justRemovedModel;
@property (retain, nonatomic) NSNumber *score;
@property (retain, nonatomic) NSNumber *totalCount;
@property (copy, nonatomic) NSString *guestUserID;
@property (retain, nonatomic) AWEFavoriteGoodsGuideTopBarModel *topBar;
@property (retain, nonatomic) AWEFavoriteGoodsGuideBottomNotiModel *bottomNoti;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestRefresh:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)showTopBar:(id)a0;
- (BOOL)showBottomNoti:(id)a0;
- (BOOL)removeWithItemID:(id)a0;
- (void)removeWithGoodsItem:(id)a0 completion:(id /* block */)a1;
- (BOOL)addGoodsWithPromotionID:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
