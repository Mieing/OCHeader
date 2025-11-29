@class NSString, NSMutableArray, UICollectionView;

@interface AWETemplateMaterialSlotsView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) NSMutableArray *allModels;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ didTouchAssetBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadSlotsViewWithCellModels:(id)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
