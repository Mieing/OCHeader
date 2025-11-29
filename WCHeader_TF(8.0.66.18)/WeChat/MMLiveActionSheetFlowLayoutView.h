@class NSString, NSArray, UICollectionViewFlowLayout, MMScrollActionSheet, MMLiveActionSheetFlowLayoutCustomConfig, MMGradientBottomView, UICollectionView, NSIndexPath;
@protocol MMLiveActionSheetFlowLayoutViewDelegate;

@interface MMLiveActionSheetFlowLayoutView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MMLiveActionSheetCollectionCellDelegate>

@property (retain, nonatomic) NSArray *actionSheetItems;
@property (retain, nonatomic) NSArray *sctionTitleArray;
@property (retain, nonatomic) UICollectionView *actionSheetCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *actionSheetCollectionLayout;
@property (retain, nonatomic) NSIndexPath *firstRedDotIndexPath;
@property (retain, nonatomic) MMGradientBottomView *bottomGradientView;
@property (weak, nonatomic) id<MMLiveActionSheetFlowLayoutViewDelegate> delegate;
@property (weak, nonatomic) MMScrollActionSheet *actionSheet;
@property (retain, nonatomic) MMLiveActionSheetFlowLayoutCustomConfig *customConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getActionSheetCollectionView;
- (void)initView;
- (void)updateActionSheetCollectionView:(BOOL)a0;
- (void)layoutSubviews;
- (void)laytoutUI;
- (void)createBottomGradientViewIfNeeded;
- (void)layoutBottomGradientView;
- (BOOL)showSectionHeader;
- (double)getCurrentCellVerticalSpacing;
- (double)getCurrentSectionVerticalSpacing;
- (double)getCurrentCellVerticalMarginBottom;
- (double)getCurrentCellHorizontalMargin;
- (double)getCurrentSectionHeaderHeight;
- (void)updateCollectionLayout;
- (void)fitThatWidth:(double)a0;
- (void)relayoutView;
- (void)updateWithActionSheetItems:(id)a0 sctionTitleArray:(id)a1 showInView:(id)a2;
- (id)getCurrentActionSheetItems;
- (double)getCellHorizontalMargin;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)getTitleAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)onActionSheetItemClicked:(id)a0;
- (void).cxx_destruct;

@end
