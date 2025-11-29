@class IESLiveImageLabelButton, UICollectionView, NSArray, UIView, NSString;
@protocol IESLiveFunctionSquareCategorySectionViewDelegate;

@interface IESLiveFunctionSquareCategorySectionView : UITableViewHeaderFooterView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *selectedLineView;
@property (retain, nonatomic) IESLiveImageLabelButton *selectorButton;
@property (retain, nonatomic) NSArray *dataSource;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) unsigned long long sceneType;
@property (nonatomic) double historyOffsetX;
@property (weak, nonatomic) id<IESLiveFunctionSquareCategorySectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)singleSectionHeight;
+ (id)reuseIdentifier;
+ (double)sectionHeight;

- (void)updateLineWithAnimation:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForCellWith:(long long)a0;
- (double)stringWidth:(id)a0;
- (void)updateWithSceneType:(unsigned long long)a0;
- (void)updateTabSelectedIndex:(long long)a0;
- (void)updateSelectCellUIWithSelectedIndex:(long long)a0;
- (void)currentSegmentControlScroll;
- (void)updateFilterButtonWithSelectedIndex:(long long)a0;
- (void)selectItemAtIndexPathItem:(long long)a0;
- (void)didClickSelectorButton;
- (void)updateTabSelectedLineViewOffset:(double)a0;
- (id)getCurrentTabName;
- (id)rawNodeWithIndex:(long long)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setupUI;
- (void)updateWithDataSource:(id)a0;

@end
