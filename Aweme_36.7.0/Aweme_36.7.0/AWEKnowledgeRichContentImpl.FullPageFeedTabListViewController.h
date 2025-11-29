@class NSNumber, UIScrollView;

@interface AWEKnowledgeRichContentImpl.FullPageFeedTabListViewController : AWEBaseTabListViewController <AWEKnowledgeRichContentImpl.FullPageFeedTabListProtocol, IESSegmentedControlDelegae, AWEKnowledgeRichContentImpl.FullPageFeedCommonListProtocol> {
    void /* unknown type, empty encoding */ containerContext;
    void /* unknown type, empty encoding */ locationConfig;
    void /* unknown type, empty encoding */ headerVC;
    void /* unknown type, empty encoding */ itemVCs;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tabListLifeCycleDispatcher;
    void /* unknown type, empty encoding */ currentSegmentControl;
}

@property (nonatomic, retain) NSNumber *specialTabbarHeight;
@property (nonatomic) BOOL disableTabbarHidden;
@property (nonatomic) BOOL isShowingTabBarInTopBar;
@property (nonatomic, readonly) UIScrollView *currentScrollView;

- (id)initWithNibName:(id)a0 bundle:(id)a1 viewModel:(id)a2;
- (void)setupContainerScrollView:(id)a0;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:(id)a0 index:(long long)a1;
- (id)segmentedControlForTabList;
- (double)heightForSegmentedControl;
- (void)updateSegmentedControl:(id)a0 itemModelsArray:(id)a1 itemConfigsArray:(id)a2;
- (void)tabListContainerDidSelectItemAtIndex:(long long)a0 itemViewController:(id)a1 isByTap:(BOOL)a2;
- (void)tabListContainerScrollViewDidScroll:(id)a0;
- (void)tabListContainerScrollViewWillBeginDragging:(id)a0;
- (void)tabListContainerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)tabListContainerDidEndScrolling:(id)a0;
- (void)tabListDidTapItemAtIndex:(long long)a0;
- (BOOL)tabContentUseMaxHeight;
- (void)segmentedControl:(id)a0 didTapAtIndex:(long long)a1;
- (id)initWithLocationCofig:(id)a0 containerContext:(id)a1;
- (void)tabListTabContainerDidScroll:(struct CGPoint { double x0; double x1; })a0;
- (void)tabListContainerScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (id)feedListForType:(unsigned long long)a0;
- (void)updateItemTitleWithItemTitle:(id)a0 locationType:(unsigned long long)a1;
- (id)tabItemVCForType:(unsigned long long)a0;
- (void)scrollToItemWithLocationType:(unsigned long long)a0 animated:(BOOL)a1;
- (double)topSafeAreaForTabList;
- (BOOL)enableSegmentedControlForTabList;
- (void)setupTabListWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)currentLocation;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
