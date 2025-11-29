@class NSArray, UICollectionView, NSString, UIView;

@interface IESLivePKRecordFilterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *filterTabArray;
@property (nonatomic) double filterWidth;
@property (nonatomic) long long selectedCategoryIndex;
@property (copy, nonatomic) id /* block */ foldedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)foldedFilterView;
- (id)initWithTabArray:(id)a0 width:(double)a1;
- (void)updateFilterTabArray:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupViews;

@end
