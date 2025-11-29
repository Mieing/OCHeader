@class AWEDoubleColumnSearchMerchandiseFilterComponentModel, NSString, UICollectionView, AWEDoubleColumnSearchMerchandiseFilterManager;

@interface AWEEcomSearchSidebar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *sidebarView;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *model;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *manager;
@property (nonatomic) unsigned long long currentSelectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)childrenComponent;
- (void)updateCurrentSelectedIndex;
- (void)setUpSidebarView;
- (void)scrollPositionCenteredVertically;
- (double)allFilterCellHeights;
- (id)initWithModel:(id)a0 manager:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end
