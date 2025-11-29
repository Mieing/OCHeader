@class NSArray, NSString, UICollectionView;

@interface AFDChallengeDetailHorizontalSimilarCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) NSArray *similarChallenges;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *trackGroupId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)challengeLabelWithText:(id)a0;
- (void)trackDidClickChallengeCellWithModel:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)titleLabel;
- (void)setupUI;

@end
