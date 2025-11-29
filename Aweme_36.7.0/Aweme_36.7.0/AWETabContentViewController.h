@class AWEBaseListSectionViewModel, NSMutableDictionary, UICollectionView, NSString;
@protocol AWETabContentViewControllerDelegate;

@interface AWETabContentViewController : UIViewController <AWEBaseListViewControllerDataSource, AWETabContentSectionControllerDelegate, UIScrollViewDelegate> {
    BOOL _willPerformBatchUpdates;
}

@property (retain, nonatomic) AWEBaseListSectionViewModel *contentSectionViewModel;
@property (retain, nonatomic) NSMutableDictionary *itemViewControllerDictionary;
@property (nonatomic) long long currentIndex;
@property (nonatomic, getter=isDragging) BOOL dragging;
@property (weak, nonatomic) id<AWETabContentViewControllerDelegate> delegate;
@property (readonly, nonatomic) UICollectionView *contentScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sectionViewModels;
- (void)listWillPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (id)itemViewAtIndex:(long long)a0;
- (void)reloadTabContent;
- (void)updateSelectedIndex:(long long)a0 animated:(BOOL)a1;
- (id)itemViewControllerAtIndex:(long long)a0;
- (void)cleanTabContent;
- (void)addItemViewController:(id)a0 atIndex:(long long)a1;
- (void)reloadTabContentWithCount:(long long)a0;
- (BOOL)isScrollingByDraging;
- (void)scrollToSelectedItem:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupCollectionView;

@end
