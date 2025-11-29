@class AWENearbySkylightFavoriteEmptyView, NSString, UIImageView, UICollectionView, UILabel, UIView, UIScrollView;
@protocol AWENearbySkylightFavoriteListViewDataSource, AWENearbySkylightFavoriteListViewDelegate;

@interface AWENearbySkylightFavoriteListView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (nonatomic) BOOL isSingle;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *rightTitleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWENearbySkylightFavoriteEmptyView *emptyView;
@property (weak, nonatomic) id<AWENearbySkylightFavoriteListViewDataSource> dataSource;
@property (weak, nonatomic) id<AWENearbySkylightFavoriteListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setScrollEnable:(BOOL)a0;
- (void)__buildUI;
- (void)__layoutUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isSingle:(BOOL)a1;
- (id)visibleIndexPathCells;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;

@end
