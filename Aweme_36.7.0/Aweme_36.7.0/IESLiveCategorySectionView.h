@class NSArray, UICollectionView, ListCategoryResponse_CategoryNode, UIView, NSString;
@protocol IESLiveCategorySectionViewDelegate;

@interface IESLiveCategorySectionView : UICollectionReusableView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IESLiveCollectionViewLockHeaderProtocol>

@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) ListCategoryResponse_CategoryNode *currentModel;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *selectedLineView;
@property (weak, nonatomic) id<IESLiveCategorySectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double collectionViewHeight;

+ (id)reuseIdentifier;

- (void)updateLineWithAnimation:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForCellWith:(long long)a0;
- (double)stringWidth:(id)a0;
- (void)updateInfoWithModeList:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
