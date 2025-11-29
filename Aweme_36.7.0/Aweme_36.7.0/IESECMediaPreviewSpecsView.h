@class NSArray, UICollectionView, NSString, UIView;

@interface IESECMediaPreviewSpecsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *skuSpecCollectionView;
@property (retain, nonatomic) UIView *skuBorderView;
@property (copy, nonatomic) NSArray *titles;
@property (nonatomic) unsigned long long index;
@property (weak, nonatomic) UICollectionView *previewCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)specTitleTypeAtIndex:(long long)a0;
- (void)updateSKUCollectionView;
- (void)updateSKUSpecState;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;
- (id)initWithTitles:(id)a0;

@end
