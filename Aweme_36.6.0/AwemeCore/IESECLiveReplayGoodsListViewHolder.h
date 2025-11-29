@class IESECLiveReplayGoodsListContext, UICollectionView;

@interface IESECLiveReplayGoodsListViewHolder : UIView

@property (weak, nonatomic) IESECLiveReplayGoodsListContext *context;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ loadMoreBlock;

- (void)endRefreshingWithNoMoreData;
- (void)configRefreshFooter;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)endRefreshing;
- (void)setupUI;

@end
