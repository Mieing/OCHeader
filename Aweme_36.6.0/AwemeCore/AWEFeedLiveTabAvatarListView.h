@class FeedItem, CAGradientLayer, UICollectionView, NSString, NSMutableArray;

@interface AWEFeedLiveTabAvatarListView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSMutableArray *cellModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) FeedItem *historyItem;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (copy, nonatomic) id /* block */ didAvatarViewShow;
@property (copy, nonatomic) id /* block */ didAvatarViewSlide;
@property (copy, nonatomic) id /* block */ didAvatarViewClicked;
@property (copy, nonatomic) id /* block */ didHistoryViewClicked;
@property (copy, nonatomic) id /* block */ didHistoryViewShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshViewWithModel:(id)a0;
- (void)showMaskLayer:(BOOL)a0;
- (id)visibleCellsOfItems;
- (BOOL)enableOptimizeAvatarList;
- (void)visibleCellsPlayAnimation;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)setupView;

@end
