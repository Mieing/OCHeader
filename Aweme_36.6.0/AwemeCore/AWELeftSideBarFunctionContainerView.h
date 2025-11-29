@class NSArray, UICollectionView, AWELeftSideBarFunctionFooterView, NSString, AWESideBarFunctionGradientFooterView;
@protocol AWELeftSideBarFunctionContainerViewDelegate;

@interface AWELeftSideBarFunctionContainerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWELeftSideBarBaseCollectionViewCellDelegate, AWELeftSideBarFunctionFooterViewDelegate, AWELeftSideBarCollectionViewDelegateFlowLayout, AWESideBarFunctionGradientFooterViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWELeftSideBarFunctionFooterView *footerView;
@property (retain, nonatomic) AWESideBarFunctionGradientFooterView *gradientFooterView;
@property (nonatomic) unsigned long long footerViewStyle;
@property (weak, nonatomic) id<AWELeftSideBarFunctionContainerViewDelegate> delegate;
@property (readonly, nonatomic) NSArray *modules;
@property (readonly, nonatomic) unsigned long long numberOfColumn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)girdStyleInsetBottom;
+ (double)itemWidthWithContainerWidth:(double)a0 numberOfColumn:(unsigned long long)a1;

- (void)initView;
- (id)leftSideBarBaseBaseCollectionViewCellOnCreateView:(id)a0 itemModel:(id)a1;
- (id)collectionView:(id)a0 layout:(id)a1 configModelForSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 borderEdgeInsertsForSection:(long long)a2;
- (void)updateViewStyle:(long long)a0;
- (void)updateOptionalView:(id)a0;
- (void)initFooterView;
- (void)initGradientFooterView;
- (BOOL)p_isGridStyleAtSection:(unsigned long long)a0;
- (void)p_addCornerRadiusWithCell:(id)a0 indexPath:(id)a1 moduleType:(id)a2;
- (void)functionBottomViewDidClick:(id)a0;
- (void)gradientFooterViewDidClickMainButton:(id)a0;
- (void)updateModules:(id)a0;
- (void)updateNumberOfColumn:(unsigned long long)a0;
- (void)setEntranceBadgeHidden:(BOOL)a0;
- (void)updateFooterIconWithUrl:(id)a0;
- (void)updateFooterLabelText:(id)a0;
- (void)updateFooterViewStyle:(unsigned long long)a0;
- (void)updateGradientFooterColors:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)reload;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)setFooterHidden:(BOOL)a0;
- (void)initCollectionView;

@end
