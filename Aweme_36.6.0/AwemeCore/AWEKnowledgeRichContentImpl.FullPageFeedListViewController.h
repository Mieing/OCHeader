@class UIScrollView, NSArray;

@interface AWEKnowledgeRichContentImpl.FullPageFeedListViewController : AWEBaseListViewController <UIScrollViewDelegate, AWETabListHeaderViewControllerProtocol, AWEKnowledgeRichContentImpl.FullPageFeedTabListHeaderAdapter, AWETabListItemViewControllerProtocol, AWEKnowledgeRichContentImpl.FullPageFeedTabListItemAdapter, AWEFullPageFeedListProtocol, AWEKnowledgeRichContentImpl.FullPageFeedCommonListProtocol> {
    void /* unknown type, empty encoding */ tabTitle;
    void /* unknown type, empty encoding */ classDic;
    void /* unknown type, empty encoding */ businessOrder;
    void /* unknown type, empty encoding */ containerContext;
    void /* unknown type, empty encoding */ headerHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listLifeCycleDispatcher;
    void /* unknown type, empty encoding */ contentSizeObservation;
}

@property (nonatomic) unsigned long long locationType;
@property (nonatomic, readonly) UIScrollView *currentScrollView;
@property (nonatomic, readonly) id currentListContainer;
@property (nonatomic, readonly) NSArray *currentSectionViewModels;

- (void)configWithHeaderModel:(id)a0;
- (id)tabContentScrollView;
- (id)segmentedControlItemConfigForTabList:(id)a0;
- (void)listDidReloadDataWithCollectionView:(id)a0;
- (void)listWillPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)listWillReloadDataWithCollectionView:(id)a0;
- (void)updateScrollViewContentOffsetY:(double)a0 animated:(BOOL)a1;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (id)initWithLocationCofig:(id)a0 containerContext:(id)a1;
- (void)appendSectionViewModels:(id)a0 businessType:(id)a1;
- (id)sectionViewModelsForBusinessType:(id)a0;
- (void)registerSectionControllerClass:(id)a0 businessType:(id)a1;
- (id)feedListForType:(unsigned long long)a0;
- (BOOL)currentIsTop;
- (void)setScroll:(BOOL)a0;
- (void)interruptScroll;
- (void)deleteSectionViewModelsForBusinessType:(id)a0;
- (void)insertSectionViewModels:(id)a0 businessType:(id)a1 atIndex:(long long)a2;
- (long long)indexForSectionViewModel:(id)a0;
- (void)setBusinessOrder:(id)a0;
- (void)updateHeaderHeightWithHeight:(double)a0;
- (void)updateSegmentedItemWithItem:(id)a0;
- (void)registerDelegateWithDelegate:(id)a0;
- (void)scrollToTop;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithCoder:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupCollectionView:(id)a0;
- (double)heightForHeaderView;

@end
