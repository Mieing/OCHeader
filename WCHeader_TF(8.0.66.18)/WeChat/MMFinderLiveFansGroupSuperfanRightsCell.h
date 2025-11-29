@class NSArray, UICollectionView, NSString, MMUILabel;

@interface MMFinderLiveFansGroupSuperfanRightsCell : MMFinderLiveFansGroupDetailBaseTableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initUI;
- (void)configWithRightItems:(id)a0;
- (void)layoutSubviews;
- (double)getCollectionViewHorizontalInset;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
