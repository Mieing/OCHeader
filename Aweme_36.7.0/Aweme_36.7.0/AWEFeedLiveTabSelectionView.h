@class CAGradientLayer, NSString, NSMutableArray, AWEFeedLiveTabSelectionCollectionView;

@interface AWEFeedLiveTabSelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>

@property (nonatomic) long long style;
@property (retain, nonatomic) AWEFeedLiveTabSelectionCollectionView *collectionView;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) NSMutableArray *cellModel;
@property (nonatomic) struct CGPoint { double x; double y; } initialContentOffset;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (copy, nonatomic) id /* block */ didAvatarViewShow;
@property (copy, nonatomic) id /* block */ didAvatarViewSlide;
@property (copy, nonatomic) id /* block */ didAvatarViewClicked;
@property (copy, nonatomic) id /* block */ didAvatarViewExposure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)changeSelectedTabItem:(id)a0;
- (void)refreshViewWithModel:(id)a0 selectedIndex:(unsigned long long)a1;
- (void)autoChangeTo:(id)a0 selectedIndex:(unsigned long long)a1;
- (void)updateMaskLayerWithScrollView:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)visibleItems;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)setupView;

@end
