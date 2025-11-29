@class MJImageComposingViewModel, NSString, UICollectionView;
@protocol MJImageMaterialPickerDelegate;

@interface MJImageMaterialPicker : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) MJImageComposingViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *selectedMaterialID;
@property (weak, nonatomic) id<MJImageMaterialPickerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 scene:(unsigned long long)a1;
- (id)initWithViewModel:(id)a0 scene:(unsigned long long)a1 selectedMaterialID:(id)a2;
- (void)_setupViews;
- (void)_layoutViews;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)updateSelectedMaterialWithID:(id)a0;
- (void)_fetchItems;
- (void)_preloadFirstItem;
- (id)materialItems;
- (void).cxx_destruct;

@end
