@class NSArray, UICollectionView, NSMutableDictionary, UICollectionViewFlowLayout, NSString, AWESearchSeedFilterViewUtil;
@protocol AWESearchSeedFilterDoubleSectionViewDelegate;

@interface AWESearchSeedFilterDoubleSectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (copy, nonatomic) NSArray *models;
@property (copy, nonatomic) NSArray *words;
@property (weak, nonatomic) id<AWESearchSeedFilterDoubleSectionViewDelegate> delegate;
@property (retain, nonatomic) AWESearchSeedFilterViewUtil *configInfo;
@property (readonly, nonatomic) long long selectedIndex;
@property (retain, nonatomic) NSMutableDictionary *sectionMaxInfo;
@property (nonatomic) double inner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureUI;
- (void)registCollectionViewCells;
- (void)selectedIndexPath:(id)a0;
- (void)updateWithModels:(id)a0 selectedIndex:(id)a1;
- (id)updateContConfigForCont:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
