@class NSString, UICollectionView, UILabel, AFDStoryUserListDiverseDiggModel;

@interface AFDStoryUserListDiverseDiggView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AFDStoryUserListDiverseDiggFlowLayoutDelegate, AWEUserListGeneralCellCustomContentViewProtocol>

@property (retain, nonatomic) UILabel *generalDiggLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AFDStoryUserListDiverseDiggModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)collectionViewWidth;
- (id)flowLayoutDataSource;
- (double)collectionViewLeadingInset;
- (double)p_generalDiggTitleWidthWithTitle:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)setupUI;

@end
