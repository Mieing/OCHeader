@class RxCollectionViewDelegateProxy, NSMapTable, UICollectionView, NSHashTable, NSIndexSet, RxCollectionViewOrthogonalScrollerEmbeddedScrollView, NSString;

@interface RxCollectionViewOrthogonalScrollerSectionController : NSObject <UIScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, RxCollectionLayoutOrthogonalScrollerController> {
    RxCollectionViewDelegateProxy *_delegateProxy;
}

@property (readonly, weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMapTable *scrollViewFromSectionMap;
@property (retain, nonatomic) NSMapTable *scrollViewToSectionMap;
@property (readonly, nonatomic) NSHashTable *frontMostElements;
@property (retain, nonatomic) NSIndexSet *currentOrthogonalSectionIndexes;
@property (retain, nonatomic) RxCollectionViewOrthogonalScrollerEmbeddedScrollView *scrollViewCurrentlyBeingConfigured;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__collectionViewDelegateDidChanged:(id)a0;
- (struct CGSize { double x0; double x1; })_contentSizeForSection:(long long)a0 layout:(id)a1;
- (void)_configureScrollView:(id)a0 forSection:(long long)a1 baseContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)_forceElementsOnTopAsNeeded;
- (struct CGPoint { double x0; double x1; })__contentOffsetForScrollingToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 containingScrollView:(id)a3;
- (long long)_sectionForSectionScrollView:(id)a0;
- (void)addElementIfNeeded:(id)a0;
- (void)reconfigureOrthogonalSectionsForUpdate:(id)a0;
- (void)restoreLayoutContentOffsetsFromEmbeddedScrollViews;
- (void)__collectionViewDidChanged:(id)a0;
- (id)collectionViewForSection:(long long)a0;
- (id)collectionViewForIndexPath:(id)a0;
- (id)addCollectionViewForSection:(long long)a0;
- (id)addCollectionViewForIndexPath:(id)a0;
- (void)synchronizeDelegates;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)initWithCollectionView:(id)a0;
- (id)_sectionScrollViewForSection:(long long)a0;
- (id)_addSectionScrollViewForIndexPath:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)performLayout;
- (id)_managedScrollViews;
- (void)scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)_scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (id)_sectionScrollViewForIndexPath:(id)a0;
- (BOOL)isElementInOrthogonalScrollingSection:(id)a0;
- (BOOL)isIndexPathInOrthogonalScrollingSection:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)adjustElementHierarchyOrderingForOrthogonalElementIfNeeded:(id)a0 layoutAttributes:(id)a1;
- (id)_addSectionScrollViewForSection:(long long)a0;
- (void)forwardInvocation:(id)a0;
- (id)compositionalLayout;

@end
