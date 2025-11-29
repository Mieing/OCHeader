@class NSMutableDictionary, ACCPicTemplatePanelDataManager, UICollectionView, UICollectionViewFlowLayout, NSIndexPath, NSString;
@protocol AWECoverPicTemplatePanelContentViewDelegate;

@interface AWECoverPicTemplatePanelContentView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, AWECoverPicTemplatePanelContentCellDelegate>

@property (retain, nonatomic) UICollectionView *picTemplateCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (weak, nonatomic) ACCPicTemplatePanelDataManager *dataManager;
@property (retain, nonatomic) NSMutableDictionary *offSetCacheMap;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (weak, nonatomic) id<AWECoverPicTemplatePanelContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToIndexPath:(id)a0 animated:(BOOL)a1;
- (BOOL)panelIsOnTop;
- (void)scrollToTopForPanelAtIndexPath:(id)a0;
- (void)didUnselectWithIndexPath:(id)a0;
- (void)didSelectWithIndexPath:(id)a0;
- (void)didSelectTemplateModel:(id)a0 atIndexPath:(id)a1 contentCell:(id)a2;
- (void)willDisplayTemplateModel:(id)a0 atIndexPath:(id)a1 contentCell:(id)a2;
- (void)contentCellDidScroll:(id)a0;
- (void)updateCategoryToSelect:(id)a0;
- (void)reloadDataWithIndexSet:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithDataManager:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)isValidIndexPath:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupUI;

@end
