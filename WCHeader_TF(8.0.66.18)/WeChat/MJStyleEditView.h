@class UIButton, NSString, MJMaterialLoadingStatusCoordinator, MJStyleEditData, MJCollectionView;
@protocol MJStyleEditViewDelegate;

@interface MJStyleEditView : MMUIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) MJStyleEditData *data;
@property (retain, nonatomic) MJCollectionView *collectionView;
@property (retain, nonatomic) UIButton *reloadButton;
@property (weak, nonatomic) id<MJStyleEditViewDelegate> delegate;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) MJMaterialLoadingStatusCoordinator *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setupViews;
- (void)reloadWithData:(id)a0;
- (void)reloadConstraints;
- (void)selectedStateChangedFrom:(long long)a0 to:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)reuseId;
- (void).cxx_destruct;

@end
