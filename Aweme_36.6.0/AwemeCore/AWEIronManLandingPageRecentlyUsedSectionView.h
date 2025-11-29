@class UIView, AWEIronManLandingPageCommonCollectionCell, AWEIronManLandingPageCommonItemModel, NSString, UIImageView, UIButton, AWEIronManLandingPageBottomBarView, UICollectionView, AWEIronManLandingPageRecentlyUsedViewModel, UILabel;

@interface AWEIronManLandingPageRecentlyUsedSectionView : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) AWEIronManLandingPageRecentlyUsedViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIImageView *moreButtonImageView;
@property (retain, nonatomic) UIView *edgeView;
@property (retain, nonatomic) UIView *dragingView;
@property (nonatomic) unsigned long long dragingIndex;
@property (retain, nonatomic) AWEIronManLandingPageCommonCollectionCell *dragingCell;
@property (retain, nonatomic) AWEIronManLandingPageCommonItemModel *dragingItemModel;
@property (retain, nonatomic) AWEIronManLandingPageBottomBarView *bottomBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeDidChange:(long long)a0;
- (void)trackMoreButtonClick;
- (void)trackItemClickAtIndex:(unsigned long long)a0;
- (void)trackItemShowAtIndex:(unsigned long long)a0;
- (void)impactFeedback;
- (void)addBottomBar;
- (void)setThemeUI;
- (void)dragingBegan:(id)a0;
- (void)dragingChanged:(id)a0;
- (void)dragingEnded:(id)a0;
- (id)getDragingIndexPathWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)removeBottomBar;
- (void)restoreDragingView;
- (void)restoreDragingCell;
- (void)trackDragingToDeleteCollectionAtIndex:(unsigned long long)a0;
- (void)moreButtonDidClick:(id)a0;
- (void)trackDragingToDeleteRecentlyUsedAtIndex:(unsigned long long)a0;
- (void)trackDragingToAddCollectionAtIndex:(unsigned long long)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)initWithViewModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)containerView;
- (void)layoutSubviews;
- (void)longPressGesture:(id)a0;
- (void)setUpUI;

@end
