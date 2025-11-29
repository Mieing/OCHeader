@class NSArray, NSString, UICollectionView;
@protocol LSIMTagsViewDataSource, LSIMTagsViewDelegate;

@interface LSIMTagsView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (copy, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) unsigned long long alignStyle;
@property (nonatomic) double cellSpacing;
@property (nonatomic) double lineSpacing;
@property (weak, nonatomic) id<LSIMTagsViewDataSource> dataSource;
@property (weak, nonatomic) id<LSIMTagsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectedItemValues;
- (double)getCurrentHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutAlignStyle:(unsigned long long)a1 cellSpacing:(double)a2 lineSpacing:(double)a3;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupView;
- (id)selectedItems;

@end
