@class UIStackView, NSIndexPath, NSArray, UIView, NSString, NSLayoutConstraint, UICollectionView, MJShootComposingTemplatePanelViewModel, UIScrollView;
@protocol MJShootComposingTemplatePanelViewDelegate;

@interface MJShootComposingTemplatePanelView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MJShootComposingTemplatePageViewDelegate, MJShootComposingTemplatePanelViewModelDelegate>

@property (retain, nonatomic) UICollectionView *titleCollectionView;
@property (retain, nonatomic) NSIndexPath *selectedTitleIndexPath;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UIStackView *scrollContentView;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) NSIndexPath *anchoredIndexPath;
@property (retain, nonatomic) NSLayoutConstraint *indicatorLeading;
@property (retain, nonatomic) NSLayoutConstraint *indicatorTrailing;
@property (readonly, nonatomic) NSArray *pageViews;
@property (readonly, nonatomic) MJShootComposingTemplatePanelViewModel *viewModel;
@property (weak, nonatomic) id<MJShootComposingTemplatePanelViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)commonInit;
- (void)setupViews;
- (void)setupPanelTitleCollectionView;
- (void)setupPanelTitleLineView;
- (void)setupPanelTemplateCollectionView;
- (void)layoutViews;
- (void)bindViews;
- (id)findPageViewWithCurrentDowloadingTemplateID:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)titleCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1 shouldScrollPageView:(BOOL)a2;
- (void)scrollToPageAtIndexPath:(id)a0 shouldScrollPageView:(BOOL)a1;
- (void)scrollToPageAtIndexPath:(id)a0;
- (void)updateLineViewLayoutWithIndexPath:(id)a0;
- (void)anchorIndicatorToCell:(id)a0 atIndexPath:(id)a1;
- (void)anchorIndicatorToLeading;
- (void)anchorIndicatorToTrailing;
- (void)uninstallIndicatorConstraints;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (double)currentPosition;
- (long long)currentPageIndex;
- (void)shootComposingTemplatePageView:(id)a0 didSelectItem:(id)a1 atIndex:(unsigned long long)a2;
- (void)shootComposingTemplatePageView:(id)a0 willDisplayTemplateItem:(id)a1 atIndex:(unsigned long long)a2 isReloadingData:(BOOL)a3;
- (void)shootComposingTemplatePageView:(id)a0 didEndDisplayingTemplateItem:(id)a1 atIndex:(unsigned long long)a2 isReloadingData:(BOOL)a3;
- (void)reloadData;
- (void)reloadDataWithInsertedPageAtIndex:(unsigned long long)a0;
- (long long)scrollTargetPageIndexAfterInsertionAtIndex:(unsigned long long)a0;
- (void)scrollAfterInsertionOrRemovalToTargetPageAtIndex:(long long)a0;
- (void)reloadDataWithRemovedPageAtIndex:(unsigned long long)a0;
- (long long)scrollTargetPageIndexAfterRemovalAtIndex:(unsigned long long)a0;
- (void)reloadDataWithSelectedTemplateID:(id)a0;
- (id)calcSelectedTitleIndexPath;
- (void).cxx_destruct;

@end
