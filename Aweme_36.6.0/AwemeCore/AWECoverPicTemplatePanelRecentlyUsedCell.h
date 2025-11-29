@class AWECoverPicTemplatePanelLoadingView, NSString, UICollectionView, ACCPicTemplatePanelDataManager, UICollectionViewFlowLayout, AWEVideoCoverEditorRecentlyUsedCategoryModel;
@protocol AWECoverPicTemplatePanelContentCellDelegate;

@interface AWECoverPicTemplatePanelRecentlyUsedCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWECoverPicTemplatePanelContentCellProtocol>

@property (nonatomic) unsigned long long section;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) AWECoverPicTemplatePanelLoadingView *loadingView;
@property (retain, nonatomic) ACCPicTemplatePanelDataManager *dataManager;
@property (retain, nonatomic) AWEVideoCoverEditorRecentlyUsedCategoryModel *categoryModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECoverPicTemplatePanelContentCellDelegate> delegate;

- (long long)indexOfCurTemplateModel;
- (BOOL)isSelected:(id)a0;
- (void)scrollViewDidEndScrollWith:(id)a0;
- (void)didUnselectWithIndexPath:(id)a0;
- (void)didSelectWithIndexPath:(id)a0;
- (void)preloadPicTemplateWithSelectIndexPath:(id)a0;
- (void)updateLayoutItemSize;
- (void)updateSelectStatusIfNeeded;
- (BOOL)isItemVertical;
- (void)configWithDataManager:(id)a0 categoryModel:(id)a1 section:(unsigned long long)a2;
- (id)convertToVirtualIndexPath:(id)a0;
- (id)convertToRealIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)indexPathsForVisibleItems;
- (void)setupUI;
- (void)updateUI;
- (void)updateContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
