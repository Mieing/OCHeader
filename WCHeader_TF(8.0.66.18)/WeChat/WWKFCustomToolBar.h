@class CAGradientLayer, NSString, UICollectionView, NSMutableArray;
@protocol WWKFCustomToolBarDelegate;

@interface WWKFCustomToolBar : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WWKFCustomToolBarItemCellDelegate> {
    NSMutableArray *m_arrHadExposureToolBarItemTitile;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CAGradientLayer *leftGradientLayer;
@property (retain, nonatomic) CAGradientLayer *rightGradientLayer;
@property (weak, nonatomic) id<WWKFCustomToolBarDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *customToolBarItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)reloadGradientLayer;
- (void)updateCustomToolBarItems:(id)a0 andUserName:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)stoppedScrollingForExposure;
- (void)handleExposureToolBarItem;
- (void)onClickCustomToolBarItemCell:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
