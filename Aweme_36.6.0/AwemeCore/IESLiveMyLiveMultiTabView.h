@class NSArray, UICollectionView, NSString, UIView;

@interface IESLiveMyLiveMultiTabView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *tabItems;
@property (retain, nonatomic) UIView *indicator;
@property (nonatomic) long long currentSelectedTabIndex;
@property (nonatomic) BOOL didSelectDefaultTab;
@property (copy, nonatomic) id /* block */ didSelectTabWithPageItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadWithTabItems:(id)a0;
- (void)locateTabItem:(id)a0;
- (void)refreshIndicatorPositionWithProgress:(double)a0;
- (double)selectionWidth;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
